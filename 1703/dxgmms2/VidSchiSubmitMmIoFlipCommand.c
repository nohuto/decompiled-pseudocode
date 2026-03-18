/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C000F360
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000A670 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002763C (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C002770C (VidSchiRewindPacket.c)
 *     VidSchIsVSyncEnabled @ 0x1C006B9F0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  struct _VIDSCH_QUEUE_PACKET *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned int v11; // r12d
  _QWORD *v12; // r10
  unsigned int v13; // r11d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 *v21; // rbx
  unsigned __int16 v22; // dx
  unsigned int v23; // r8d
  int v24; // ecx
  _DWORD *v25; // rdi
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // r8
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  unsigned int v35; // r9d
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // r13d
  unsigned int v39; // r10d
  _DWORD *v40; // r11
  unsigned int v41; // r13d
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rdx
  unsigned int v45; // r11d
  unsigned int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // r8d
  unsigned int v49; // r10d
  bool v50; // cc
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned int v53; // eax
  unsigned int v54; // ecx
  int v55; // r11d
  __int64 v56; // rdx
  int v57; // eax
  int v58; // edx
  int v59; // eax
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // edx
  void (__fastcall *v63)(_QWORD, _QWORD); // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  void (__fastcall *v66)(_QWORD, _QWORD); // rax
  __int64 v67; // rdx
  _QWORD *v68; // rax
  int v69; // ecx
  int v70; // ecx
  char v71; // cl
  unsigned int v72; // edx
  int v73; // r8d
  int v74; // edx
  __int64 v75; // rbx
  __int64 v76; // rcx
  unsigned int v77; // edx
  int v78; // r8d
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  unsigned int v81; // [rsp+30h] [rbp-B8h]
  int v82; // [rsp+34h] [rbp-B4h]
  unsigned int v83; // [rsp+38h] [rbp-B0h]
  _DWORD *v84; // [rsp+40h] [rbp-A8h]
  unsigned int v85; // [rsp+48h] [rbp-A0h]
  unsigned int v86; // [rsp+4Ch] [rbp-9Ch]
  int v87; // [rsp+50h] [rbp-98h]
  int v88; // [rsp+54h] [rbp-94h]
  __int64 v89; // [rsp+58h] [rbp-90h]
  _QWORD *v90; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-60h] BYREF
  __int64 v92; // [rsp+F0h] [rbp+8h] BYREF
  KIRQL v93; // [rsp+F8h] [rbp+10h]
  int v94; // [rsp+100h] [rbp+18h]
  unsigned int v95; // [rsp+108h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = a1;
  v5 = *((unsigned int *)a1 + 38);
  v95 = v5;
  v6 = (unsigned int)v5;
  v7 = *(_QWORD *)(v3 + 104);
  v8 = 8 * v5;
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *(_QWORD *)(8 * v5 + v9 + 2992);
  if ( (*(_BYTE *)(v9 + 2844) & 1) != 0
    || *(_DWORD *)(v9 + 2820)
    || *(_BYTE *)(v7 + 164)
    || (a2 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 160), 0, 0)) )
  {
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, a2, a3);
    while ( v4 );
    return;
  }
  if ( (*(_DWORD *)(v7 + 48) & 2) != 0 || (v61 = *((_DWORD *)v4 + 96), v61 >= 4) || *(_BYTE *)(v9 + 132) && v61 == 3 )
    VidSchIsVSyncEnabled(v9, (unsigned int)v5);
  v11 = *(_DWORD *)(*(_QWORD *)(v8 + v9 + 2992) + 18896LL);
  if ( v11 != -1 )
  {
    v63 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2848);
    if ( v63 )
      v63(*(_QWORD *)(v9 + 2912), v11);
  }
  v93 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1880), &LockHandle);
  if ( (*((_DWORD *)v4 + 16) & 0x20) != 0 )
  {
    if ( (*((_DWORD *)v4 + 18) & 0xC00) != 0x400 )
      ++*(_QWORD *)(v7 + 8 * v6 + 336);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v93);
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v64, v65);
    while ( v4 );
    if ( v11 == -1 )
      return;
    v66 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2864);
    if ( !v66 )
      return;
