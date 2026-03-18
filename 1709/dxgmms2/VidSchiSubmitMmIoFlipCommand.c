/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C000F6B0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C007D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00B3990 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0006A70 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00299B0 (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C0029A80 (VidSchiRewindPacket.c)
 *     VidSchIsVSyncEnabled @ 0x1C0071EE0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  struct _VIDSCH_QUEUE_PACKET *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // ebx
  void (__fastcall *v11)(_QWORD, _QWORD); // rax
  KIRQL v12; // r15
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  _QWORD *v18; // r9
  bool v19; // zf
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  int v24; // eax
  char v25; // bl
  __int64 v26; // rcx
  char v27; // cl
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // rbx
  unsigned int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // r8d
  int v35; // eax
  char v36; // cl
  int v37; // eax
  _DWORD *v38; // rdi
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  unsigned int v49; // r13d
  unsigned int v50; // r14d
  int v51; // eax
  char v52; // cl
  int v53; // r12d
  int v54; // eax
  __int64 v55; // rdx
  char v56; // cl
  unsigned int v57; // eax
  int v58; // r11d
  int v59; // r9d
  unsigned int v60; // r10d
  __int64 v61; // rdx
  char v62; // cl
  int v63; // eax
  char v64; // cl
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned int v67; // r10d
  int v68; // eax
  __int64 v69; // r11
  __int64 v70; // rcx
  unsigned int v71; // r10d
  __int64 v72; // rax
  unsigned int v73; // r9d
  bool v74; // cc
  int v75; // r8d
  int v76; // r8d
  unsigned int v77; // edx
  __int64 v78; // rbx
  __int64 v79; // rcx
  _QWORD *v80; // rax
  int v81; // r8d
  int v82; // r8d
  unsigned int v83; // r12d
  int v84; // eax
  _QWORD *v85; // rax
  unsigned int v86; // [rsp+30h] [rbp-C8h]
  BOOL v87; // [rsp+34h] [rbp-C4h]
  char v88; // [rsp+38h] [rbp-C0h]
  unsigned int v89; // [rsp+3Ch] [rbp-BCh]
  int v90; // [rsp+40h] [rbp-B8h]
  __int64 v91; // [rsp+48h] [rbp-B0h]
  __int64 v92; // [rsp+50h] [rbp-A8h]
  _DWORD *v93; // [rsp+78h] [rbp-80h]
  __int64 v94; // [rsp+80h] [rbp-78h]
  _QWORD *v95; // [rsp+88h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-68h] BYREF
  __int64 v97; // [rsp+100h] [rbp+8h] BYREF
  KIRQL v98; // [rsp+108h] [rbp+10h]
  unsigned int v99; // [rsp+110h] [rbp+18h]
  unsigned int v100; // [rsp+118h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = a1;
  v5 = *((unsigned int *)a1 + 44);
  v100 = v5;
  v6 = (unsigned int)v5;
  v7 = *(_QWORD *)(v3 + 104);
  v8 = 8 * v5;
  v94 = v7;
  v9 = *(_QWORD *)(v7 + 32);
  v91 = *(_QWORD *)(8 * v5 + v9 + 3008);
  if ( (*(_BYTE *)(v9 + 2860) & 1) != 0
    || *(_DWORD *)(v9 + 2836)
    || *(_BYTE *)(v7 + 164)
    || (a2 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 160), 0, 0)) )
  {
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, a2, a3);
    while ( v4 );
    return;
  }
  if ( (*(_DWORD *)(v7 + 48) & 2) != 0 || *((int *)v4 + 102) >= 4 || *(_BYTE *)(v9 + 132) )
    VidSchIsVSyncEnabled(v9, (unsigned int)v5);
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + v9 + 3008) + 23648LL);
  if ( v10 != -1 )
  {
    v11 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2864);
    if ( v11 )
      v11(*(_QWORD *)(v9 + 2928), v10);
  }
  v98 = KfRaiseIrql(2u);
  v12 = v98;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1888), &LockHandle);
  v13 = *((unsigned int *)v4 + 16);
  if ( (v13 & 0x20) != 0 )
  {
    v14 = *((_DWORD *)v4 + 18);
    if ( (v14 & 0x400) == 0 || (v14 & 0x800) != 0 )
      ++*(_QWORD *)(v7 + 8 * v6 + 336);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v12);
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v15, v16);
    while ( v4 );
    goto LABEL_18;
  }
  v18 = (_QWORD *)(v7 + 8 * v6 + 336);
  v95 = v18;
  if ( *((_QWORD *)v4 + 52) - *v18 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v91 + 2940)) )
  {
    VidSchiRewindPacket(v4, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v3, (_QWORD *)3, (_QWORD *)0xB1C);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v12);
