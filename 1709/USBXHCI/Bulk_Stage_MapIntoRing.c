/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C00309E0
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x1C002E360 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x1C002E7B4 (Bulk_MapStage.c)
 * Callees:
 *     memmove @ 0x1C0008700 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00224A8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C00227F0 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C002326C (TR_GetPacketCount.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0026D2C (UsbDevice_DirectWriteDoorbell.c)
 *     Bulk_InsertLinkTrb @ 0x1C002E5B0 (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C0032244 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C003237C (WPP_RECORDER_SF_DDDDqDD.c)
 */

void __fastcall Bulk_Stage_MapIntoRing(__int64 a1, char a2)
{
  _DWORD *v2; // r13
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
  unsigned int v15; // r10d
  int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r14
  __int128 v20; // xmm0
  char v21; // r9
  int v22; // r8d
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r14d
  __int64 v29; // r11
  unsigned int v30; // r15d
  int v31; // ecx
  unsigned int v32; // r15d
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // r8d
  __int64 v38; // rdx
  unsigned int v39; // r14d
  int v40; // eax
  unsigned int v41; // ebx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rax
  KIRQL v48; // dl
  signed __int32 v49[8]; // [rsp+0h] [rbp-C9h] BYREF
  int v50; // [rsp+20h] [rbp-A9h]
  __int128 v51; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-59h]
  __int64 v53; // [rsp+78h] [rbp-51h]
  __int64 v54; // [rsp+80h] [rbp-49h]
  int v55; // [rsp+88h] [rbp-41h]
  int v56; // [rsp+8Ch] [rbp-3Dh]
  __int64 v57; // [rsp+90h] [rbp-39h]
  _OWORD *v58; // [rsp+98h] [rbp-31h]
  __int128 v59; // [rsp+A0h] [rbp-29h]
  __int128 v60; // [rsp+B0h] [rbp-19h]
  __int128 v61; // [rsp+C0h] [rbp-9h]
  __int128 v62; // [rsp+D0h] [rbp+7h]
  int v63; // [rsp+130h] [rbp+67h]
  unsigned int v65; // [rsp+140h] [rbp+77h]
  unsigned int v66; // [rsp+148h] [rbp+7Fh]

  v2 = *(_DWORD **)a1;
  v65 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_OWORD *)(v7 + 272);
  v53 = *(_QWORD *)(v7 + 384);
  v59 = v8;
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
  v55 = *(_DWORD *)(v5 + 32) & 1;
  PacketCount = TR_GetPacketCount(v4, v6);
  v15 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 88) = v14;
  v16 = 5;
  v17 = *(unsigned int *)(v4 + 192);
  v56 = PacketCount;
  v18 = *(_QWORD *)(v4 + 40);
  v19 = *(_QWORD *)(v4 + 184) + 16 * v17;
  v57 = v14;
  v20 = *(_OWORD *)(v18 + 272);
  v66 = v14;
  v52 = v14;
  v54 = v19;
  v63 = v15;
  v60 = v20;
  if ( (v20 & 8) != 0 )
  {
    v21 = 1;
    v22 = 5;
LABEL_23:
    Bulk_InsertLinkTrb(v4, a1, v22, v21);
    v15 = v63;
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
      v25 = *(_QWORD *)(v4 + 184) + 16LL * v23;
      v51 = 0uLL;
      v58 = (_OWORD *)v25;
      if ( v23 + v15 > v24 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
            v23,
            17,
            v50,
            *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
            *(_DWORD *)(v4 + 64),
            v23,
            v25);
        Bulk_InsertLinkTrb(v4, a1, v16, v25 == v19);
        v15 = v63;
        goto LABEL_66;
      }
      v61 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 272LL);
      if ( (v61 & 0x2000000000000LL) != 0 )
      {
        v26 = *(_QWORD *)(v4 + 48);
        if ( *(_DWORD *)(v26 + 20) == 3 )
        {
          v27 = *(_QWORD *)(v4 + 56);
          if ( *(_DWORD *)(v27 + 120) == 6 && v16 == 7 && v23 + 9 > v24 )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
              WPP_RECORDER_SF_DDDDq(
                *(_QWORD *)(v27 + 80),
                *(unsigned __int8 *)(v26 + 135),
                v23,
                18,
                v50,
                *(_BYTE *)(v26 + 135),
                *(_DWORD *)(v27 + 144),
                *(_DWORD *)(v4 + 64),
                v23,
                v25);
            v22 = 7;
            v21 = v25 == v19;
            goto LABEL_23;
          }
        }
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v14 )
      {
        WPP_RECORDER_SF_DDDDqDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          v23,
          v24,
          v50,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          v23,
          v25,
          *(_DWORD *)(a1 + 88),
          v15);
        v15 = v63;
        LODWORD(v14) = 0;
      }
      if ( v16 == 5 )
      {
        v31 = v2[19];
        v32 = HIDWORD(v51) & 0xFFFF03FF | 0x400;
        HIDWORD(v51) = v32;
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
                v35 = v66;
                if ( v66 )
                {
                  v38 = v57;
                  v37 = v65;
                }
                else
                {
                  v36 = *(_QWORD *)(a1 + 56);
                  v37 = v65;
                  v38 = *(_QWORD *)(v36 + 24LL * v65 + 16);
                  v35 = *(_DWORD *)(v36 + 24LL * v65 + 24);
                  v57 = v38;
                }
                *(_QWORD *)&v51 = v38;
                if ( v35 > 0x10000 )
                {
                  v57 = v38 + 0x10000;
                  v39 = DWORD2(v51) & 0xFFFE0000 | 0x10000;
                  v16 = 5;
                  v66 = v35 - 0x10000;
                }
                else
                {
                  v66 = v14;
                  v16 = 7;
                  v39 = (v35 ^ DWORD2(v51)) & 0x1FFFF ^ DWORD2(v51);
                  v65 = v37 + 1;
                  if ( **(_DWORD **)(a1 + 56) != v37 + 1 )
                    v16 = 5;
                }
              }
              else
              {
                v39 = DWORD2(v51);
              }
              goto LABEL_50;
            }
            if ( v55 == (_DWORD)v14 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v40 = DWORD2(v51) ^ *(_DWORD *)(a1 + 40);
            *(_QWORD *)&v51 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
            v39 = v40 & 0x1FFFF ^ DWORD2(v51);
          }
          else
          {
            v41 = *(_DWORD *)(a1 + 40);
            memmove(&v51, *(const void **)(a1 + 64), v41);
            v32 = HIDWORD(v51) | 0x40;
            v39 = (DWORD2(v51) ^ v41) & 0x1FFFF ^ DWORD2(v51);
          }
        }
        else
        {
          v39 = DWORD2(v51) & 0xFFFE0000;
        }
        v16 = 7;