LABEL_111:
    v66(*(_QWORD *)(v9 + 2912), v11);
    return;
  }
  v12 = (_QWORD *)(v7 + 8 * (v6 + 42));
  v90 = v12;
  if ( *((_QWORD *)v4 + 49) - *v12 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v10 + 2300)) )
  {
    VidSchiRewindPacket(v4, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v3, (_QWORD *)3, 2812LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v93);
    if ( v11 == -1 )
      return;
    v66 = *(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2864);
    if ( !v66 )
      return;
    goto LABEL_111;
  }
  v13 = -1;
  v87 = *(_DWORD *)(v10 + 4);
  v14 = *((_DWORD *)v4 + 18) >> 23;
  LOBYTE(v92) = 0;
  v94 = -1;
  if ( (v14 & 1) != 0 )
  {
    v15 = (unsigned __int8)*((_DWORD *)v4 + 174);
    v16 = (unsigned int)v15 | *((unsigned __int8 *)v4 + 697);
  }
  else
  {
    v15 = *(unsigned int *)(v9 + 128);
    v16 = (unsigned int)((1 << v15) - 1);
  }
  if ( (_DWORD)v16 )
  {
    v17 = !_BitScanForward((unsigned int *)&v18, v16);
    if ( v17 )
      LOBYTE(v18) = -1;
    do
    {
      v19 = 272LL * (char)v18;
      if ( *(_DWORD *)(v19 + v10 + 156) == 2 )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v19, v16);
        v80[5] = (char)v18;
        v80[3] = 281LL;
        v80[4] = 0x100000LL;
        v80[6] = *((unsigned int *)v4 + 95);
        v80[7] = v9;
        WdLogEvent5_WdCriticalError(v80);
        JUMPOUT(0x1C001CA9ALL);
      }
      if ( v13 == -1 )
      {
        v13 = (char)v18;
        v94 = (char)v18;
      }
      v15 = (unsigned __int8)v18;
      v16 = ~(1 << v18) & (unsigned int)v16;
      v17 = !_BitScanForward((unsigned int *)&v18, v16);
      if ( v17 )
        LOBYTE(v18) = -1;
    }
    while ( (_DWORD)v16 );
  }
  else
  {
    v67 = *(unsigned int *)(v9 + 128);
    v13 = 0;
    v94 = 0;
    if ( !(_DWORD)v67 )
      goto LABEL_121;
    while ( 1 )
    {
      v15 = 272LL * v13;
      if ( *(_DWORD *)(v15 + v10 + 156) != 2 )
        break;
      v94 = ++v13;
      if ( v13 >= (unsigned int)v67 )
        goto LABEL_121;
    }
    if ( v13 == -1 )
    {
LABEL_121:
      v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v67, v16);
      v68[3] = 281LL;
      v68[4] = 0x100000LL;
      v68[5] = 0LL;
      v68[6] = *((unsigned int *)v4 + 95);
      v68[7] = v9;
      WdLogEvent5_WdCriticalError(v68);
      JUMPOUT(0x1C001C6CBLL);
    }
  }
  v88 = *((_DWORD *)v4 + 98) - *(_DWORD *)v12;
  v89 = v10 + 8 * (v13 + 3LL);
  v84 = *(_DWORD **)v89;
  LODWORD(v20) = ((_BYTE)v88 + (unsigned __int8)*(_DWORD *)(*(_QWORD *)v89 + 32LL)) & 0x3F;
  v21 = (__int64 *)&v84[306 * (((_BYTE)v88 + (unsigned __int8)v84[8]) & 0x3F) + 14];
  v22 = *(_WORD *)(*(_QWORD *)(v9 + 8LL * *(unsigned int *)(v3 + 88) + 416) + 6LL);
  v81 = v22;
  if ( *((_DWORD *)v21 + 261) == 8 )
  {
    v21[*((unsigned int *)v21 + 268)] = v3;
    v21[(unsigned int)(*((_DWORD *)v21 + 268))++ + 65] = *(_QWORD *)(v3 + 144);
    ++*(_DWORD *)(v3 + 800);
    *((_DWORD *)v21 + 266) |= 1 << v22;
    v29 = 0LL;
  }
  else
  {
    ++*(_DWORD *)(v9 + 964);
    ++*(_DWORD *)(v7 + 1192);
    ++*(_DWORD *)(v3 + 800);
    ++*(_DWORD *)(v10 + 2300);
    if ( (*((_DWORD *)v4 + 66) & 0x800000) != 0 )
      v23 = (unsigned __int8)*((_DWORD *)v4 + 174) | *((unsigned __int8 *)v4 + 697);
    else
      v23 = (1 << *(_DWORD *)(v9 + 128)) - 1;
    v17 = !_BitScanForward((unsigned int *)&v24, v23);
    if ( v17 )
      LOBYTE(v24) = -1;
    while ( v23 )
    {
      ++*(_DWORD *)(272LL * (char)v24 + *(_QWORD *)(v8 + v9 + 2992) + 164);
      v23 &= ~(1 << v24);
      v17 = !_BitScanForward((unsigned int *)&v24, v23);
      if ( v17 )
        LOBYTE(v24) = -1;
    }
    v25 = (_DWORD *)v21[144];
    memset(v21, 0, 0x4C8uLL);
    v21[144] = (__int64)v25;
    memset(v25 + 4, 0, v25[1] * (48 * v25[2] + ((8 * v25[2] + 167) & 0xFFFFFFF8)));
    *v21 = v3;
    *((_DWORD *)v21 + 260) = *((_DWORD *)v4 + 26);
    *((_DWORD *)v21 + 262) = *((_DWORD *)v4 + 94);
    v21[65] = *(_QWORD *)(v3 + 144);
    *((_BYTE *)v21 + 1056) = (*((_DWORD *)v4 + 66) & 0x10) != 0;
    v26 = *((_DWORD *)v21 + 278) ^ (*((_DWORD *)v21 + 278) ^ (*((_DWORD *)v4 + 18) >> 19)) & 0x10;
    *((_DWORD *)v21 + 278) = v26;
    v27 = ((unsigned __int16)v26 ^ (*((_DWORD *)v4 + 66) >> 21)) & 0x200 ^ v26;
    *((_DWORD *)v21 + 278) = v27;
    v28 = ((unsigned __int16)v27 ^ (*((_DWORD *)v4 + 66) >> 21)) & 0x400 ^ v27;
    *((_DWORD *)v21 + 278) = v28;
    if ( (v28 & 0x200) != 0 )
    {
      *((_DWORD *)v21 + 290) = *((_DWORD *)v4 + 154);
      *(_OWORD *)((char *)v21 + 1164) = *(_OWORD *)((char *)v4 + 620);
      *(__int64 *)((char *)v21 + 1180) = *(_QWORD *)((char *)v4 + 636);
      *((_DWORD *)v21 + 297) = *((_DWORD *)v4 + 161);
    }
    else
    {
      *((_DWORD *)v21 + 290) = 0;
    }
    if ( (v28 & 0x400) != 0 )
    {
      *(_OWORD *)(v21 + 149) = *(_OWORD *)((char *)v4 + 648);
      *(_OWORD *)(v21 + 151) = *(_OWORD *)((char *)v4 + 664);
    }
    memmove((void *)v21[144], (char *)v4 + 696, *((unsigned int *)v4 + 177));
    v29 = 0LL;
    *((_DWORD *)v21 + 265) = *((_DWORD *)v4 + 100);
    *((_DWORD *)v21 + 266) = 1 << v81;
    v30 = *((_DWORD *)v21 + 278) ^ (*((_DWORD *)v21 + 278) ^ (*((_DWORD *)v4 + 66) >> 19)) & 1;
    *((_DWORD *)v21 + 278) = v30;
    v31 = ((unsigned __int8)v30 ^ (unsigned __int8)(*((_DWORD *)v4 + 66) >> 19)) & 2 ^ v30;
    *((_DWORD *)v21 + 278) = v31;
    v32 = ((unsigned __int8)v31 ^ (unsigned __int8)(*((_DWORD *)v4 + 66) >> 19)) & 4 ^ v31;
    *((_DWORD *)v21 + 278) = v32;
    *((_DWORD *)v21 + 278) = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)(*((_DWORD *)v4 + 66) >> 19)) & 8;
    *((_DWORD *)v21 + 279) = *((_DWORD *)v4 + 102);
    v21[142] = *((_QWORD *)v4 + 36);
    v21[143] = *((_QWORD *)v4 + 37);
    v17 = (*((_DWORD *)v4 + 66) & 0x400) == 0;
    *((_QWORD *)v4 + 36) = 0LL;
    *((_DWORD *)v21 + 268) = 1;
    if ( v17 )
      *((_DWORD *)v21 + 267) = 1;
    else
      *((_DWORD *)v21 + 267) = *((_DWORD *)v4 + 101);
    if ( v87 == 3 )
      goto LABEL_39;
    if ( *((_BYTE *)v21 + 1056) )
      goto LABEL_39;
    v33 = *((_DWORD *)v4 + 97);
    if ( v33 == 1 )
      goto LABEL_39;
    v69 = v33 - 2;
    if ( !v69 )
    {
      *((_DWORD *)v21 + 263) = 1;
      goto LABEL_40;
    }
    v70 = v69 - 1;
    if ( !v70 )
    {
      *((_DWORD *)v21 + 263) = 2;
      goto LABEL_40;
    }
    if ( v70 != 1 )