LABEL_18:
    if ( v10 != -1 )
    {
      v17 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2880);
      if ( v17 )
        v17(*(_QWORD *)(v9 + 2928), v10);
    }
    return;
  }
  v19 = *(_DWORD *)(v91 + 4) == 3;
  LOBYTE(v97) = 0;
  v87 = v19 || !*((_DWORD *)v4 + 103) && (*((_DWORD *)v4 + 72) & 0x10000000) != 0;
  v20 = 0xFFFFFFFFLL;
  if ( (*((_DWORD *)v4 + 18) & 0x800000) != 0 )
  {
    v21 = ((unsigned __int16)*((_DWORD *)v4 + 182) | (unsigned __int16)(*((_DWORD *)v4 + 182) >> 10)) & 0x3FF;
  }
  else
  {
    v13 = *(unsigned int *)(v9 + 128);
    v21 = (unsigned int)((1 << v13) - 1);
  }
  if ( (_DWORD)v21 )
  {
    v19 = !_BitScanForward((unsigned int *)&v24, v21);
    v25 = -1;
    if ( !v19 )
      v25 = v24;
    do
    {
      v26 = 280LL * v25;
      if ( *(_DWORD *)(v26 + v91 + 180) == 2 )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v21, v20);
        v85[5] = v25;
        v85[3] = 281LL;
        v85[4] = 0x100000LL;
        v85[6] = *((unsigned int *)v4 + 101);
        v85[7] = v9;
        WdLogEvent5_WdCriticalError(v85);
        __debugbreak();
      }
      v27 = v25;
      v28 = v25;
      v25 = -1;
      if ( (_DWORD)v20 != -1 )
        v28 = v20;
      v20 = v28;
      v86 = v28;
      v21 = ~(1 << v27) & (unsigned int)v21;
      v19 = !_BitScanForward(&v28, v21);
      if ( !v19 )
        v25 = v28;
    }
    while ( (_DWORD)v21 );
  }
  else
  {
    v22 = *(unsigned int *)(v9 + 128);
    v20 = 0LL;
    v86 = 0;
    if ( !(_DWORD)v22 )
      goto LABEL_37;
    while ( 1 )
    {
      v13 = 280LL * (unsigned int)v20;
      if ( *(_DWORD *)(v13 + v91 + 180) != 2 )
        break;
      v20 = (unsigned int)(v20 + 1);
      v86 = v20;
      if ( (unsigned int)v20 >= (unsigned int)v22 )
        goto LABEL_37;
    }
    if ( (_DWORD)v20 == -1 )
    {
LABEL_37:
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v22, v20);
      v23[3] = 281LL;
      v23[4] = 0x100000LL;
      v23[5] = 0LL;
      v23[6] = *((unsigned int *)v4 + 101);
      v23[7] = v9;
      WdLogEvent5_WdCriticalError(v23);
      __debugbreak();
    }
  }
  v92 = v91 + 8 * ((unsigned int)v20 + 3LL);
  v93 = *(_DWORD **)v92;
  v90 = *((_DWORD *)v4 + 104) - *(_DWORD *)v18;
  v29 = *(unsigned int *)(v3 + 88);
  v99 = (*((_BYTE *)v4 + 416) - *(_BYTE *)v18 + (unsigned __int8)*(_DWORD *)(*(_QWORD *)v92 + 32LL)) & 0x3F;
  v30 = (__int64 *)&v93[308 * v99 + 14];
  v31 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 8 * v29 + 424) + 6LL);
  if ( *((_DWORD *)v30 + 263) == 8 )
  {
    v30[*((unsigned int *)v30 + 270)] = v3;
    v30[*((unsigned int *)v30 + 270) + 65] = *(_QWORD *)(v3 + 144);
    v32 = *(_QWORD *)(v3 + 104);
    ++*((_DWORD *)v30 + 270);
    v30[130] = v32;
    ++*(_DWORD *)(v3 + 776);
    *((_DWORD *)v30 + 268) |= 1 << v31;
    v33 = 0LL;
  }
  else
  {
    ++*(_DWORD *)(v9 + 964);
    ++*(_DWORD *)(v7 + 1192);
    ++*(_DWORD *)(v3 + 776);
    ++*(_DWORD *)(v91 + 2940);
    if ( (*((_DWORD *)v4 + 72) & 0x800000) != 0 )
      v34 = ((unsigned __int16)*((_DWORD *)v4 + 182) | (unsigned __int16)(*((_DWORD *)v4 + 182) >> 10)) & 0x3FF;
    else
      v34 = (1 << *(_DWORD *)(v9 + 128)) - 1;
    v19 = !_BitScanForward((unsigned int *)&v35, v34);
    v36 = -1;
    if ( !v19 )
      v36 = v35;
    while ( v34 )
    {
      ++*(_DWORD *)(280LL * v36 + *(_QWORD *)(v8 + v9 + 3008) + 188);
      v37 = 1 << v36;
      v36 = -1;
      v34 &= ~v37;
      v19 = !_BitScanForward((unsigned int *)&v37, v34);
      if ( !v19 )
        v36 = v37;
    }
    v38 = (_DWORD *)v30[145];
    memset(v30, 0, 0x4D0uLL);
    v30[145] = (__int64)v38;
    memset(v38 + 4, 0, v38[1] * (48 * v38[2] + ((8 * v38[2] + 175) & 0xFFFFFFF8)));
    *v30 = v3;
    v30[130] = *(_QWORD *)(v3 + 104);
    *((_DWORD *)v30 + 262) = *((_DWORD *)v4 + 28);
    *((_DWORD *)v30 + 264) = *((_DWORD *)v4 + 100);
    v30[65] = *(_QWORD *)(v3 + 144);
    *((_BYTE *)v30 + 1064) = (*((_DWORD *)v4 + 72) & 0x10) != 0;
    v39 = *((_DWORD *)v30 + 280) ^ (*((_DWORD *)v30 + 280) ^ (*((_DWORD *)v4 + 18) >> 19)) & 0x10;
    *((_DWORD *)v30 + 280) = v39;
    v40 = ((unsigned __int16)v39 ^ (*((_DWORD *)v4 + 72) >> 21)) & 0x200 ^ v39;
    *((_DWORD *)v30 + 280) = v40;
    v41 = ((unsigned __int16)v40 ^ (*((_DWORD *)v4 + 72) >> 21)) & 0x400 ^ v40;
    *((_DWORD *)v30 + 280) = v41;
    if ( (v41 & 0x200) != 0 )
    {
      *((_DWORD *)v30 + 292) = *((_DWORD *)v4 + 160);
      *(_OWORD *)((char *)v30 + 1172) = *(_OWORD *)((char *)v4 + 644);
      *(__int64 *)((char *)v30 + 1188) = *(_QWORD *)((char *)v4 + 660);
      *((_DWORD *)v30 + 299) = *((_DWORD *)v4 + 167);
    }
    else
    {
      *((_DWORD *)v30 + 292) = 0;
    }
    if ( (v41 & 0x400) != 0 )
    {
      *((_OWORD *)v30 + 75) = *((_OWORD *)v4 + 42);
      *((_OWORD *)v30 + 76) = *((_OWORD *)v4 + 43);
    }
    memmove((void *)v30[145], (char *)v4 + 728, *((unsigned int *)v4 + 185));
    *((_DWORD *)v30 + 267) = *((_DWORD *)v4 + 106);
    v33 = 0LL;
    *((_DWORD *)v30 + 268) = 1 << v31;
    v42 = *((_DWORD *)v30 + 280) ^ (*((_DWORD *)v30 + 280) ^ (*((_DWORD *)v4 + 72) >> 19)) & 1;
    *((_DWORD *)v30 + 280) = v42;
    v43 = ((unsigned __int8)v42 ^ (unsigned __int8)(*((_DWORD *)v4 + 72) >> 19)) & 2 ^ v42;
    *((_DWORD *)v30 + 280) = v43;
    v44 = ((unsigned __int8)v43 ^ (unsigned __int8)(*((_DWORD *)v4 + 72) >> 19)) & 4 ^ v43;
    *((_DWORD *)v30 + 280) = v44;
    *((_DWORD *)v30 + 280) = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(*((_DWORD *)v4 + 72) >> 19)) & 8;
    *((_DWORD *)v30 + 281) = *((_DWORD *)v4 + 108);
    v30[143] = *((_QWORD *)v4 + 39);
    v30[144] = *((_QWORD *)v4 + 40);
    v19 = (*((_DWORD *)v4 + 72) & 0x400) == 0;
    *((_QWORD *)v4 + 39) = 0LL;
    *((_DWORD *)v30 + 270) = 1;
    if ( v19 )
    {
      *((_DWORD *)v30 + 269) = 1;
      *((_DWORD *)v30 + 271) = 1;
    }
    else
    {
      *((_DWORD *)v30 + 269) = *((_DWORD *)v4 + 107);
      *((_DWORD *)v30 + 271) = *((_DWORD *)v4 + 107);
    }
    if ( *((_BYTE *)v30 + 1064) || v87 )
    {
      *((_DWORD *)v30 + 265) = 0;
      v48 = *((_DWORD *)v30 + 280) ^ (*((_DWORD *)v30 + 280) ^ (*((_DWORD *)v4 + 72) >> 21)) & 0x80;
      *((_DWORD *)v30 + 280) = v48;
      *((_DWORD *)v30 + 280) = v48 ^ ((unsigned __int16)v48 ^ (*((_DWORD *)v4 + 72) >> 20)) & 0x100;
      goto LABEL_76;
    }
    v45 = *((_DWORD *)v4 + 103);
    if ( v45 == 1 )
      goto LABEL_71;
    v46 = v45 - 2;
    if ( !v46 )
    {
      *((_DWORD *)v30 + 265) = 1;
      goto LABEL_76;
    }
    v47 = v46 - 1;
    if ( !v47 )
    {
      *((_DWORD *)v30 + 265) = 2;
      goto LABEL_76;
    }
    if ( v47 == 1 )
      *((_DWORD *)v30 + 265) = 3;
    else
