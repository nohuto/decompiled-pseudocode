/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C002E4C8
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x1C002BE10 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x1C002C278 (Bulk_MapStage.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C001FD40 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C0020098 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C0020B38 (TR_GetPacketCount.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0024664 (UsbDevice_DirectWriteDoorbell.c)
 *     Bulk_InsertLinkTrb @ 0x1C002C074 (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C002FD14 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C002FE4C (WPP_RECORDER_SF_DDDDqDD.c)
 */

int *__fastcall Bulk_Stage_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  unsigned int v12; // r12d
  int PacketCount; // eax
  __int64 v14; // r11
  unsigned int v15; // r9d
  int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r14
  __int128 v20; // xmm0
  char v21; // r9
  int v22; // r8d
  unsigned int v23; // r10d
  unsigned int v24; // edx
  _OWORD *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r11
  unsigned int v29; // esi
  unsigned int v30; // r14d
  int v31; // ecx
  unsigned int v32; // r14d
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // rdx
  unsigned int v39; // esi
  int v40; // eax
  unsigned int v41; // ebx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  _QWORD *v47; // rax
  KIRQL v48; // al
  __int64 v49; // rcx
  KIRQL v50; // dl
  signed __int32 v52[8]; // [rsp+0h] [rbp-C9h] BYREF
  int v53; // [rsp+20h] [rbp-A9h]
  __int128 v54; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-59h]
  __int64 v56; // [rsp+78h] [rbp-51h]
  __int64 v57; // [rsp+80h] [rbp-49h]
  int v58; // [rsp+88h] [rbp-41h]
  int v59; // [rsp+8Ch] [rbp-3Dh]
  __int64 v60; // [rsp+90h] [rbp-39h]
  __int64 v61; // [rsp+98h] [rbp-31h]
  __int128 v62; // [rsp+A0h] [rbp-29h]
  __int128 v63; // [rsp+B0h] [rbp-19h]
  __int128 v64; // [rsp+C0h] [rbp-9h]
  __int128 v65; // [rsp+D0h] [rbp+7h]
  int v66; // [rsp+130h] [rbp+67h]
  unsigned int v68; // [rsp+140h] [rbp+77h]
  unsigned int v69; // [rsp+148h] [rbp+7Fh]

  v2 = *(_QWORD *)a1;
  v61 = v2;
  v68 = 0;
  v4 = *(_QWORD *)(v2 + 56);
  v5 = *(_QWORD *)(v2 + 48);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_OWORD *)(v7 + 272);
  v56 = *(_QWORD *)(v7 + 384);
  v62 = v8;
  if ( (v8 & 0x400000000LL) != 0
    && (v9 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v9 + 40))
    && (v10 = *(_QWORD *)(v4 + 56), *(char *)(v10 + 98) < 0)
    && *(_DWORD *)(v9 + 20) <= 1u
    && (v11 = *(_WORD *)(v10 + 100) & 0x7FF, v6 % v11) )
  {
    v12 = v11 - v6 % v11;
  }
  else
  {
    v12 = 0;
  }
  v58 = *(_DWORD *)(v5 + 32) & 1;
  PacketCount = TR_GetPacketCount(v4, v6);
  v15 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 88) = v14;
  v16 = 5;
  v17 = *(unsigned int *)(v4 + 192);
  v59 = PacketCount;
  v18 = *(_QWORD *)(v4 + 40);
  v19 = *(_QWORD *)(v4 + 184) + 16 * v17;
  v60 = v14;
  v20 = *(_OWORD *)(v18 + 272);
  v69 = v14;
  v55 = v14;
  v57 = v19;
  v66 = v15;
  v63 = v20;
  if ( (v20 & 8) != 0 )
  {
    v21 = 1;
    v22 = 5;
LABEL_23:
    Bulk_InsertLinkTrb(v4, (_QWORD *)a1, v22, v21);
    v15 = v66;
    LODWORD(v14) = 0;
    goto LABEL_11;
  }
  do
  {
    while ( 1 )
    {
LABEL_11:
      v23 = *(_DWORD *)(v4 + 192);
      v24 = *(_DWORD *)(v4 + 196);
      v25 = (_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * v23);
      v54 = 0uLL;
      if ( v23 + v15 > v24 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
            0,
            17,
            v53,
            *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
            *(_DWORD *)(v4 + 64),
            v23,
            (char)v25);
        Bulk_InsertLinkTrb(v4, (_QWORD *)a1, v16, v25 == (_OWORD *)v19);
        v15 = v66;
        goto LABEL_67;
      }
      v64 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 272LL);
      if ( (v64 & 0x2000000000000LL) != 0
        && (v26 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v26 + 20) == 3)
        && (v27 = *(_QWORD *)(v4 + 56), *(_DWORD *)(v27 + 120) == 6) )
      {
        if ( v16 == 7 && v23 + 9 > v24 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v27 + 80),
              *(unsigned __int8 *)(v26 + 135),
              v27,
              18,
              v53,
              *(_BYTE *)(v26 + 135),
              *(_DWORD *)(v27 + 144),
              *(_DWORD *)(v4 + 64),
              v23,
              (char)v25);
          v22 = 7;
          v21 = v25 == (_OWORD *)v19;
          goto LABEL_23;
        }
      }
      else
      {
        v27 = *(_QWORD *)(v4 + 56);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
      {
        WPP_RECORDER_SF_DDDDqDD(
          *(_QWORD *)(v27 + 80),
          v24,
          v27,
          v15,
          v53,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(v27 + 144),
          *(_DWORD *)(v4 + 64),
          v23,
          (char)v25,
          *(_DWORD *)(a1 + 88),
          v15);
        v27 = *(_QWORD *)(v4 + 56);
        LODWORD(v14) = 0;
        v15 = v66;
      }
      if ( v16 == 5 )
      {
        v31 = *(_DWORD *)(v2 + 76);
        v32 = HIDWORD(v54) & 0xFFFF03FF | 0x400;
        HIDWORD(v54) = v32;
        if ( v31 )
        {
          v33 = v31 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              if ( v34 == 1 )
              {
                v35 = v69;
                if ( v69 )
                {
                  v38 = v60;
                  v37 = v68;
                }
                else
                {
                  v36 = *(_QWORD *)(a1 + 56);
                  v37 = v68;
                  v38 = *(_QWORD *)(v36 + 24LL * v68 + 16);
                  v35 = *(_DWORD *)(v36 + 24LL * v68 + 24);
                  v60 = v38;
                }
                *(_QWORD *)&v54 = v38;
                if ( v35 > 0x10000 )
                {
                  v60 = v38 + 0x10000;
                  v39 = DWORD2(v54) & 0xFFFE0000 | 0x10000;
                  v16 = 5;
                  v69 = v35 - 0x10000;
                }
                else
                {
                  v69 = v14;
                  v68 = v37 + 1;
                  v39 = (v35 ^ DWORD2(v54)) & 0x1FFFF ^ DWORD2(v54);
                  v16 = 7;
                  if ( **(_DWORD **)(a1 + 56) != v37 + 1 )
                    v16 = 5;
                }
              }
              else
              {
                v39 = DWORD2(v54);
              }
              goto LABEL_51;
            }
            if ( v58 == (_DWORD)v14 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v40 = DWORD2(v54) ^ *(_DWORD *)(a1 + 40);
            *(_QWORD *)&v54 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
            v39 = v40 & 0x1FFFF ^ DWORD2(v54);
          }
          else
          {
            v41 = *(_DWORD *)(a1 + 40);
            memmove(&v54, *(const void **)(a1 + 64), v41);
            v32 = HIDWORD(v54) | 0x40;
            v39 = (DWORD2(v54) ^ v41) & 0x1FFFF ^ DWORD2(v54);
          }
        }
        else
        {
          v39 = DWORD2(v54) & 0xFFFE0000;
        }
        v16 = 7;
LABEL_51:
        v55 += v39 & 0x1FFFF;
        v42 = TR_CalculateTDSize(v4, v59, v55, v16 == 7);
        v30 = v32 | 0x10;
        v28 = v56;
        v29 = (v39 ^ (v42 << 17)) & 0x3E0000 ^ v39;
        v15 = v66 - 1;
        goto LABEL_52;
      }
      v28 = v56;
      v29 = DWORD2(v54);
      if ( v16 == 7 )
      {
        v16 = 9;
        *(_QWORD *)&v54 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(v27 + 99)) & 3;
        v30 = HIDWORD(v54) & 0xFFFF03DF | 0x1C20;
        goto LABEL_53;
      }
      *(_QWORD *)&v54 = *(_QWORD *)(v56 + 24);
      v29 = v12 & 0x1FFFF | DWORD2(v54) & 0xFFC00000;
      v30 = HIDWORD(v54) & 0xFFFF03EF | 0x410;
      --v15;
      v12 = 0;
      v16 = 7;
