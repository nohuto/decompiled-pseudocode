/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C0004130
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C050 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiUpdateContextStatus @ 0x1C000CE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002C8AC (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C002C97C (VidSchiRewindPacket.c)
 *     VidSchIsVSyncEnabled @ 0x1C0056B50 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_QUEUE_PACKET *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // r8
  bool v15; // zf
  int v16; // edi
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // r8d
  _QWORD *v22; // rbx
  unsigned int v23; // r8d
  int v24; // ecx
  _DWORD *v25; // rdi
  int v26; // ecx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  _DWORD *v35; // rax
  unsigned int v36; // r11d
  int v37; // edx
  unsigned int v38; // r9d
  int v39; // eax
  unsigned int v40; // r10d
  unsigned int v41; // r12d
  struct _VIDSCH_QUEUE_PACKET *v42; // rsi
  unsigned int v43; // r12d
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // r8
  __int64 v47; // r11
  __int64 v48; // rcx
  unsigned int v49; // r10d
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // r9d
  bool v53; // cc
  int v54; // edx
  unsigned int v55; // eax
  int v56; // edi
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // eax
  int v62; // eax
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rdx
  void (__fastcall *v66)(_QWORD, _QWORD); // rax
  void (__fastcall *v67)(_QWORD, _QWORD); // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  int v78; // ecx
  char v79; // cl
  int v80; // eax
  unsigned int v81; // r8d
  int v82; // r9d
  int v83; // r9d
  int v84; // r8d
  int v85; // r8d
  __int64 v86; // rbx
  _QWORD *v87; // rax
  unsigned int v88; // r8d
  int v89; // r9d
  int v90; // r8d
  int v91; // [rsp+30h] [rbp-C8h]
  int v92; // [rsp+30h] [rbp-C8h]
  __int64 v93; // [rsp+38h] [rbp-C0h]
  unsigned int v94; // [rsp+40h] [rbp-B8h]
  unsigned int v95; // [rsp+44h] [rbp-B4h]
  int v96; // [rsp+48h] [rbp-B0h]
  unsigned int v97; // [rsp+4Ch] [rbp-ACh]
  int v98; // [rsp+50h] [rbp-A8h]
  __int64 v99; // [rsp+58h] [rbp-A0h]
  __int64 v100; // [rsp+60h] [rbp-98h]
  _DWORD *v101; // [rsp+88h] [rbp-70h]
  _QWORD *v102; // [rsp+90h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-60h] BYREF
  __int64 v105; // [rsp+108h] [rbp+10h] BYREF
  KIRQL v106; // [rsp+110h] [rbp+18h]
  int v107; // [rsp+118h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = *((unsigned int *)a1 + 40);
  v94 = v3;
  v4 = (unsigned int)v3;
  v5 = *(_QWORD *)(v1 + 104);
  v6 = 8 * v3;
  v7 = *(_QWORD *)(v5 + 32);
  v8 = *(_QWORD *)(8 * v3 + v7 + 3032);
  v93 = v8;
  if ( (*(_BYTE *)(v7 + 2884) & 1) != 0
    || *(_DWORD *)(v7 + 2860)
    || *(_BYTE *)(v5 + 188)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 184), 0, 0) )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    return;
  }
  if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *((int *)v2 + 98) >= 4 || *(_BYTE *)(v7 + 136) )
    VidSchIsVSyncEnabled(v7, (unsigned int)v3);
  v9 = *(_DWORD *)(*(_QWORD *)(v6 + v7 + 3032) + 28128LL);
  if ( v9 != -1 )
  {
    v66 = *(void (__fastcall **)(_QWORD, _QWORD))(v7 + 2888);
    if ( v66 )
      v66(*(_QWORD *)(v7 + 2952), v9);
  }
  v106 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1904), &LockHandle);
  v10 = *((unsigned int *)v2 + 16);
  if ( (v10 & 0x20) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v106);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
