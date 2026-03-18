/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C002AEC0
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0028260 (Isoch_EvtDmaCallback.c)
 *     Isoch_MapStage @ 0x1C002868C (Isoch_MapStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0010C5C (Controller_GetFrameNumber.c)
 *     StageQueue_Release @ 0x1C0021F70 (StageQueue_Release.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00224A8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C00227F0 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C002326C (TR_GetPacketCount.c)
 *     TR_ReleaseSegments @ 0x1C002377C (TR_ReleaseSegments.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0026D2C (UsbDevice_DirectWriteDoorbell.c)
 *     Isoch_GetPacketLength @ 0x1C0028530 (Isoch_GetPacketLength.c)
 *     Isoch_InsertLinkTrb @ 0x1C0028578 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002AD10 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C002D6B8 (WPP_RECORDER_SF_DDqqDDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0033418 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

void __fastcall Isoch_Stage_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rax
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int PacketLength; // eax
  _DWORD *v13; // r10
  int v14; // r11d
  __int64 v15; // rcx
  unsigned int v16; // r13d
  int FrameNumber; // r8d
  int v18; // r9d
  __int64 v19; // rsi
  KIRQL v20; // dl
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r12
  int v27; // esi
  int v28; // r8d
  unsigned int v29; // r11d
  char v30; // r10
  __int64 v31; // rax
  unsigned int v32; // r15d
  char v33; // dl
  unsigned int v34; // edi
  unsigned int v35; // edx
  unsigned int v36; // r15d
  __int64 v37; // rax
  unsigned int v38; // edi
  bool v39; // zf
  int v40; // r9d
  __int16 v41; // r8
  unsigned int v42; // r8d
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  int v47; // eax
  unsigned int v48; // edi
  __int64 v49; // r9
  unsigned int v50; // edx
  __int64 v51; // r8
  unsigned int v52; // ecx
  int v53; // ecx
  unsigned int v54; // ecx
  int v55; // eax
  __int64 v56; // rax
  __int128 v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // eax
  _QWORD *v61; // rax
  unsigned int v62; // r15d
  __int64 v63; // r10
  unsigned int v64; // eax
  __int64 v65; // r8
  int v66; // ecx
  int v67; // ecx
  int v68; // eax
  __int64 v69; // rdx
  unsigned int v70; // r9d
  unsigned int v71; // r8d
  int v72; // r10d
  __int64 v73; // rax
  char inserted; // al
  __int64 v75; // r8
  int v76; // ecx
  signed __int32 v77[10]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+64h] [rbp-9Ch]
  __int128 v80; // [rsp+68h] [rbp-98h]
  unsigned int v81; // [rsp+78h] [rbp-88h]
  __int64 v82; // [rsp+80h] [rbp-80h]
  int v83; // [rsp+88h] [rbp-78h]
  unsigned int v84; // [rsp+8Ch] [rbp-74h]
  int v85; // [rsp+90h] [rbp-70h]
  unsigned int v86; // [rsp+94h] [rbp-6Ch]
  int v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A0h] [rbp-60h]
  int PacketCount; // [rsp+A8h] [rbp-58h]
  unsigned int v90; // [rsp+ACh] [rbp-54h]
  __int64 v91; // [rsp+B0h] [rbp-50h]
  int v92; // [rsp+B8h] [rbp-48h]
  __int64 v93; // [rsp+C0h] [rbp-40h]
  _DWORD *v94; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v95; // [rsp+D0h] [rbp-30h]
  __int64 v96; // [rsp+D8h] [rbp-28h]
  _OWORD *v97; // [rsp+E0h] [rbp-20h]
  __int128 v98; // [rsp+E8h] [rbp-18h]
  __int128 v99; // [rsp+F8h] [rbp-8h]
  __int128 v100; // [rsp+108h] [rbp+8h]
  char v101; // [rsp+170h] [rbp+70h]
  unsigned int v103; // [rsp+188h] [rbp+88h]

  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 40);
  v93 = v2;
  v6 = *(_QWORD *)(v2 + 56);
  v7 = *(_QWORD *)(v2 + 48);
  v91 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD *)(v6 + 40);
  v82 = *(_QWORD *)(v91 + 16);
  v94 = (_DWORD *)(v7 + 128);
  PacketCount = 0;
  v9 = *(_OWORD *)(v8 + 272);
  v101 = 0;
  v103 = v3;
  v83 = 0;
  v10 = (unsigned __int64)v9 >> 33;
  v81 = 0;
  LOBYTE(v10) = (v9 & 0x200000000LL) == 0;
  v79 = 0;
  v95 = v10;
  v78 = *(_DWORD *)(v91 + 24);
  v85 = 0;
  v90 = 0;
  v88 = *(unsigned int *)(v6 + 192);
  *(_DWORD *)(a1 + 88) = v88;
  v11 = *(_QWORD *)(v6 + 56);
  v98 = v9;
  v86 = 0;
  v87 = 0;
  v84 = *(_DWORD *)(v11 + 152);
  PacketLength = Isoch_GetPacketLength(v2, v3);
  v15 = *(_QWORD *)(v6 + 40);
  v16 = PacketLength;
  v99 = *(_OWORD *)(v15 + 272);
  if ( (v99 & 0x20000000000LL) == 0 )
    goto LABEL_16;
  v85 = *v13 + v3 / *(_DWORD *)(v6 + 356);
  FrameNumber = Controller_GetFrameNumber(v15, v14 + 1, 0LL, 0LL);
  if ( FrameNumber - v85 < 0 )
  {
    LOBYTE(v14) = 1;
LABEL_16:
    v25 = *(_DWORD *)(v6 + 192);
    v26 = 0LL;
    v27 = 4;
    if ( v25 >= *(_DWORD *)(v6 + 196) )
    {
      v26 = *(_QWORD *)(v6 + 184) + 16LL * v25;
      Isoch_InsertLinkTrb(v6, a1, 4, v14);
      v88 = 0LL;
    }
    v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 88LL) + 108LL) & 0x50;
    v92 = v28;
    while ( 1 )
    {
      v29 = *(_DWORD *)(v6 + 192);
      v96 = v29;
      v30 = 0;
      v31 = *(_QWORD *)(v6 + 184) + 16LL * v29;
      v97 = (_OWORD *)v31;
      *(_QWORD *)&v80 = 0LL;
      if ( v26 )
        v31 = v26;
      *((_QWORD *)&v80 + 1) = 0LL;
      v26 = v31;
      if ( v27 < 4 )
        goto LABEL_81;
      if ( v27 > 5 )
      {
        if ( v27 <= 7 )
        {
          v35 = v103 + 1;
          *(_QWORD *)&v80 = 1LL;
          WORD1(v80) = v3;
          v34 = HIDWORD(v80) & 0xFFFF03DF | 0x1C20;
          DWORD1(v80) = *v94;
          HIDWORD(v80) = v34;
          ++v103;
          if ( v27 == 7 || v35 == *(_DWORD *)(v2 + 96) )
          {
            v27 = 9;
          }
          else
          {
            if ( (v35 & 0x7F) != 0 )
            {
              v34 = v34 & 0xFFFFFDFF | ((unsigned __int8)v95 << 9);
              HIDWORD(v80) = v34;
            }
            v79 = 0;
            v16 = Isoch_GetPacketLength(v2, v35);
            v27 = 4;
          }
        }
        else
        {
          if ( v27 == 10 )
          {
            v32 = DWORD2(v80) & 0xFFC00000;
            *(_QWORD *)&v80 = 0LL;
            v34 = HIDWORD(v80) & 0xFFFF03ED | 0x412;
            v33 = 1;
            HIDWORD(v80) = v34;
            v27 = 6;
            v101 = 1;
            goto LABEL_84;
          }
          if ( v27 == 11 )
          {
            *(_QWORD *)&v80 = 0LL;
            v27 = 7;
            v32 = 0;
            v33 = 1;
            v34 = HIDWORD(v80) & 0xFFFF03ED | 0x412;
            v101 = 1;
            HIDWORD(v80) = v34;
            goto LABEL_84;
          }
LABEL_81:
          v34 = HIDWORD(v80);
        }
        v32 = DWORD2(v80);
        goto LABEL_83;
      }
      v36 = DWORD2(v80);
      if ( v27 == 4 )
      {
        v85 = *v94 + v3 / *(_DWORD *)(v6 + 356);
        v37 = *(_QWORD *)(v6 + 56);
        v38 = HIDWORD(v80) & 0x800F17FF | ((v85 & 0x7FF) << 20) | 0x1400;
        v39 = v28 == 80;
        v40 = *(_DWORD *)(v37 + 148);
        v41 = *(_WORD *)(v37 + 100);
        if ( v39 )
        {
          v42 = v41 & 0x7FF;
          v43 = (v16 + v42 - 1) / v42;
          if ( !v43 )
            v43 = 1;
          v36 = (DWORD2(v80) ^ (((v40 + v43) / (v40 + 1) - 1) << 17)) & 0x3E0000 ^ DWORD2(v80);
        }
        else
        {
          v42 = v41 & 0x7FF;
          v44 = (v16 + v42 - 1) / v42;
          if ( !v44 )
            v44 = 1;
          v38 ^= ((unsigned __int16)v38 ^ (unsigned __int16)(((unsigned __int16)((v40 + v44) / (v40 + 1)) - 1) << 7)) & 0x180;
        }
        v45 = v40 + 1;
        v46 = (v42 + v16 - 1) / v42;
        if ( !v46 )
          v46 = 1;
        v39 = v46 % v45 == 0;
        v47 = v46 % v45 - 1;
        if ( !v39 )
          v40 = v47;
        v48 = (v38 ^ (v40 << 16)) & 0xF0000 ^ v38;
        PacketCount = TR_GetPacketCount(v6, v16);
      }
      else
      {
        v48 = HIDWORD(v80) & 0xFFFF03FF | 0x400;
      }
      if ( v78 <= v16 )
        break;
      *(_QWORD *)&v80 = v82;
      v32 = (v16 ^ v36) & 0x1FFFF ^ v36;
      v78 -= v16;
      v53 = v79;
      v82 += v16;
      if ( v79 + (v32 & 0x1FFFF) > v84 )
        v32 ^= (v32 ^ (v84 - v79)) & 0x1FFFF;
      v27 = 6;
LABEL_69:
      v54 = (v32 & 0x1FFFF) + v53;
      v79 = v54;
      if ( !v30 )
      {
        v55 = TR_CalculateTDSize(v6, PacketCount, v54, (unsigned int)(v27 - 6) <= 1);
        v29 = v96;
        v32 ^= (v32 ^ (v55 << 17)) & 0x3E0000;
      }
      v56 = *(_QWORD *)(v6 + 40);
      v34 = v48 | 0x10;
      HIDWORD(v80) = v34;
      v57 = *(_OWORD *)(v56 + 272);
      v58 = *(_QWORD *)(v56 + 272);
      v100 = v57;
      if ( (v58 & 0x800000000000LL) != 0 )
      {
        v59 = *(_QWORD *)(v6 + 48);
        if ( *(_DWORD *)(v59 + 20) == 1 )
        {
          if ( *(_DWORD *)(v59 + 40) )
          {
            if ( v27 == 6 )
            {
              if ( *(_DWORD *)(v6 + 196) - v29 - 1 >= *(_DWORD *)(v6 + 432) )
                goto LABEL_80;
              v27 = 10;
            }
            if ( v27 == 7 )
              v27 = 11;
          }
        }
      }
      if ( (unsigned int)(v27 - 6) <= 1 )
      {
LABEL_80:
        v34 |= 2u;
        HIDWORD(v80) = v34;
      }
LABEL_83:
      v33 = v101;
LABEL_84:
      if ( v97 != (_OWORD *)v26 )
        HIDWORD(v80) = (v34 ^ *(_DWORD *)(v6 + 200)) & 1 ^ v34;
      v60 = *(unsigned __int16 *)(v6 + 112);
      ++v83;
      DWORD2(v80) = v32 & 0x3FFFFF | (v60 << 22);
      *v97 = v80;
      ++*(_DWORD *)(v6 + 192);
      if ( v33 )
      {
        Isoch_InsertLinkTrb(v6, a1, 5, 0);
        v101 = 0;
      }
      if ( v27 != 9 && v27 != 4 )
      {
        v62 = v103;
        v69 = v91;
        goto LABEL_109;
      }
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(v6 + 192);
      v61 = (_QWORD *)(*(_QWORD *)(v6 + 184) + 16LL * *(unsigned int *)(v6 + 192));
      *v61 = 0LL;
      v61[1] = 0LL;
      if ( v27 != 9 && !*(_BYTE *)(v6 + 333) )
      {
        v62 = v103;
        goto LABEL_101;
      }
      v62 = v103;
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      if ( v27 == 9 )
      {
        v63 = v93;
        v64 = v103 - *(_DWORD *)(v93 + 108);
        ++*(_DWORD *)(v93 + 116);
        v65 = *(_QWORD *)(v63 + 48);
        *(_DWORD *)(v63 + 104) = v64;
        v66 = *(_DWORD *)(a1 + 44);
        if ( v66 == *(_DWORD *)(v63 + 96) - 1 )
          v67 = *(_DWORD *)(v63 + 80);
        else
          v67 = *(_DWORD *)(v65 + 12LL * (unsigned int)(v66 + 1) + 140);
        v68 = v85;
        *(_DWORD *)(v63 + 88) += v67 - *(_DWORD *)(v65 + 12LL * *(unsigned int *)(a1 + 40) + 140);
        ++*(_DWORD *)(v6 + 376);
        *(_DWORD *)(v6 + 328) |= 0x20u;
        *(_DWORD *)(v6 + 364) = v68;
LABEL_98:
        *(_DWORD *)(v6 + 328) |= 0x11u;
        goto LABEL_99;
      }
      if ( *(_BYTE *)(v6 + 333) )
        goto LABEL_98;
LABEL_99:
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
LABEL_101:
      *(_BYTE *)(v26 + 12) ^= 1u;
      _InterlockedOr(v77, 0);
      v26 = 0LL;
      if ( *(_BYTE *)(v6 + 333) )
      {
        *(_BYTE *)(v6 + 333) = 0;
        if ( !*(_BYTE *)(v6 + 280) )
          UsbDevice_DirectWriteDoorbell(
            *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v6 + 56) + 144LL),
            *(unsigned int *)(v6 + 64));
      }
      v69 = v91;
      if ( v27 != 9 )
      {
        v70 = v81;
        v86 = v81;
        if ( v81 < *(_DWORD *)v91 )
          v90 = v82 - *(_DWORD *)(v91 + 24LL * v81 + 16);
        v71 = *(_DWORD *)(v6 + 192);
        v72 = v83;
        v88 = v71;
        v87 = v83;
        goto LABEL_110;
      }