LABEL_50:
        v52 += v39 & 0x1FFFF;
        v42 = TR_CalculateTDSize(v4, v56, v52, v16 == 7);
        v30 = v32 | 0x10;
        v29 = v53;
        v28 = (v39 ^ (v42 << 17)) & 0x3E0000 ^ v39;
        v15 = v63 - 1;
        goto LABEL_51;
      }
      v28 = DWORD2(v51);
      v29 = v53;
      if ( v16 == 7 )
      {
        v16 = 9;
        *(_QWORD *)&v51 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(*(_QWORD *)(v4 + 56) + 99LL)) & 3;
        v30 = HIDWORD(v51) & 0xFFFF03DF | 0x1C20;
        goto LABEL_52;
      }
      v16 = 7;
      v30 = HIDWORD(v51) & 0xFFFF03EF | 0x410;
      --v15;
      v28 = ((v12 ^ DWORD2(v51)) & 0x1FFFF ^ DWORD2(v51)) & 0xFFC1FFFF;
      *(_QWORD *)&v51 = *(_QWORD *)(v53 + 24);
      v12 = 0;
LABEL_51:
      v63 = v15;
LABEL_52:
      HIDWORD(v51) = v30;
      v43 = ++*(_DWORD *)(a1 + 88);
      if ( v16 == 7 )
      {
        if ( v12 && v29 )
        {
          v16 = 8;
          v28 ^= (v28 ^ ((v28 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_56:
          LODWORD(v14) = 0;
          goto LABEL_57;
        }
        v30 |= 2u;
        v15 = 1;
        HIDWORD(v51) = v30;
        v63 = 1;
      }
      if ( v16 != 5 )
        goto LABEL_56;
      LODWORD(v14) = 0;
      if ( !v15 )
      {
        v15 = *(_DWORD *)(a1 + 84) - v43;
        if ( *(_DWORD *)(a1 + 80) < v15 )
          v15 = *(_DWORD *)(a1 + 80);
        v63 = v15;
      }
LABEL_57:
      if ( v58 != (_OWORD *)v54 )
        HIDWORD(v51) = ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD *)(v4 + 200)) & 1 ^ v30;
      DWORD2(v51) = v28 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      *v58 = v51;
      v44 = ++*(_DWORD *)(v4 + 192);
      if ( v16 == 9 )
        break;
      v19 = v54;
    }
    v62 = *(_OWORD *)(*(_QWORD *)(v4 + 40) + 272LL);
    if ( (v62 & 0x2000000000000LL) == 0
      || *(_DWORD *)(*(_QWORD *)(v4 + 48) + 20LL) != 3
      || *(_DWORD *)(*(_QWORD *)(v4 + 56) + 120LL) != 6 )
    {
      break;
    }
    v45 = 8LL;
    do
    {
      v51 = 0uLL;
      v46 = *(_QWORD *)(v4 + 184);
      HIDWORD(v51) = *(_DWORD *)(v4 + 200) & 1 | 0x2000;
      *(_OWORD *)(v46 + 16LL * v44) = v51;
      v44 = ++*(_DWORD *)(v4 + 192);
      --v45;
    }
    while ( v45 );
    v19 = v54;
LABEL_66:
    LODWORD(v14) = 0;
  }
  while ( v16 != 9 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v4 + 192);
  v47 = (_QWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192));
  *v47 = 0LL;
  v47[1] = 0LL;
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  ++v2[30];
  v2[28] += *(_DWORD *)(a1 + 40);
  v48 = *(_BYTE *)(v4 + 104);
  ++*(_DWORD *)(v4 + 348);
  *(_DWORD *)(v4 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v48);
  *(_BYTE *)(v54 + 12) ^= 1u;
  _InterlockedOr(v49, 0);
  if ( *(_BYTE *)(v4 + 280) )
    TR_AddTRBRangeToSecureTransferRing(
      v4,
      (_QWORD *)(a1 + 24),
      *(_QWORD **)(a1 + 112),
      *(_DWORD *)(a1 + 104),
      *(_DWORD *)(a1 + 120),
      (_OWORD *)(a1 + 128),
      a2);
  else
    UsbDevice_DirectWriteDoorbell(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL),
      *(unsigned int *)(*(_QWORD *)(v4 + 56) + 144LL),
      *(unsigned int *)(v4 + 64));
}