LABEL_115:
    if ( v9 != -1 )
    {
      v67 = *(void (__fastcall **)(_QWORD, _QWORD))(v7 + 2904);
      if ( v67 )
        v67(*(_QWORD *)(v7 + 2952), v9);
    }
    return;
  }
  v102 = (_QWORD *)(v5 + 8 * (v4 + 45));
  if ( *((_QWORD *)v2 + 50) - *v102 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v8 + 2300)) )
  {
    VidSchiRewindPacket(v2, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v1, 3LL, 2746LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v106);
    goto LABEL_115;
  }
  v11 = v8;
  LOBYTE(v105) = 0;
  if ( *(_DWORD *)(v8 + 4) == 3 || !*((_DWORD *)v2 + 99) && (*((_DWORD *)v2 + 68) & 0x10000000) != 0 )
  {
    v91 = 1;
    v99 = 1LL;
  }
  else
  {
    v91 = 0;
    v99 = 0LL;
  }
  v12 = -1;
  v13 = *((_DWORD *)v2 + 18) >> 23;
  v107 = -1;
  if ( (v13 & 1) != 0 )
  {
    v14 = ((unsigned __int16)*((_DWORD *)v2 + 192) | (unsigned __int16)(*((_DWORD *)v2 + 192) >> 10)) & 0x3FF;
  }
  else
  {
    v10 = *(unsigned int *)(v7 + 132);
    v14 = (unsigned int)((1 << v10) - 1);
  }
  if ( (_DWORD)v14 )
  {
    v15 = !_BitScanForward((unsigned int *)&v16, v14);
    if ( v15 )
      LOBYTE(v16) = -1;
    v17 = *(_QWORD *)(v7 + 8 * v4 + 3032);
    do
    {
      v18 = 216LL * (unsigned int)(char)v16;
      v19 = *(int *)(v18 + v17 + 140);
      if ( (int)v19 > -1 )
      {
        v65 = *(unsigned int *)(136 * v19 + *(_QWORD *)(v7 + 3160) + 112);
        if ( (_DWORD)v65 == 2 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v65, v14);
          v72[5] = (char)v16;
          v72[3] = 281LL;
          v72[4] = 0x100000LL;
          v72[6] = *((unsigned int *)v2 + 97);
          v72[7] = v7;
          WdLogEvent5_WdCriticalError(v72);
          JUMPOUT(0x1C0019F2ALL);
        }
      }
      if ( v12 == -1 )
      {
        v12 = (char)v16;
        v107 = (char)v16;
      }
      v14 = ~(1 << v16) & (unsigned int)v14;
      v15 = !_BitScanForward((unsigned int *)&v16, v14);
      if ( v15 )
        LOBYTE(v16) = -1;
    }
    while ( (_DWORD)v14 );
    v11 = v93;
  }
  else
  {
    v68 = *(unsigned int *)(v7 + 132);
    v12 = 0;
    v107 = 0;
    if ( !(_DWORD)v68 )
      goto LABEL_128;
    v69 = *(_QWORD *)(v7 + 8LL * *((unsigned int *)v2 + 40) + 3032);
    while ( 1 )
    {
      v10 = 216LL * v12;
      v70 = *(int *)(v10 + v69 + 140);
      if ( (int)v70 <= -1 )
        break;
      v10 = *(unsigned int *)(136 * v70 + *(_QWORD *)(v7 + 3160) + 112);
      if ( (_DWORD)v10 != 2 )
        break;
      v107 = ++v12;
      if ( v12 >= (unsigned int)v68 )
        goto LABEL_128;
    }
    if ( v12 == -1 )
    {
LABEL_128:
      v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v11, v68);
      v71[3] = 281LL;
      v71[4] = 0x100000LL;
      v71[5] = 0LL;
      v71[6] = *((unsigned int *)v2 + 97);
      v71[7] = v7;
      WdLogEvent5_WdCriticalError(v71);
      JUMPOUT(0x1C0019EECLL);
    }
  }
  v98 = *((_DWORD *)v2 + 100) - *(_DWORD *)(v5 + 8 * (v4 + 45));
  v100 = v11 + 8 * (v12 + 3LL);
  v101 = *(_DWORD **)v100;
  v20 = ((_BYTE)v98 + (unsigned __int8)*(_DWORD *)(*(_QWORD *)v100 + 32LL)) & 0x3F;
  v21 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 8LL * *(unsigned int *)(v1 + 88) + 440) + 6LL);
  v95 = v21;
  v22 = (_QWORD *)(*(_QWORD *)v100 + 1280 * v20 + 56);
  if ( *((_DWORD *)v22 + 263) == 8 )
  {
    v22[*((unsigned int *)v22 + 270)] = v1;
    v22[*((unsigned int *)v22 + 270) + 65] = *(_QWORD *)(v1 + 152);
    v73 = *(_QWORD *)(v1 + 104);
    ++*((_DWORD *)v22 + 270);
    v22[130] = v73;
    ++*(_DWORD *)(v1 + 784);
    *((_DWORD *)v22 + 268) |= 1 << v21;
  }
  else
  {
    ++*(_DWORD *)(v7 + 980);
    ++*(_DWORD *)(v5 + 1216);
    ++*(_DWORD *)(v1 + 784);
    ++*(_DWORD *)(v11 + 2300);
    if ( (*((_DWORD *)v2 + 68) & 0x800000) != 0 )
      v23 = ((unsigned __int16)*((_DWORD *)v2 + 192) | (unsigned __int16)(*((_DWORD *)v2 + 192) >> 10)) & 0x3FF;
    else
      v23 = (1 << *(_DWORD *)(v7 + 132)) - 1;
    v15 = !_BitScanForward((unsigned int *)&v24, v23);
    if ( v15 )
      LOBYTE(v24) = -1;
    while ( v23 )
    {
      ++*(_DWORD *)(216LL * (char)v24 + *(_QWORD *)(v6 + v7 + 3032) + 148);
      v23 &= ~(1 << v24);
      v15 = !_BitScanForward((unsigned int *)&v24, v23);
      if ( v15 )
        LOBYTE(v24) = -1;
    }
    v25 = (_DWORD *)v22[145];
    memset(v22, 0, 0x500uLL);
    v22[145] = v25;
    memset(v25 + 4, 0, v25[1] * (48 * v25[2] + ((8 * v25[2] + 175) & 0xFFFFFFF8)));
    *v22 = v1;
    v22[130] = *(_QWORD *)(v1 + 104);
    *((_DWORD *)v22 + 262) = *((_DWORD *)v2 + 28);
    *((_DWORD *)v22 + 264) = *((_DWORD *)v2 + 96);
    v22[65] = *(_QWORD *)(v1 + 152);
    *((_BYTE *)v22 + 1064) = (*((_DWORD *)v2 + 68) & 0x10) != 0;
    v26 = *((_DWORD *)v22 + 280) ^ (*((_DWORD *)v22 + 280) ^ (*((_DWORD *)v2 + 18) >> 19)) & 0x10;
    *((_DWORD *)v22 + 280) = v26;
    v27 = ((unsigned __int16)v26 ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x200 ^ v26;
    *((_DWORD *)v22 + 280) = v27;
    v28 = v27 ^ ((unsigned __int16)v27 ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x400;
    *((_DWORD *)v22 + 280) = v28;
    if ( (v28 & 0x200) != 0 )
    {
      v74 = *((_DWORD *)v2 + 156);
      *((_DWORD *)v22 + 292) = v74;
      v75 = v74 - 1;
      if ( v75 )
      {
        if ( v75 == 1 )
        {
          *(_OWORD *)((char *)v22 + 1172) = *(_OWORD *)((char *)v2 + 628);
          *(_OWORD *)((char *)v22 + 1188) = *(_OWORD *)((char *)v2 + 644);
          *(_OWORD *)((char *)v22 + 1204) = *(_OWORD *)((char *)v2 + 660);
          *(_OWORD *)((char *)v22 + 1220) = *(_OWORD *)((char *)v2 + 676);
          *(_QWORD *)((char *)v22 + 1236) = *(_QWORD *)((char *)v2 + 692);
        }
      }
      else
      {
        *(_OWORD *)((char *)v22 + 1172) = *(_OWORD *)((char *)v2 + 628);
        *(_QWORD *)((char *)v22 + 1188) = *(_QWORD *)((char *)v2 + 644);
        *((_DWORD *)v22 + 299) = *((_DWORD *)v2 + 163);
      }
    }
    else
    {
      *((_DWORD *)v22 + 292) = 0;
    }
    if ( (v28 & 0x400) != 0 )
    {
      *(_OWORD *)((char *)v22 + 1244) = *(_OWORD *)((char *)v2 + 700);
      *(_OWORD *)((char *)v22 + 1260) = *(_OWORD *)((char *)v2 + 716);
    }
    memmove((void *)v22[145], (char *)v2 + 768, *((unsigned int *)v2 + 195));
    v21 = v95;
    *((_DWORD *)v22 + 267) = *((_DWORD *)v2 + 102);
    *((_DWORD *)v22 + 268) = 1 << v95;
    v29 = *((_DWORD *)v22 + 280) ^ (*((_DWORD *)v22 + 280) ^ (*((_DWORD *)v2 + 68) >> 19)) & 1;
    *((_DWORD *)v22 + 280) = v29;
    v30 = ((unsigned __int8)v29 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 2 ^ v29;
    *((_DWORD *)v22 + 280) = v30;
    v31 = ((unsigned __int8)v30 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 4 ^ v30;
    *((_DWORD *)v22 + 280) = v31;
    *((_DWORD *)v22 + 280) = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 8;
    *((_DWORD *)v22 + 281) = *((_DWORD *)v2 + 104);
    v22[143] = *((_QWORD *)v2 + 37);
    v22[144] = *((_QWORD *)v2 + 38);
    v32 = *((_DWORD *)v2 + 68);
    *((_QWORD *)v2 + 37) = 0LL;
    *((_DWORD *)v22 + 270) = 1;
    if ( (v32 & 0x400) != 0 )
    {
      *((_DWORD *)v22 + 269) = *((_DWORD *)v2 + 103);
      v33 = *((_DWORD *)v2 + 103);
    }
    else
    {
      *((_DWORD *)v22 + 269) = 1;
      v33 = 1;
    }
    *((_DWORD *)v22 + 271) = v33;
    if ( *((_BYTE *)v22 + 1064) || v91 )
    {
      *((_DWORD *)v22 + 265) = 0;
      v78 = *((_DWORD *)v22 + 280) ^ (*((_DWORD *)v22 + 280) ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x80;
      *((_DWORD *)v22 + 280) = v78;
      *((_DWORD *)v22 + 280) = v78 ^ ((unsigned __int16)v78 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x100;
      goto LABEL_45;
    }
    v34 = *((_DWORD *)v2 + 99);
    if ( v34 == 1 )
      goto LABEL_44;
    v76 = v34 - 2;
    if ( !v76 )
    {
      *((_DWORD *)v22 + 265) = 1;
      goto LABEL_45;
    }
    v77 = v76 - 1;
    if ( !v77 )
    {
      *((_DWORD *)v22 + 265) = 2;
      goto LABEL_45;
    }
    if ( v77 != 1 )
LABEL_44:
      *((_DWORD *)v22 + 265) = 0;
    else
      *((_DWORD *)v22 + 265) = 3;
  }
LABEL_45:
  if ( (*((_DWORD *)v2 + 68) & 0x800) != 0 )
    *((_BYTE *)v22 + 1065) = 1;
  v35 = (_DWORD *)v22[145];
  v36 = 0;
  v37 = 0;
  v92 = 0;
  v38 = *v35 & 0x3FF;
  if ( *(_BYTE *)(v7 + 136) )
    v36 = (*v35 >> 10) & 0x3FF;
  v15 = !_BitScanForward((unsigned int *)&v39, v38);
  if ( v15 )
    LOBYTE(v39) = -1;
  v40 = (char)v39;
  v15 = !_BitScanForward((unsigned int *)&v39, v36);
  if ( v15 )
    LOBYTE(v39) = -1;
  v41 = (char)v39;
  while ( v38 || v36 )
  {
    if ( v40 >= v41 )
      goto LABEL_146;
    v54 = 0;
    v55 = 0;
    v96 = 0;
    v97 = 0;
    v56 = 1;
    while ( (*((_DWORD *)v22 + 267) & v56) == 0 )
    {
LABEL_144:
      ++v55;
      v56 *= 2;
      v97 = v55;
      if ( v55 > v21 )
        goto LABEL_80;
    }
    v57 = v22[145];
    v58 = ((8 * *(_DWORD *)(v57 + 8) + 175) & 0xFFFFFFF8) * *(_DWORD *)(v57 + 4);
    v59 = v57 + 48 * ((unsigned int)(v92 + v54 * *(_DWORD *)(v57 + 4)) + 1LL);
    v21 = v95;
    v60 = *(_QWORD *)(v58 + v59);
    if ( ((*(_DWORD *)(v60 + 32) >> 2) & 0x3F) != v95 )
    {
      v55 = v97;
      v54 = ++v96;
      goto LABEL_144;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v60 + 96) + 16LL) + 8LL));
LABEL_80:
    v37 = v92;
    if ( v40 < v41 )
    {
      v38 &= ~(1 << v40);
      v15 = !_BitScanForward((unsigned int *)&v61, v38);
      if ( v15 )
        LOBYTE(v61) = -1;
      v40 = (char)v61;
      goto LABEL_84;
    }
LABEL_146:
    v79 = -1;
    v36 &= ~(1 << v41);
    v15 = !_BitScanForward((unsigned int *)&v80, v36);
    if ( !v15 )
      v79 = v80;
    v41 = v79;
LABEL_84:
    v92 = ++v37;
  }
  v42 = a1;
  v43 = v107;
  if ( *((_DWORD *)v22 + 269) > *((_DWORD *)v22 + 270) )
  {
    *((_DWORD *)v22 + 263) = 8;
  }
  else
  {
    if ( !v98 )
    {
      v44 = v93;
      while ( 1 )
      {
        v101[8] = ((_BYTE)v20 + 1) & 0x3F;
        ++*v102;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 984));
        _InterlockedIncrement((volatile signed __int32 *)(v44 + 2304));
        v45 = *((_DWORD *)v22 + 270);
        v46 = 0LL;
        if ( v45 )
          v47 = v22[v45 - 1];
        else
          v47 = 0LL;
        v48 = v22[130];
        if ( !*(_BYTE *)(v48 + 188) && !_InterlockedCompareExchange((volatile signed __int32 *)(v48 + 184), 0, 0) )
        {
          v49 = *((_DWORD *)v22 + 270);
          v50 = 0LL;
          if ( v49 )
          {
            while ( 1 )
            {
              v48 = (unsigned int)v50;
              v51 = v22[(unsigned int)v50];
              v46 = HIDWORD(v22[(unsigned int)v50 + 65]);
              v52 = *(_DWORD *)(v51 + 164);
              v53 = (unsigned int)v46 <= v52;
              if ( (_DWORD)v46 == v52 )
              {
                if ( LODWORD(v22[(unsigned int)v50 + 65]) > *(_DWORD *)(v51 + 160) )
                  break;
                v53 = (unsigned int)v46 <= v52;
              }
              if ( !v53 )
                break;
              v50 = (unsigned int)(v50 + 1);
              if ( (unsigned int)v50 >= v49 )
                goto LABEL_88;
            }
            v44 = v93;
            goto LABEL_67;
          }
LABEL_88:
          if ( v47 )
          {
            LOBYTE(v50) = 1;
            VidSchiUpdateLastCompletedPresentTimestamp(v47, v50, 0LL);
          }
          v44 = v93;
        }
        if ( *(_BYTE *)(v44 + 61284) )
        {
          *((_DWORD *)v22 + 263) = 2;
          v62 = v101[10];
          if ( v99 )
          {
            if ( (_DWORD)v20 != v62 )
              goto LABEL_102;
            if ( *(_BYTE *)(v7 + 136) )
            {
              v81 = *(_DWORD *)(*(_QWORD *)v100 + 48LL);
              v82 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v100 + 44LL) - 1) & 0x3F;
              if ( v81 == v82 )
              {
LABEL_157:
                v83 = *((_DWORD *)v22 + 280);
                if ( (v83 & 0x10) != 0 )
                  v84 = ((unsigned __int16)*(_DWORD *)v22[145] | (unsigned __int16)(*(_DWORD *)v22[145] >> 10)) & 0x3FF;
                else
                  v84 = (1 << *(_DWORD *)(v7 + 132)) - 1;
                if ( (v84 & *(_DWORD *)(v44 + 2316)) == 0 )
                {
                  if ( *(_DWORD *)(v7 + 140) > 1u && *(_DWORD *)(v44 + 4) != 3 && (v83 & 0x180) == 0x80 )
                    goto LABEL_101;
                  v85 = (v22[140] & 0x10) != 0
                      ? ((unsigned __int16)*(_DWORD *)v22[145] | (unsigned __int16)(*(_DWORD *)v22[145] >> 10)) & 0x3FF
                      : (1 << *(_DWORD *)(v7 + 132)) - 1;
                  if ( (v85 & *(_DWORD *)(v44 + 2312)) == 0 )
                    goto LABEL_101;
                }
              }
              else
              {
                while ( *(_DWORD *)(1280LL * v81 + *(_QWORD *)v100 + 1108) != 14 )
                {
                  v81 = ((_BYTE)v81 - 1) & 0x3F;
                  if ( v81 == v82 )
                    goto LABEL_157;
                }
              }
              v22[136] = MEMORY[0xFFFFF78000000320];
              goto LABEL_102;
            }
          }
          else
          {
            if ( (_DWORD)v20 != v62 && !*((_BYTE *)v22 + 1064) )
            {
              v86 = ((_BYTE)v20 - 1) & 0x3F;
              if ( (v101[320 * v86 + 294] & 0x20) != 0 )
              {
                v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v44, v46);
                v87[3] = 281LL;
                v87[4] = 0x100000LL;
                v87[5] = v86;
                v87[6] = v101;
                v87[7] = v7;
                WdLogEvent5_WdCriticalError(v87);
                JUMPOUT(0x1C001A2DDLL);
              }
              goto LABEL_102;
            }
            v22[136] = MEMORY[0xFFFFF78000000320];
            if ( !*(_BYTE *)(v7 + 136) )
            {
LABEL_95:
              if ( (v22[140] & 0x10) != 0 )
                v63 = ((unsigned __int16)*(_DWORD *)v22[145] | (unsigned __int16)(*(_DWORD *)v22[145] >> 10)) & 0x3FF;
              else
                v63 = (1 << *(_DWORD *)(v7 + 132)) - 1;
              if ( (v63 & *(_DWORD *)(v44 + 2312)) == 0 )
                goto LABEL_98;
LABEL_102:
              if ( v101[320 * v101[9] + 277] != 1 )
                v101[9] = v101[8];
              goto LABEL_68;
            }
            v88 = *(_DWORD *)(*(_QWORD *)v100 + 48LL);
            v89 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v100 + 44LL) - 1) & 0x3F;
            if ( v88 != v89 )
            {
              while ( *(_DWORD *)(1280LL * v88 + *(_QWORD *)v100 + 1108) != 14 )
              {
                v88 = ((_BYTE)v88 - 1) & 0x3F;
                if ( v88 == v89 )
                  goto LABEL_175;
              }
              goto LABEL_102;
            }
LABEL_175:
            if ( (v22[140] & 0x10) != 0 )
              v90 = ((unsigned __int16)*(_DWORD *)v22[145] | (unsigned __int16)(*(_DWORD *)v22[145] >> 10)) & 0x3FF;
            else
              v90 = (1 << *(_DWORD *)(v7 + 132)) - 1;
            if ( (v90 & *(_DWORD *)(v44 + 2316)) != 0 )
              goto LABEL_102;
            if ( *(_DWORD *)(v7 + 140) <= 1u || *(_DWORD *)(v44 + 4) == 3 || (v22[140] & 0x180) != 0x80 )
              goto LABEL_95;
LABEL_98:
            if ( *((_BYTE *)v22 + 1064) )
            {
              VidSchiRestartQueuedFlip(v5, v94, v43, (unsigned int)v20);
              v44 = v93;
            }
            v64 = *((_DWORD *)v22 + 265);
            if ( v64 )
            {
              *((_DWORD *)v22 + 263) = 3;
              *((_DWORD *)v22 + 265) = v64 - 1;
              goto LABEL_102;
            }
          }
LABEL_101:
          *((_DWORD *)v22 + 263) = 4;
          VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v7, (__int64)&v105);
          v44 = v93;
          goto LABEL_102;
        }
LABEL_67:
        *((_DWORD *)v22 + 263) = 1;
LABEL_68:
        v20 = (unsigned int)v101[8];
        v22 = &v101[320 * v20 + 14];
        if ( *((_DWORD *)v22 + 263) != 7 )
          goto LABEL_69;
      }
    }
    *((_DWORD *)v22 + 263) = 7;
  }
LABEL_69:
  *((_DWORD *)a1 + 16) |= 2u;
  if ( (_BYTE)v105 )
    VidSchiCompletePendingFlipOnPlane(v7, v94, 9LL, v43);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v42 = VidSchiProcessCompletedQueuePacketInternal(v42);
  while ( v42 );
  KeLowerIrql(v106);
}
