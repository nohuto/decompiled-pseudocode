/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C002894C
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C0025CD0 (Isoch_EvtDmaCallback.c)
 *     Isoch_MapStage @ 0x1C00260E4 (Isoch_MapStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0007EBC (Controller_GetFrameNumber.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C001F820 (StageQueue_Release.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C001FD40 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C0020098 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C0020B38 (TR_GetPacketCount.c)
 *     TR_ReleaseSegments @ 0x1C0021108 (TR_ReleaseSegments.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0024664 (UsbDevice_DirectWriteDoorbell.c)
 *     Isoch_GetPacketLength @ 0x1C0025F98 (Isoch_GetPacketLength.c)
 *     Isoch_InsertLinkTrb @ 0x1C0025FD0 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002879C (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C002B168 (WPP_RECORDER_SF_DDqqDDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0030F74 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

KIRQL __fastcall Isoch_Stage_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm0
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int PacketLength; // eax
  _DWORD *v12; // r10
  __int64 v13; // r11
  __int64 v14; // rcx
  unsigned int v15; // r12d
  int FrameNumber; // r8d
  int v17; // r9d
  __int64 v18; // rsi
  KIRQL v19; // dl
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rdi
  unsigned int v23; // esi
  KIRQL result; // al
  unsigned int v25; // eax
  __int64 v26; // r13
  int v27; // esi
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // dl
  unsigned int v32; // r15d
  unsigned int v33; // edi
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  __int16 v37; // r15
  __int64 v38; // rax
  int v39; // r15d
  int v40; // ecx
  unsigned int v41; // r10d
  unsigned int v42; // eax
  bool v43; // zf
  unsigned int v44; // r9d
  int v45; // r15d
  int v46; // r8d
  __int64 v47; // rcx
  unsigned int v48; // r8d
  __int64 v49; // r10
  unsigned int v50; // r9d
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // r10d
  unsigned int v54; // r10d
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  _QWORD *v61; // rax
  unsigned int v62; // r15d
  __int64 v63; // r9
  unsigned int v64; // eax
  __int64 v65; // rdx
  int v66; // ecx
  int v67; // edx
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  unsigned int v72; // r8d
  unsigned int v73; // r10d
  int v74; // r9d
  unsigned int v75; // ecx
  unsigned int v76; // eax
  unsigned int v77; // r10d
  char inserted; // al
  __int64 v79; // r10
  unsigned int v80; // r9d
  _QWORD *v81; // r8
  signed __int32 v82[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v83; // [rsp+20h] [rbp-E0h]
  _OWORD *v84; // [rsp+28h] [rbp-D8h]
  int v85; // [rsp+30h] [rbp-D0h]
  unsigned int v86; // [rsp+60h] [rbp-A0h]
  int v87; // [rsp+64h] [rbp-9Ch]
  unsigned int v88; // [rsp+68h] [rbp-98h]
  __int128 v89; // [rsp+70h] [rbp-90h]
  __int64 v90; // [rsp+80h] [rbp-80h]
  int v91; // [rsp+88h] [rbp-78h]
  unsigned int v92; // [rsp+8Ch] [rbp-74h]
  int v93; // [rsp+90h] [rbp-70h]
  unsigned int v94; // [rsp+94h] [rbp-6Ch]
  int v95; // [rsp+98h] [rbp-68h]
  int PacketCount; // [rsp+9Ch] [rbp-64h]
  __int64 v97; // [rsp+A0h] [rbp-60h]
  unsigned int v98; // [rsp+A8h] [rbp-58h]
  __int64 v99; // [rsp+B0h] [rbp-50h]
  int v100; // [rsp+B8h] [rbp-48h]
  __int64 v101; // [rsp+C0h] [rbp-40h]
  _DWORD *v102; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v103; // [rsp+D0h] [rbp-30h]
  __int64 v104; // [rsp+D8h] [rbp-28h]
  _OWORD *v105; // [rsp+E0h] [rbp-20h]
  __int128 v106; // [rsp+E8h] [rbp-18h]
  __int128 v107; // [rsp+F8h] [rbp-8h]
  __int128 v108; // [rsp+108h] [rbp+8h]
  char v109; // [rsp+170h] [rbp+70h]
  unsigned int v111; // [rsp+188h] [rbp+88h]

  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 40);
  v101 = v2;
  PacketCount = 0;
  v6 = *(_QWORD *)(v2 + 56);
  v109 = 0;
  v102 = (_DWORD *)(*(_QWORD *)(v2 + 48) + 128LL);
  v7 = *(_QWORD *)(v6 + 40);
  v111 = v3;
  v91 = 0;
  v88 = 0;
  v8 = *(_OWORD *)(v7 + 272);
  v87 = 0;
  v93 = 0;
  v94 = 0;
  v9 = (unsigned __int64)v8 >> 33;
  v95 = 0;
  LOBYTE(v9) = (v8 & 0x200000000LL) == 0;
  v103 = v9;
  v99 = *(_QWORD *)(a1 + 72);
  v106 = v8;
  v10 = *(_QWORD *)(v99 + 16);
  v86 = *(_DWORD *)(v99 + 24);
  v90 = v10;
  v98 = 0;
  v97 = *(unsigned int *)(v6 + 192);
  *(_DWORD *)(a1 + 88) = v97;
  v92 = *(_DWORD *)(*(_QWORD *)(v6 + 56) + 152LL);
  PacketLength = Isoch_GetPacketLength(v2, v3);
  v14 = *(_QWORD *)(v6 + 40);
  v15 = PacketLength;
  v107 = *(_OWORD *)(v14 + 272);
  if ( (v107 & 0x20000000000LL) != 0 )
  {
    v93 = *v12 + v3 / *(_DWORD *)(v6 + 356);
    FrameNumber = Controller_GetFrameNumber(v14, (int)v13 + 2, 0LL, 0LL);
    if ( FrameNumber - v93 >= 0 )
    {
      WPP_RECORDER_SF_DDqqDDD(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
        FrameNumber,
        v17,
        v83,
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
        *(_QWORD *)(v2 + 24),
        a1,
        FrameNumber,
        v3,
        v93);
      Isoch_Stage_FreeScatterGatherList(v6, a1, a2);
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      v18 = *(_QWORD *)a1;
      if ( *(_BYTE *)(a1 + 56) )
      {
        IoFreeMdl(*(PMDL *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_BYTE *)(a1 + 56) = 0;
      }
      TR_ReleaseSegments(v6, (unsigned __int64 *)(a1 + 8), 1);
      TR_ReleaseSegments(v6, (unsigned __int64 *)(a1 + 24), 0);
      StageQueue_Release((unsigned __int8 *)(v18 + 128), (unsigned __int8 *)a1);
      v19 = *(_BYTE *)(v6 + 104);
      *(_DWORD *)(v6 + 328) |= 0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v19);
      if ( *(_BYTE *)(v6 + 280) && a2 )
        KeLowerIrql(0);
      v20 = *(_QWORD *)(v6 + 56);
      v21 = *(_DWORD *)(v6 + 64);
      v22 = *(_QWORD *)(v20 + 16);
      v23 = *(_DWORD *)(v20 + 144);
      if ( *(_QWORD *)(v22 + 160) )
      {
        result = (unsigned __int8)UsbDevice_DirectWriteDoorbell(*(_QWORD *)(v20 + 16), v23, v21);
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(v22 + 8) + 441LL) && KeGetCurrentIrql() )
          Debug_FreAssertMsg(
            (__int64)"Code Path Requires Passive Level",
            0,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
            600);
        result = XilUsbDevice_SendRequestToRingDoorbell(v22 + 560, v23, v21);
      }
      if ( *(_BYTE *)(v6 + 280) )
      {
        if ( a2 )
          result = KfRaiseIrql(2u);
      }
      *(_DWORD *)(v6 + 352) = 1;
      return result;
    }
    v13 = 0LL;
  }
  v25 = *(_DWORD *)(v6 + 192);
  v26 = v13;
  v27 = 4;
  if ( v25 >= *(_DWORD *)(v6 + 196) )
  {
    v26 = *(_QWORD *)(v6 + 184) + 16LL * v25;
    Isoch_InsertLinkTrb(v6, (_QWORD *)a1, 4, 1);
    LOBYTE(v13) = 0;
    v97 = 0LL;
  }
  v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 88LL) + 108LL) & 0x50;
  v100 = v28;
  do
  {
    v29 = *(unsigned int *)(v6 + 192);
    v104 = v29;
    v30 = 16 * v29 + *(_QWORD *)(v6 + 184);
    v105 = (_OWORD *)v30;
    *(_QWORD *)&v89 = 0LL;
    if ( v26 )
      v30 = v26;
    *((_QWORD *)&v89 + 1) = 0LL;
    v26 = v30;
    if ( v27 < 4 )
      goto LABEL_80;
    if ( v27 > 5 )
    {
      if ( v27 <= 7 )
      {
        v34 = v111 + 1;
        *(_QWORD *)&v89 = 1LL;
        WORD1(v89) = v3;
        v32 = HIDWORD(v89) & 0xFFFF03DF | 0x1C20;
        DWORD1(v89) = *v102;
        HIDWORD(v89) = v32;
        v35 = v32;
        ++v111;
        if ( v27 == 7 || v34 == *(_DWORD *)(v2 + 96) )
        {
          v27 = 9;
          v13 = 0LL;
        }
        else
        {
          if ( (v34 & 0x7F) != 0 )
          {
            v32 = v32 & 0xFFFFFDFF | ((unsigned __int8)v103 << 9);
            HIDWORD(v89) = v35 & 0xFFFFFDFF | ((unsigned __int8)v103 << 9);
          }
          v87 = 0;
          v15 = Isoch_GetPacketLength(v2, v34);
          v27 = v13 + 4;
        }
      }
      else
      {
        if ( v27 == 10 )
        {
          v13 = 0LL;
          v32 = 1042;
          *(_QWORD *)&v89 = 0LL;
          v33 = DWORD2(v89) & 0xFFC00000;
          HIDWORD(v89) = 1042;
          v31 = 1;
          v27 = 6;
          v109 = 1;
          goto LABEL_83;
        }
        if ( v27 == 11 )
        {
          v13 = 0LL;
          v31 = 1;
          *(_QWORD *)&v89 = 0LL;
          v109 = 1;
          v32 = 1042;
          v27 = 7;
          v33 = 0;
          HIDWORD(v89) = 1042;
          goto LABEL_83;
        }
LABEL_80:
        v32 = HIDWORD(v89);
        v13 = 0LL;
      }
      v33 = DWORD2(v89);
      goto LABEL_82;
    }
    if ( v27 == 4 )
    {
      v36 = *v102 + v3 / *(_DWORD *)(v6 + 356);
      v37 = *(_WORD *)v102 + v3 / *(_DWORD *)(v6 + 356);
      v93 = v36;
      v38 = *(_QWORD *)(v6 + 56);
      v39 = ((v37 & 0x7FF) << 20) | 0x1400;
      v40 = *(_DWORD *)(v38 + 148);
      v41 = v40 + 1;
      v42 = (v15 + (*(_WORD *)(v38 + 100) & 0x7FF) - 1) / (*(_WORD *)(v38 + 100) & 0x7FFu);
      v43 = v28 == 80;
      v44 = v42;
      if ( !v43 )
      {
        if ( !v42 )
          v42 = 1;
        v39 |= (((unsigned __int8)((v40 + v42) / v41) - 1) & 3) << 7;
      }
      if ( !v44 )
        v44 = 1;
      if ( v44 % v41 )
        v40 = v44 % v41 - 1;
      v45 = (v39 ^ (v40 << 16)) & 0xF0000 ^ v39;
      PacketCount = TR_GetPacketCount(v6, v15);
    }
    else
    {
      v46 = DWORD2(v89);
      v45 = 1024;
    }
    if ( v86 <= v15 )
    {
      v47 = v88 + 1;
      v33 = v46 ^ (v86 ^ v46) & 0x1FFFF;
      *(_QWORD *)&v89 = v90;
      v15 -= v86;
      v88 = v47;
      v48 = *(_DWORD *)v99;
      if ( (unsigned int)v47 >= *(_DWORD *)v99 )
      {
        v49 = 0LL;
        v50 = 0;
      }
      else
      {
        v47 *= 3LL;
        v49 = *(_QWORD *)(v99 + 8 * v47 + 16);
        v50 = *(_DWORD *)(v99 + 8 * v47 + 24);
        LODWORD(v47) = v88;
      }
      v86 = v50;
      v90 = v49;
      if ( v87 + (v33 & 0x1FFFF) <= v92 )
      {
LABEL_61:
        if ( v15 )
        {
          v27 = 5;
          goto LABEL_64;
        }
      }
      else
      {
        v33 ^= (v33 ^ (v92 - v87)) & 0x1FFFF;
        if ( v15 )
        {
          while ( 1 )
          {
            if ( v50 > v15 )
            {
              v50 -= v15;
              v49 += v15;
              v15 = 0;
            }
            else
            {
              v51 = (unsigned int)(v47 + 1);
              v15 -= v50;
              v88 = v51;
              if ( (unsigned int)v51 >= v48 )
              {
                v90 = 0LL;
                v86 = 0;
                goto LABEL_61;
              }
              v52 = 3 * v51;
              v49 = *(_QWORD *)(v99 + 8 * v52 + 16);
              v50 = *(_DWORD *)(v99 + 8 * v52 + 24);
            }
            v86 = v50;
            v90 = v49;
            if ( !v15 )
              break;
            LODWORD(v47) = v88;
          }
        }
      }
      v27 = 7 - (*(_DWORD *)(a1 + 44) != v111);
LABEL_64:
      v53 = v87;
      goto LABEL_68;
    }
    v33 = v46 ^ (v15 ^ v46) & 0x1FFFF;
    *(_QWORD *)&v89 = v90;
    v86 -= v15;
    v90 += v15;
    v53 = v87;
    if ( v87 + (v33 & 0x1FFFF) > v92 )
      v33 ^= (v33 ^ (v92 - v87)) & 0x1FFFF;
    v27 = 6;
LABEL_68:
    v54 = (v33 & 0x1FFFF) + v53;
    v87 = v54;
    if ( !(_BYTE)v13 )
      v33 ^= (v33 ^ ((unsigned int)TR_CalculateTDSize(v6, PacketCount, v54, (unsigned int)(v27 - 6) <= 1) << 17)) & 0x3E0000;
    v55 = *(_QWORD *)(v6 + 40);
    v32 = v45 | 0x10;
    HIDWORD(v89) = v32;
    v13 = 0LL;
    v56 = *(_OWORD *)(v55 + 272);
    v57 = *(_QWORD *)(v55 + 272);
    v108 = v56;
    if ( (v57 & 0x800000000000LL) != 0 )
    {
      v58 = *(_QWORD *)(v6 + 48);
      if ( *(_DWORD *)(v58 + 20) == 1 )
      {
        if ( *(_DWORD *)(v58 + 40) )
        {
          if ( v27 == 6 )
          {
            if ( (unsigned int)(*(_DWORD *)(v6 + 196) - v104 - 1) >= *(_DWORD *)(v6 + 432) )
              goto LABEL_79;
            v27 = 10;
          }
          if ( v27 == 7 )
            v27 = 11;
        }
      }
    }
    if ( (unsigned int)(v27 - 6) <= 1 )
    {
LABEL_79:
      v32 |= 2u;
      HIDWORD(v89) = v32;
    }
LABEL_82:
    v31 = v109;
LABEL_83:
    if ( v105 != (_OWORD *)v26 )
      HIDWORD(v89) = (v32 ^ *(_DWORD *)(v6 + 200)) & 1 ^ v32;
    v59 = *(unsigned __int16 *)(v6 + 112);
    ++v91;
    DWORD2(v89) = v33 & 0x3FFFFF | (v59 << 22);
    *v105 = v89;
    v60 = ++*(_DWORD *)(v6 + 192);
    if ( v31 )
    {
      Isoch_InsertLinkTrb(v6, (_QWORD *)a1, 5, 0);
      v60 = *(_DWORD *)(v6 + 192);
      v13 = 0LL;
      v109 = 0;
    }
    if ( v27 != 9 && v27 != 4 )
    {
      v62 = v111;
      v71 = v99;
LABEL_107:
      v74 = v95;
      v72 = v94;
      v73 = v97;
      goto LABEL_108;
    }
    *(_DWORD *)(a1 + 104) = v60;
    v61 = (_QWORD *)(*(_QWORD *)(v6 + 184) + 16LL * *(unsigned int *)(v6 + 192));
    *v61 = 0LL;
    v61[1] = 0LL;
    if ( v27 == 9 || *(_BYTE *)(v6 + 333) != (_BYTE)v13 )
    {
      v62 = v111;
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      if ( v27 == 9 )
      {
        v63 = v101;
        v64 = v111 - *(_DWORD *)(v101 + 108);
        ++*(_DWORD *)(v101 + 116);
        v65 = *(_QWORD *)(v63 + 48);
        *(_DWORD *)(v63 + 104) = v64;
        v66 = *(_DWORD *)(a1 + 44);
        if ( v66 == *(_DWORD *)(v63 + 96) - 1 )
          v67 = *(_DWORD *)(v63 + 80) - *(_DWORD *)(v65 + 12LL * *(unsigned int *)(a1 + 40) + 140);
        else
          v67 = *(_DWORD *)(v65 + 12LL * (unsigned int)(v66 + 1) + 140)
              - *(_DWORD *)(v65 + 12LL * *(unsigned int *)(a1 + 40) + 140);
        *(_DWORD *)(v63 + 88) += v67;
        ++*(_DWORD *)(v6 + 376);
        v68 = v93;
        *(_DWORD *)(v6 + 328) |= 0x20u;
        *(_DWORD *)(v6 + 364) = v68;
      }
      else if ( !*(_BYTE *)(v6 + 333) )
      {
LABEL_98:
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
        v13 = 0LL;
        goto LABEL_100;
      }
      *(_DWORD *)(v6 + 328) |= 0x11u;
      goto LABEL_98;
    }
    v62 = v111;
LABEL_100:
    *(_BYTE *)(v26 + 12) ^= 1u;
    _InterlockedOr(v82, v13);
    v26 = v13;
    if ( *(_BYTE *)(v6 + 333) != (_BYTE)v13 )
    {
      v69 = *(_QWORD *)(v6 + 56);
      v70 = *(unsigned int *)(v6 + 64);
      *(_BYTE *)(v6 + 333) = v13;
      UsbDevice_DirectWriteDoorbell(*(_QWORD *)(v69 + 16), *(unsigned int *)(v69 + 144), v70);
      LODWORD(v13) = 0;
    }
    v71 = v99;
    if ( v27 == 9 )
      goto LABEL_107;
    v72 = v88;
    v94 = v88;
    if ( v88 < *(_DWORD *)v99 )
      v98 = v90 - *(_DWORD *)(v99 + 24LL * v88 + 16);
    v73 = *(_DWORD *)(v6 + 192);
    v74 = v91;
    v97 = v73;
    v95 = v91;
LABEL_108:
    v75 = *(_DWORD *)(v6 + 192);
    if ( v75 == *(_DWORD *)(v6 + 196) )
    {
      if ( v27 == 9 )
        goto LABEL_117;
      if ( v27 != 4 )
      {
        *(_DWORD *)(v6 + 192) = v73;
        v88 = v72;
        v91 = v74;
        v76 = *(_DWORD *)(v71 + 24LL * v72 + 24) - v98;
        v87 = v13;
        v86 = v76;
        v90 = *(_QWORD *)(v71 + 24LL * v72 + 16) + v98;
        v15 = Isoch_GetPacketLength(v101, v62);
        v27 = 4;
        v75 = v77;
      }
      v26 = *(_QWORD *)(v6 + 184) + 16LL * v75;
      inserted = Isoch_InsertLinkTrb(v6, (_QWORD *)a1, v27, 1);
      v79 = v97;
      LOBYTE(v13) = 0;
      if ( inserted )
        v79 = 0LL;
      v97 = v79;
    }
    v2 = v101;
    v3 = v111;
    v28 = v100;
  }
  while ( v27 != 9 );
  v75 = *(_DWORD *)(v6 + 192);
LABEL_117:
  v80 = *(_DWORD *)(a1 + 88);
  LOBYTE(v85) = a2;
  v81 = *(_QWORD **)(a1 + 96);
  v84 = (_OWORD *)(a1 + 128);
  v83 = v75;
  *(_DWORD *)(a1 + 104) = v75;
  TR_AddTRBRangeToSecureTransferRing(v6, (_QWORD *)(a1 + 24), v81, v80, v83, v84, v85);
  return (unsigned __int8)UsbDevice_DirectWriteDoorbell(
                            *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL),
                            *(unsigned int *)(*(_QWORD *)(v6 + 56) + 144LL),
                            *(unsigned int *)(v6 + 64));
}