LABEL_39:
      *((_DWORD *)v21 + 263) = 0;
    else
      *((_DWORD *)v21 + 263) = 3;
  }
LABEL_40:
  if ( (*((_DWORD *)v4 + 66) & 0x800) != 0 )
    *((_BYTE *)v21 + 1057) = 1;
  v34 = v21[144];
  v35 = (unsigned __int8)*(_DWORD *)v34;
  if ( *(_BYTE *)(v9 + 132) )
    v36 = *(unsigned __int8 *)(v34 + 1);
  else
    v36 = 0;
  v17 = !_BitScanForward(&v37, v35);
  v83 = v36;
  v38 = 0;
  if ( v17 )
    LOBYTE(v37) = -1;
  v39 = (char)v37;
  v17 = !_BitScanForward(&v37, v36);
  if ( v17 )
    LOBYTE(v37) = -1;
  v37 = (char)v37;
  v86 = (char)v37;
  while ( v35 || v36 )
  {
    if ( v39 >= v37 )
    {
      v71 = -1;
      v36 &= ~(1 << v37);
      v17 = !_BitScanForward(&v37, v36);
      v83 = v36;
      if ( !v17 )
        v71 = v37;
      v37 = v71;
      v86 = v71;
      goto LABEL_78;
    }
    v53 = 0;
    v54 = v81;
    v55 = 1;
    v85 = 0;
    v82 = 0;
    while ( (*((_DWORD *)v21 + 265) & v55) == 0 )
    {
LABEL_134:
      ++v53;
      v55 *= 2;
      v85 = v53;
      if ( v53 > v54 )
        goto LABEL_75;
    }
    v56 = *(_QWORD *)(v21[144]
                    + *(_DWORD *)(v21[144] + 4) * ((8 * *(_DWORD *)(v21[144] + 8) + 167) & 0xFFFFFFF8)
                    + 48 * ((unsigned int)(v82 * *(_DWORD *)(v21[144] + 4) + v38) + 1LL));
    v54 = v81;
    if ( ((*(_DWORD *)(v56 + 32) >> 2) & 0x3F) != v81 )
    {
      ++v82;
      v53 = v85;
      goto LABEL_134;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v56 + 96) + 16LL) + 8LL));