LABEL_109:
      v72 = v87;
      v70 = v86;
      v71 = v88;
LABEL_110:
      if ( *(_DWORD *)(v6 + 192) == *(_DWORD *)(v6 + 196) )
      {
        if ( v27 == 9 )
          goto LABEL_118;
        if ( v27 != 4 )
        {
          *(_DWORD *)(v6 + 192) = v71;
          v81 = v70;
          v83 = v72;
          v78 = *(_DWORD *)(v69 + 24LL * v70 + 24) - v90;
          v73 = *(_QWORD *)(v69 + 24LL * v70 + 16) + v90;
          v79 = 0;
          v82 = v73;
          v16 = Isoch_GetPacketLength(v93, v62);
          v27 = 4;
        }
        v26 = *(_QWORD *)(v6 + 184) + 16LL * *(unsigned int *)(v6 + 192);
        inserted = Isoch_InsertLinkTrb(v6, a1, v27, 1);
        v75 = v88;
        if ( inserted )
          v75 = 0LL;
        v88 = v75;
      }
      v2 = v93;
      v3 = v103;
      v28 = v92;
      if ( v27 == 9 )
      {
LABEL_118:
        v76 = *(_DWORD *)(v6 + 192);
        *(_DWORD *)(a1 + 104) = v76;
        if ( *(_BYTE *)(v6 + 280) )
          TR_AddTRBRangeToSecureTransferRing(
            v6,
            (_QWORD *)(a1 + 24),
            *(_QWORD **)(a1 + 96),
            *(_DWORD *)(a1 + 88),
            v76,
            (_OWORD *)(a1 + 128),
            a2);
        else
          UsbDevice_DirectWriteDoorbell(
            *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL),
            *(unsigned int *)(*(_QWORD *)(v6 + 56) + 144LL),
            *(unsigned int *)(v6 + 64));
        return;
      }
    }
    v16 -= v78;
    *(_QWORD *)&v80 = v82;
    v49 = v81 + 1;
    v81 = v49;
    v32 = (v78 ^ v36) & 0x1FFFF ^ v36;
    v50 = *(_DWORD *)v91;
    if ( (unsigned int)v49 >= *(_DWORD *)v91 )
    {
      v51 = 0LL;
      v82 = 0LL;
      v52 = 0;
    }
    else
    {
      v51 = *(_QWORD *)(v91 + 24 * v49 + 16);
      v52 = *(_DWORD *)(v91 + 24 * v49 + 24);
      v82 = v51;
    }
    v78 = v52;
    if ( v79 + (v32 & 0x1FFFF) <= v84 )
    {
LABEL_62:
      if ( v16 )
      {
        v27 = 5;
        goto LABEL_65;
      }
    }
    else
    {
      v32 ^= (v32 ^ (v84 - v79)) & 0x1FFFF;
      while ( v16 )
      {
        if ( v52 > v16 )
        {
          v52 -= v16;
          v51 += v16;
          v16 = 0;
        }
        else
        {
          v49 = (unsigned int)(v49 + 1);
          v16 -= v52;
          v81 = v49;
          if ( (unsigned int)v49 >= v50 )
          {
            v82 = 0LL;
            v78 = 0;
            goto LABEL_62;
          }
          v51 = *(_QWORD *)(v91 + 24 * v49 + 16);
          v52 = *(_DWORD *)(v91 + 24 * v49 + 24);
        }
        v78 = v52;
        v82 = v51;
      }
    }
    v27 = 7 - (*(_DWORD *)(a1 + 44) != v103);