LABEL_71:
      *((_DWORD *)v30 + 265) = 0;
  }
LABEL_76:
  if ( (*((_DWORD *)v4 + 72) & 0x800) != 0 )
    *((_BYTE *)v30 + 1065) = 1;
  v49 = *(_DWORD *)v30[145] & 0x3FF;
  if ( *(_BYTE *)(v9 + 132) )
    v50 = (*(_DWORD *)v30[145] >> 10) & 0x3FF;
  else
    v50 = 0;
  v19 = !_BitScanForward((unsigned int *)&v51, v49);
  v52 = -1;
  v53 = 0;
  if ( !v19 )
    v52 = v51;
  v19 = !_BitScanForward((unsigned int *)&v54, v50);
  v55 = (unsigned int)v52;
  v56 = -1;
  if ( !v19 )
    v56 = v54;
  v88 = v55;
  v57 = v56;
  v89 = v56;
  while ( v49 || v50 )
  {
    if ( (unsigned int)v55 >= v57 )
    {
      v64 = -1;
      v50 &= ~(1 << v57);
      v19 = !_BitScanForward(&v57, v50);
      if ( !v19 )
        v64 = v57;
      ++v53;
      v57 = v64;
      v89 = v64;
      continue;
    }
    v58 = 0;
    v59 = 1;
    v60 = 0;
    while ( (*((_DWORD *)v30 + 267) & v59) == 0 )
    {
LABEL_93:
      ++v60;
      v59 *= 2;
      if ( v60 > v31 )
        goto LABEL_96;
    }
    v61 = *(_QWORD *)(v30[145]
                    + *(_DWORD *)(v30[145] + 4) * ((8 * *(_DWORD *)(v30[145] + 8) + 175) & 0xFFFFFFF8)
                    + 48 * ((unsigned int)(v53 + v58 * *(_DWORD *)(v30[145] + 4)) + 1LL));
    if ( ((*(_DWORD *)(v61 + 32) >> 2) & 0x3F) != v31 )
    {
      ++v58;
      goto LABEL_93;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v61 + 96) + 16LL) + 8LL));