LABEL_75:
    v35 &= ~(1 << v39);
    v17 = !_BitScanForward((unsigned int *)&v57, v35);
    if ( v17 )
      LOBYTE(v57) = -1;
    v36 = v83;
    v29 = 0LL;
    v39 = (char)v57;
    v37 = v86;
LABEL_78:
    ++v38;
  }
  if ( *((_DWORD *)v21 + 267) > *((_DWORD *)v21 + 268) )
  {
    *((_DWORD *)v21 + 261) = 8;
  }
  else
  {
    if ( !v88 )
    {
      v40 = v84;
      v41 = v94;
      while ( 1 )
      {
        v40[8] = ((_BYTE)v20 + 1) & 0x3F;
        ++*v90;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 972));
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 2308));
        v42 = 0LL;
        v43 = 0;
        if ( *((_DWORD *)v21 + 268) )
        {
          while ( 1 )
          {
            v42 = v21[v43];
            v44 = *(_QWORD *)(v42 + 104);
            if ( *(_BYTE *)(v44 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 160), 0, 0) )
              break;
            if ( (unsigned int)++v43 >= *((_DWORD *)v21 + 268) )
              goto LABEL_58;
          }
        }
        else
        {
LABEL_58:
          v45 = *((_DWORD *)v21 + 268);
          v46 = 0;
          if ( v45 )
          {
            while ( 1 )
            {
              v47 = v21[v46];
              v48 = HIDWORD(v21[v46 + 65]);
              v49 = *(_DWORD *)(v47 + 156);
              v50 = v48 <= v49;
              if ( v48 == v49 )
              {
                if ( LODWORD(v21[v46 + 65]) > *(_DWORD *)(v47 + 152) )
                  break;
                v50 = v48 <= v49;
              }
              if ( !v50 )
                break;
              if ( ++v46 >= v45 )
                goto LABEL_82;
            }
LABEL_61:
            ++*(_DWORD *)(v9 + 968);
            ++*(_DWORD *)(v10 + 2304);
            *((_DWORD *)v21 + 261) = 1;
LABEL_62:
            v40 = v84;
            goto LABEL_63;
          }
LABEL_82:
          VidSchiUpdateLastCompletedPresentTimestamp(v42, 1, 0);
          v40 = v84;
        }
        if ( !*(_BYTE *)(v10 + 46932) )
          goto LABEL_61;
        *((_DWORD *)v21 + 261) = 2;
        if ( v87 == 3 )
        {
          if ( (_DWORD)v20 != v40[10] )
            goto LABEL_63;
          if ( *(_BYTE *)(v9 + 132) )
          {
            v72 = *(_DWORD *)(*(_QWORD *)v89 + 48LL);
            v73 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v89 + 44LL) - 1) & 0x3F;
            if ( v72 == v73 )
            {
LABEL_144:
              if ( *(_DWORD *)(v9 + 136) > 1u && *(_DWORD *)(v10 + 4) != 3 && (v21[139] & 0x180) == 0x80 )
                goto LABEL_99;
              v74 = (v21[139] & 0x10) != 0
                  ? (unsigned __int8)*(_DWORD *)v21[144] | *(unsigned __int8 *)(v21[144] + 1)
                  : (1 << *(_DWORD *)(v9 + 128)) - 1;
              if ( (v74 & *(_DWORD *)(v10 + 2316)) == 0 )
                goto LABEL_99;
            }
            else
            {
              while ( *(_DWORD *)(1224LL * v72 + *(_QWORD *)v89 + 1100) != 14 )
              {
                v72 = ((_BYTE)v72 - 1) & 0x3F;
                if ( v72 == v73 )
                  goto LABEL_144;
              }
            }
            v21[135] = MEMORY[0xFFFFF78000000320];
          }
          else
          {
LABEL_99:
            v62 = v95;
            *((_DWORD *)v21 + 261) = 4;
            VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v9, v62, v41, v20, &v92);
            v40 = v84;
          }
          v40[9] = v40[8];
          goto LABEL_63;
        }
        if ( (_DWORD)v20 != v40[10] && !*((_BYTE *)v21 + 1056) )
        {
          v75 = ((_BYTE)v20 - 1) & 0x3F;
          v76 = (unsigned int)v40[306 * v75 + 292];
          if ( (v76 & 0x20) != 0 )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v44, v29);
            v79[6] = v84;
            v79[3] = 281LL;
            v79[4] = 0x100000LL;
            v79[5] = v75;
            v79[7] = v9;
            WdLogEvent5_WdCriticalError(v79);
            JUMPOUT(0x1C001CA49LL);
          }
          if ( !*(_DWORD *)(v10 + 2304) )
            v40[9] = v40[8];
          goto LABEL_63;
        }
        v40[9] = v40[8];
        v21[135] = MEMORY[0xFFFFF78000000320];
        if ( !*(_BYTE *)(v9 + 132) )
          goto LABEL_87;
        v77 = *(_DWORD *)(*(_QWORD *)v89 + 48LL);
        v78 = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v89 + 44LL) - 1) & 0x3F;
        if ( v77 != v78 )
        {
          while ( *(_DWORD *)(1224LL * v77 + *(_QWORD *)v89 + 1100) != 14 )
          {
            v77 = ((_BYTE)v77 - 1) & 0x3F;
            if ( v77 == v78 )
              goto LABEL_159;
          }
          goto LABEL_63;
        }