LABEL_65:
    v53 = v79;
    goto LABEL_69;
  }
  WPP_RECORDER_SF_DDqqDDD(
    *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
    FrameNumber,
    v18,
    v77[8],
    *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
    *(_QWORD *)(v2 + 24),
    a1,
    FrameNumber,
    v3,
    v85);
  Isoch_Stage_FreeScatterGatherList(v6, a1, a2);
  *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
  v19 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 56) )
  {
    IoFreeMdl(*(PMDL *)(a1 + 64));
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_BYTE *)(a1 + 56) = 0;
  }
  TR_ReleaseSegments(v6, (unsigned __int64 *)(a1 + 8), 1);
  TR_ReleaseSegments(v6, (unsigned __int64 *)(a1 + 24), 0);
  StageQueue_Release((unsigned __int8 *)(v19 + 128), (unsigned __int8 *)a1);
  v20 = *(_BYTE *)(v6 + 104);
  *(_DWORD *)(v6 + 328) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v20);
  if ( *(_BYTE *)(v6 + 280) && a2 )
    KeLowerIrql(0);
  v21 = *(_QWORD *)(v6 + 56);
  v22 = *(unsigned int *)(v6 + 64);
  v23 = *(_QWORD *)(v21 + 16);
  v24 = *(unsigned int *)(v21 + 144);
  if ( *(_BYTE *)(v23 + 608) )
    XilUsbDevice_SendRequestToRingDoorbell(v23 + 560, v24, v22);
  else
    UsbDevice_DirectWriteDoorbell(v23, v24, v22);
  if ( *(_BYTE *)(v6 + 280) )
  {
    if ( a2 )
      KfRaiseIrql(2u);
  }
  *(_DWORD *)(v6 + 352) = 1;
}