LABEL_96:
    v62 = -1;
    v49 &= ~(1 << v88);
    v19 = !_BitScanForward((unsigned int *)&v63, v49);
    if ( !v19 )
      v62 = v63;
    v57 = v89;
    v55 = (unsigned int)v62;
    v33 = 0LL;
    v88 = v62;
    ++v53;
  }
  if ( *((_DWORD *)v30 + 269) > *((_DWORD *)v30 + 270) )
  {
    *((_DWORD *)v30 + 263) = 8;
    goto LABEL_104;
  }
  if ( !v90 )
  {
    v67 = v99;
    while ( 1 )
    {
      v93[8] = ((_BYTE)v67 + 1) & 0x3F;
      ++*v95;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 968));
      _InterlockedIncrement((volatile signed __int32 *)(v91 + 2944));
      v68 = *((_DWORD *)v30 + 270);
      if ( v68 )
        v69 = v30[v68 - 1];
      else
        v69 = 0LL;
      v70 = v30[130];
      if ( !*(_BYTE *)(v70 + 164) && !_InterlockedCompareExchange((volatile signed __int32 *)(v70 + 160), 0, 0) )
      {
        v71 = *((_DWORD *)v30 + 270);
        v55 = 0LL;
        if ( v71 )
        {
          while ( 1 )
          {
            v72 = v30[(unsigned int)v55];
            v33 = HIDWORD(v30[(unsigned int)v55 + 65]);
            v73 = *(_DWORD *)(v72 + 156);
            v74 = (unsigned int)v33 <= v73;
            if ( (_DWORD)v33 == v73 )
            {
              if ( LODWORD(v30[(unsigned int)v55 + 65]) > *(_DWORD *)(v72 + 152) )
                break;
              v74 = (unsigned int)v33 <= v73;
            }
            if ( !v74 )
              break;
            v55 = (unsigned int)(v55 + 1);
            if ( (unsigned int)v55 >= v71 )
              goto LABEL_123;
          }
LABEL_174:
          *((_DWORD *)v30 + 263) = 1;
          goto LABEL_175;
        }
LABEL_123:
        if ( v69 )
          VidSchiUpdateLastCompletedPresentTimestamp(v69, 1, 0);
        v67 = v99;
      }
      if ( !*(_BYTE *)(v91 + 56804) )
        goto LABEL_174;
      *((_DWORD *)v30 + 263) = 2;
      if ( v87 )
      {
        if ( v67 != v93[10] )
          goto LABEL_172;
        if ( *(_BYTE *)(v9 + 132) )
        {
          v55 = *(unsigned int *)(*(_QWORD *)v92 + 48LL);
          v75 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v92 + 44LL) - 1) & 0x3F;
          if ( (_DWORD)v55 != v75 )
          {
            while ( *(_DWORD *)(1232LL * (unsigned int)v55 + *(_QWORD *)v92 + 1108) != 14 )
            {
              v55 = ((_BYTE)v55 - 1) & 0x3F;
              if ( (_DWORD)v55 == v75 )
                goto LABEL_133;
            }
LABEL_145:
            v30[136] = MEMORY[0xFFFFF78000000320];
            goto LABEL_172;
          }