LABEL_159:
        if ( *(_DWORD *)(v9 + 136) <= 1u || *(_DWORD *)(v10 + 4) == 3 || (v21[139] & 0x180) != 0x80 )
        {
LABEL_87:
          if ( (v21[139] & 0x10) != 0 )
            v58 = (unsigned __int8)*(_DWORD *)v21[144] | *(unsigned __int8 *)(v21[144] + 1);
          else
            v58 = (1 << *(_DWORD *)(v9 + 128)) - 1;
          if ( (v58 & *(_DWORD *)(v10 + 2316)) != 0 )
            goto LABEL_63;
        }
        if ( *((_BYTE *)v21 + 1056) )
        {
          VidSchiRestartQueuedFlip(v7, v95, v41, (unsigned int)v20);
          v40 = v84;
        }
        v59 = *((_DWORD *)v21 + 263);
        if ( !v59 )
        {
          v60 = v95;
          *((_DWORD *)v21 + 261) = 4;
          VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v9, v60, v41, v20, &v92);
          goto LABEL_62;
        }
        *((_DWORD *)v21 + 261) = 3;
        *((_DWORD *)v21 + 263) = v59 - 1;
LABEL_63:
        v20 = (unsigned int)v40[8];
        v21 = (__int64 *)&v40[306 * v20 + 14];
        if ( *((_DWORD *)v21 + 261) != 7 )
          goto LABEL_64;
        v29 = 0LL;
      }
    }
    *((_DWORD *)v21 + 261) = 7;
  }
LABEL_64:
  *((_DWORD *)v4 + 16) |= 2u;
  if ( (_BYTE)v92 )
    VidSchiCompletePendingFlip(v9, v95, 9LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v51, v52);
  while ( v4 );
  KeLowerIrql(v93);
}
