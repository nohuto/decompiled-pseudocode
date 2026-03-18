/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C0025B3C
 * Callers:
 *     Control_EvtDmaCallback @ 0x1C00243E0 (Control_EvtDmaCallback.c)
 *     Control_Transfer_Map @ 0x1C0025890 (Control_Transfer_Map.c)
 * Callees:
 *     memmove @ 0x1C0008700 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00224A8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C00227F0 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C002326C (TR_GetPacketCount.c)
 *     TR_InitializeLinkTrb @ 0x1C00233AC (TR_InitializeLinkTrb.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0026D2C (UsbDevice_DirectWriteDoorbell.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C0026D84 (WPP_RECORDER_SF_DDDqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00274F0 (WPP_RECORDER_SF_DDqq.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

void __fastcall Control_Transfer_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // r15
  int v4; // edx
  int v5; // r12d
  int PacketCount; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // edi
  __int64 v11; // r11
  __int64 v12; // r14
  unsigned int v13; // r13d
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  unsigned int v18; // r8d
  _OWORD *v19; // rdi
  int v20; // edx
  int v21; // edx
  int v22; // edi
  unsigned int v23; // r14d
  int v24; // edi
  int v25; // edi
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  char v32; // al
  unsigned int v33; // r14d
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  int v39; // edi
  KIRQL v40; // dl
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  signed __int32 v44[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v45; // [rsp+20h] [rbp-89h]
  __int128 v46; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v47; // [rsp+60h] [rbp-49h]
  __int64 v48; // [rsp+68h] [rbp-41h]
  int v49; // [rsp+70h] [rbp-39h]
  _OWORD *v50; // [rsp+78h] [rbp-31h]
  __int64 v51; // [rsp+80h] [rbp-29h]
  _OWORD *v52; // [rsp+88h] [rbp-21h]
  __int64 v53; // [rsp+90h] [rbp-19h]
  __int128 v54; // [rsp+98h] [rbp-11h]
  __int128 v55; // [rsp+A8h] [rbp-1h]
  char v56; // [rsp+110h] [rbp+67h]
  unsigned int v58; // [rsp+120h] [rbp+77h]
  int v59; // [rsp+128h] [rbp+7Fh]

  v2 = *(_QWORD *)(a1 + 344);
  v59 = 0;
  v4 = *(_DWORD *)(v2 + 104);
  v51 = *(_QWORD *)(v2 + 48);
  v5 = *(_DWORD *)(v51 + 32) & 1;
  PacketCount = TR_GetPacketCount(a1, v4);
  v8 = *(unsigned int *)(a1 + 192);
  v9 = v7 + 1;
  v49 = PacketCount;
  v10 = v7 + 2;
  v11 = (unsigned int)v7;
  v12 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v8;
  v13 = v7;
  v58 = v7;
  v14 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 272LL);
  v48 = v7;
  v47 = v7;
  v53 = v8;
  v50 = (_OWORD *)v12;
  v56 = v7;
  v54 = v14;
  if ( (v14 & 8) != 0 && (unsigned int)(v8 + 21) > *(_DWORD *)(a1 + 196) )
  {
    TR_InitializeLinkTrb(a1, v9, (__int64)&v46, v7 + 1);
    LODWORD(v7) = 0;
    v15 = *(_QWORD *)(a1 + 176);
    v16 = 2LL * *(unsigned int *)(a1 + 192);
    HIDWORD(v46) |= v10;
    *(_QWORD *)&v46 = *(_QWORD *)(v15 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 184) + 8 * v16) = v46;
    v17 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v17;
  }
  do
  {
    v18 = *(_DWORD *)(a1 + 192);
    v19 = (_OWORD *)(*(_QWORD *)(a1 + 184) + 16LL * v18);
    v52 = v19;
    if ( v18 + 1 <= *(_DWORD *)(a1 + 196) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
      {
        v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v21,
          v18,
          34,
          v45,
          v21,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v18,
          (char)v19,
          *(_DWORD *)(a1 + 200));
        v11 = v48;
        LODWORD(v7) = 0;
      }
      v22 = 0;
      v46 = 0uLL;
      switch ( v9 )
      {
        case 1:
          v23 = DWORD2(v46) & 0xFFFE0000 | 8;
          v22 = 2112;
          *(_QWORD *)&v46 = *(_QWORD *)(v51 + 128);
          if ( *(_DWORD *)(v2 + 104) == (_DWORD)v7 )
            goto LABEL_50;
          if ( v5 )
            v22 = 198720;
          else
            v22 = 133184;
          v9 = 2;
          goto LABEL_55;
        case 2:
          v24 = (v5 << 16) | 0xC00;
          break;
        case 3:
          if ( v5 )
            v25 = 4096;
          else
            v25 = 69632;
          v23 = DWORD2(v46);
          v22 = v25 | 0x10;
          v9 = 7;
          goto LABEL_56;
        case 5:
          v24 = 1024;
          break;
        default:
          v23 = DWORD2(v46);
          if ( (unsigned int)(v9 - 6) <= 1 )
          {
            ++v59;
            v22 = 7200;
            *(_QWORD *)&v46 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v9 == 7 )
            {
              v9 = 9;
              *(_QWORD *)&v46 = v2 & 0xFFFFFFFFFFFFFFF8uLL | 4;
LABEL_57:
              if ( v52 == v50 )
              {
                LODWORD(v7) = 0;
                HIDWORD(v46) = v22 & 0xFFFFFFFE | (*(_DWORD *)(a1 + 200) == 0);
              }
              else
              {
                HIDWORD(v46) = ((unsigned __int8)v22 ^ (unsigned __int8)*(_DWORD *)(a1 + 200)) & 1 ^ v22;
                LODWORD(v7) = 0;
              }
              v36 = v23 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
              v12 = (__int64)v50;
              DWORD2(v46) = v36;
              *v52 = v46;
              ++*(_DWORD *)(a1 + 192);
              goto LABEL_61;
            }
LABEL_50:
            v9 = 3;
            goto LABEL_57;
          }
          goto LABEL_55;
      }
      v26 = *(_DWORD *)(v2 + 64);
      HIDWORD(v46) = v24;
      if ( !v26 )
        return;
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            if ( v13 )
            {
              v30 = v58;
            }
            else
            {
              v29 = *(_QWORD *)(v2 + 96);
              v30 = v58;
              v11 = *(_QWORD *)(v29 + 24LL * v58 + 16);
              v13 = *(_DWORD *)(v29 + 24LL * v58 + 24);
              v48 = v11;
            }
            v31 = 0x10000;
            if ( v9 == 2 )
            {
              if ( v13 <= 0x200
                || (v55 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 272LL), (v55 & 0x40) == 0)
                || (v31 = 512, !v5) )
              {
LABEL_39:
                *(_QWORD *)&v46 = v11;
                if ( v13 > v31 )
                {
                  v33 = v31 | DWORD2(v46) & 0xFFFE0000;
                  v48 = v31 + v11;
                  v13 -= v31;
                  v9 = 5;
                }
                else
                {
                  v58 = v30 + 1;
                  v33 = (v13 ^ DWORD2(v46)) & 0x1FFFF ^ DWORD2(v46);
                  v13 = v7;
                  v9 = 6 - (**(_DWORD **)(v2 + 96) != v30 + 1);
                }
                goto LABEL_48;
              }
              v32 = 1;
              v56 = 1;
            }
            else
            {
              v32 = v56;
            }
            if ( v9 == 5 && v32 )
              v24 |= 0x10000u;
            goto LABEL_39;
          }
          v33 = DWORD2(v46);
LABEL_48:
          v47 += v33 & 0x1FFFF;
          v23 = (v33 ^ ((unsigned int)TR_CalculateTDSize(a1, v49, v47, v9 == 6) << 17)) & 0x3E0000 ^ v33;
          v22 = v24 | 0x10;
LABEL_55:
          if ( (unsigned int)(v9 - 6) > 1 )
            goto LABEL_57;
LABEL_56:
          v22 |= 2u;
          goto LABEL_57;
        }
        if ( !v5 )
          memmove(*(void **)(*(_QWORD *)(v2 + 88) + 16LL), *(const void **)(v2 + 80), *(unsigned int *)(v2 + 104));
        v34 = DWORD2(v46) ^ *(_DWORD *)(v2 + 104);
        *(_QWORD *)&v46 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 24LL);
        v33 = v34 & 0x1FFFF ^ DWORD2(v46);
      }
      else
      {
        v35 = *(_DWORD *)(v2 + 104);
        memmove(&v46, *(const void **)(v2 + 80), v35);
        v24 = HIDWORD(v46) | 0x40;
        v33 = (DWORD2(v46) ^ v35) & 0x1FFFF ^ DWORD2(v46);
      }
      v9 = 6;
      goto LABEL_48;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
    {
      v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDDqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v20,
        v18,
        33,
        v45,
        v20,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v18,
        (char)v19,
        *(_DWORD *)(a1 + 200));
    }
    TR_InitializeLinkTrb(a1, v9, (__int64)&v46, v19 == (_OWORD *)v12);
    LODWORD(v7) = 0;
    *(_QWORD *)&v46 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
    HIDWORD(v46) |= 2u;
    *v19 = v46;
    v17 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v17;