LABEL_52:
      v66 = v15;
LABEL_53:
      HIDWORD(v54) = v30;
      v43 = *(_DWORD *)(a1 + 88) + 1;
      *(_DWORD *)(a1 + 88) = v43;
      if ( v16 == 7 )
      {
        if ( v12 && v28 )
        {
          v16 = 8;
          v29 ^= (v29 ^ ((v29 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_57:
          LODWORD(v14) = 0;
          goto LABEL_58;
        }
        v30 |= 2u;
        v15 = 1;
        HIDWORD(v54) = v30;
        v66 = 1;
      }
      if ( v16 != 5 )
        goto LABEL_57;
      LODWORD(v14) = 0;
      if ( !v15 )
      {
        v15 = *(_DWORD *)(a1 + 84) - v43;
        if ( *(_DWORD *)(a1 + 80) < v15 )
          v15 = *(_DWORD *)(a1 + 80);
        v66 = v15;
      }
LABEL_58:
      if ( v25 != (_OWORD *)v57 )
        HIDWORD(v54) = ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD *)(v4 + 200)) & 1 ^ v30;
      v44 = v29 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      v2 = v61;
      DWORD2(v54) = v44;
      *v25 = v54;
      v45 = (unsigned int)++*(_DWORD *)(v4 + 192);
      if ( v16 == 9 )
        break;
      v19 = v57;
    }
    v65 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 272LL);
    if ( (v65 & 0x2000000000000LL) == 0
      || *(_DWORD *)(*(_QWORD *)(v4 + 48) + 20LL) != 3
      || *(_DWORD *)(*(_QWORD *)(v4 + 56) + 120LL) != 6 )
    {
      break;
    }
    v46 = 8LL;
    do
    {
      v54 = 0uLL;
      HIDWORD(v54) = *(_DWORD *)(v4 + 200) & 1 | 0x2000;
      *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16 * v45) = v54;
      v45 = (unsigned int)++*(_DWORD *)(v4 + 192);
      --v46;
    }
    while ( v46 );
    v19 = v57;
LABEL_67:
    LODWORD(v14) = 0;
  }
  while ( v16 != 9 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v4 + 192);
  v47 = (_QWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192));
  *v47 = 0LL;
  v47[1] = 0LL;
  v48 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v49 = v61;
  *(_BYTE *)(v4 + 104) = v48;
  ++*(_DWORD *)(v49 + 120);
  *(_DWORD *)(v49 + 112) += *(_DWORD *)(a1 + 40);
  v50 = *(_BYTE *)(v4 + 104);
  ++*(_DWORD *)(v4 + 348);
  *(_DWORD *)(v4 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v50);
  *(_BYTE *)(v57 + 12) ^= 1u;
  _InterlockedOr(v52, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v4,
    (_QWORD *)(a1 + 24),
    *(_QWORD **)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    (_OWORD *)(a1 + 128),
    a2);
  return UsbDevice_DirectWriteDoorbell(
           *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v4 + 56) + 144LL),
           *(unsigned int *)(v4 + 64));
}