LABEL_133:
          v76 = *((_DWORD *)v30 + 280);
          if ( (v76 & 0x10) != 0 )
            v55 = ((unsigned __int16)*(_DWORD *)v30[145] | (unsigned __int16)(*(_DWORD *)v30[145] >> 10)) & 0x3FF;
          else
            v55 = (unsigned int)((1 << *(_DWORD *)(v9 + 128)) - 1);
          if ( ((unsigned int)v55 & *(_DWORD *)(v91 + 2956)) != 0 )
            goto LABEL_145;
          if ( *(_DWORD *)(v9 + 136) <= 1u || *(_DWORD *)(v91 + 4) == 3 || (v76 & 0x100) != 0 || (v76 & 0x80u) == 0 )
          {
            v55 = (v30[140] & 0x10) != 0
                ? ((unsigned __int16)*(_DWORD *)v30[145] | (unsigned __int16)(*(_DWORD *)v30[145] >> 10)) & 0x3FF
                : (unsigned int)((1 << *(_DWORD *)(v9 + 128)) - 1);
            if ( ((unsigned int)v55 & *(_DWORD *)(v91 + 2952)) != 0 )
              goto LABEL_145;
          }
        }
        v77 = v100;
        *((_DWORD *)v30 + 263) = 4;
        VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v9, v77, v86, v67, &v97);
      }
      else
      {
        if ( v67 != v93[10] && !*((_BYTE *)v30 + 1064) )
        {
          v78 = ((_BYTE)v67 - 1) & 0x3F;
          v79 = (unsigned int)v93[308 * v78 + 294];
          if ( (v79 & 0x20) != 0 )
          {
            v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v79, v55, v33);
            v80[3] = 281LL;
            v80[4] = 0x100000LL;
            v80[5] = v78;
            v80[6] = v93;
            v80[7] = v9;
            WdLogEvent5_WdCriticalError(v80);
            __debugbreak();
          }
          goto LABEL_172;
        }
        v30[136] = MEMORY[0xFFFFF78000000320];
        if ( *(_BYTE *)(v9 + 132) )
        {
          v55 = *(unsigned int *)(*(_QWORD *)v92 + 48LL);
          v81 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v92 + 44LL) - 1) & 0x3F;
          if ( (_DWORD)v55 != v81 )
          {
            while ( *(_DWORD *)(1232LL * (unsigned int)v55 + *(_QWORD *)v92 + 1108) != 14 )
            {
              v55 = ((_BYTE)v55 - 1) & 0x3F;
              if ( (_DWORD)v55 == v81 )
                goto LABEL_155;
            }
            goto LABEL_172;
          }