LABEL_61:
    v11 = v48;
  }
  while ( v9 != 9 );
  *(_DWORD *)(v2 + 160) = *(_DWORD *)(a1 + 192);
  v17 = *(_DWORD *)(a1 + 200) == 0;
  v46 = 0uLL;
  v37 = *(_QWORD *)(a1 + 184);
  HIDWORD(v46) = v17;
  *(_OWORD *)(v37 + 16LL * *(unsigned int *)(a1 + 192)) = v46;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v2 + 128) = v59;
  v38 = 0;
  v39 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 352) |= 1u;
  v40 = *(_BYTE *)(a1 + 104);
  if ( v39 == 3 )
    v38 = 2;
  *(_DWORD *)(a1 + 108) = v38;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v40);
  LOBYTE(v41) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    v41,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    35,
    (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_QWORD *)(v2 + 24),
    v2);
  *(_BYTE *)(v12 + 12) ^= 1u;
  _InterlockedOr(v44, 0);
  if ( *(_BYTE *)(a1 + 280) )
    TR_AddTRBRangeToSecureTransferRing(
      a1,
      0LL,
      *(_QWORD **)(v2 + 152),
      v53,
      *(_DWORD *)(a1 + 192),
      (_OWORD *)(v2 + 168),
      a2);
  else
    UsbDevice_DirectWriteDoorbell(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(unsigned int *)(a1 + 64));
  if ( v39 != 3 )
  {
    v42 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v42 + 37)
      || (v43 = *(_QWORD *)(v42 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v43 + 20)) == *(_DWORD *)(v43 + 8)) )
    {
      ESM_AddEvent((PVOID)(v42 + 288));
    }
  }
}