LABEL_155:
          v82 = *((_DWORD *)v30 + 280);
          if ( (v82 & 0x10) != 0 )
            v55 = ((unsigned __int16)*(_DWORD *)v30[145] | (unsigned __int16)(*(_DWORD *)v30[145] >> 10)) & 0x3FF;
          else
            v55 = (unsigned int)((1 << *(_DWORD *)(v9 + 128)) - 1);
          if ( ((unsigned int)v55 & *(_DWORD *)(v91 + 2956)) != 0 )
            goto LABEL_172;
          if ( *(_DWORD *)(v9 + 136) > 1u && *(_DWORD *)(v91 + 4) != 3 && (v82 & 0x100) == 0 && (v82 & 0x80u) != 0 )
            goto LABEL_167;
        }
        if ( (v30[140] & 0x10) != 0 )
          v55 = ((unsigned __int16)*(_DWORD *)v30[145] | (unsigned __int16)(*(_DWORD *)v30[145] >> 10)) & 0x3FF;
        else
          v55 = (unsigned int)((1 << *(_DWORD *)(v9 + 128)) - 1);
        if ( ((unsigned int)v55 & *(_DWORD *)(v91 + 2952)) == 0 )
        {
LABEL_167:
          v83 = v100;
          if ( *((_BYTE *)v30 + 1064) )
          {
            VidSchiRestartQueuedFlip(v94, v100, v86, v67);
            v67 = v99;
          }
          v84 = *((_DWORD *)v30 + 265);
          if ( v84 )
          {
            *((_DWORD *)v30 + 263) = 3;
            *((_DWORD *)v30 + 265) = v84 - 1;
          }
          else
          {
            *((_DWORD *)v30 + 263) = 4;
            VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v9, v83, v86, v67, &v97);
          }
        }
      }
LABEL_172:
      if ( v93[308 * v93[9] + 277] != 1 )
        v93[9] = v93[8];
LABEL_175:
      v99 = v93[8];
      v67 = v99;
      v30 = (__int64 *)&v93[308 * v99 + 14];
      if ( *((_DWORD *)v30 + 263) != 7 )
        goto LABEL_104;
      v33 = 0LL;
    }
  }
  *((_DWORD *)v30 + 263) = 7;
LABEL_104:
  *((_DWORD *)v4 + 16) |= 2u;
  if ( (_BYTE)v97 )
    VidSchiCompletePendingFlip(v9, v100, 9LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v65, v66);
  while ( v4 );
  KeLowerIrql(v98);
}
