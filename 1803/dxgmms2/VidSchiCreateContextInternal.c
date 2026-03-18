/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C00117A8
 * Callers:
 *     VidSchCreateContext @ 0x1C00787C0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C007F53C (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011368 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C0012330 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002DD70 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchSetPriorityContext @ 0x1C0078650 (VidSchSetPriorityContext.c)
 *     VidSchTerminateContext @ 0x1C0078DA0 (VidSchTerminateContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // r15
  PVOID PoolWithTag; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int v21; // r13d
  SIZE_T v22; // rdi
  PVOID v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v29; // r9
  int v30; // ebx
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // r9
  _QWORD *v34; // rdx
  int v35; // r8d
  bool v36; // zf
  __int128 v37; // xmm1
  __int64 v38; // rax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // r9
  unsigned int v42; // r14d
  int v43; // r15d
  PVOID v44; // rax
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+80h] [rbp-80h]
  KSPIN_LOCK *v50; // [rsp+80h] [rbp-80h]
  _QWORD v51[4]; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v53[5]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) == 0 && !a3
    || (PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x3D8uLL, 0x68536956u), (v8 = (__int64)PoolWithTag) == 0) )
  {
    v47 = WdLogNewEntry5_WdWarning(a1, a2);
    WdLogEvent5_WdWarning(v47);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0x3D8uLL);
  *(_DWORD *)v8 = 1852785494;
  *(_QWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 104) = a1;
  *(_QWORD *)(v8 + 80) = KeGetCurrentThread();
  *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
  *(_QWORD *)(v8 + 128) = *((_QWORD *)a2 + 2);
  *(_DWORD *)(v8 + 136) = a2[6];
  v9 = (unsigned int)a2[1];
  *(_DWORD *)(v8 + 88) = v9;
  *(_QWORD *)(v8 + 96) = *(_QWORD *)(v4 + 8 * v9 + 440);
  v10 = *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[6])() + 323);
  v11 = *(_QWORD *)(v8 + 96);
  *(_QWORD *)(v8 + 144) = 1LL;
  *(_BYTE *)(v8 + 893) = (v10 & 8) != 0;
  v49 = v11;
  memset((void *)(v8 + 320), 0, 0x38uLL);
  KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
  *(_QWORD *)(v8 + 384) = v8 + 376;
  *(_QWORD *)(v8 + 376) = v8 + 376;
  *(_QWORD *)(v8 + 664) = v8 + 656;
  *(_QWORD *)(v8 + 656) = v8 + 656;
  *(_QWORD *)(v8 + 680) = v8 + 672;
  *(_QWORD *)(v8 + 672) = v8 + 672;
  *(_QWORD *)(v8 + 696) = v8 + 688;
  *(_QWORD *)(v8 + 688) = v8 + 688;
  *(_QWORD *)(v8 + 712) = v8 + 704;
  *(_QWORD *)(v8 + 704) = v8 + 704;
  if ( (*a2 & 0x100) != 0 )
  {
    *(_QWORD *)(v8 + 736) = v8 + 728;
    *(_QWORD *)(v8 + 728) = v8 + 728;
  }
  *(_QWORD *)(v8 + 760) = v8 + 752;
  *(_QWORD *)(v8 + 752) = v8 + 752;
  *(_BYTE *)(v8 + 892) = 1;
  VidSchiIncrementContextReference(v8);
  *(_BYTE *)(v8 + 892) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1904), &LockHandle);
  if ( *(_BYTE *)(a1 + 1076) || *(_BYTE *)(a1 + 1077) )
  {
    *(_DWORD *)(v8 + 184) |= 0x100u;
    v13 = v49 + 2568;
    v12 = (_QWORD *)(v8 + 8);
    v14 = *(_QWORD **)(v49 + 2576);
    if ( *v14 != v49 + 2568 )
      __fastfail(3u);
  }
  else
  {
    v12 = (_QWORD *)(v8 + 8);
    v13 = v49 + 2536;
    v14 = *(_QWORD **)(v49 + 2544);
    if ( *v14 != v49 + 2536 )
      __fastfail(3u);
  }
  *v12 = v13;
  v12[1] = v14;
  *v14 = v12;
  *(_QWORD *)(v13 + 8) = v12;
  v15 = *(_QWORD **)(a1 + 80);
  v16 = (_QWORD *)(v8 + 24);
  if ( *v15 != a1 + 72 )
    __fastfail(3u);
  *v16 = a1 + 72;
  *(_QWORD *)(v8 + 32) = v15;
  *v15 = v16;
  *(_QWORD *)(a1 + 80) = v16;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v17 = *(_QWORD *)(v4 + 2480);
  *(_QWORD *)(v8 + 464) = v17;
  v18 = *(_QWORD *)(v4 + 2528);
  *(_QWORD *)(v8 + 440) = v17;
  *(_QWORD *)(v8 + 472) = v18;
  KeInitializeTimer((PKTIMER)(v8 + 504));
  KeInitializeDpc((PRKDPC)(v8 + 568), VidSchiDelayReadyRoutine, (PVOID)v8);
  v19 = *a2;
  if ( (*a2 & 0x604) == 0 )
  {
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
    goto LABEL_12;
  }
  if ( (v19 & 1) == 0 )
  {
    if ( bTracingEnabled )
    {
      memset(v51, 0, sizeof(v51));
      v29 = *(_QWORD *)(a1 + 8);
      v30 = (v19 >> 6) & 1;
      if ( !v29 )
        LODWORD(v29) = a1;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v31 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v8 + 88) + 440);
        McTemplateK0pqqqqqqqqppp(
          *(unsigned __int16 *)(v31 + 8),
          (unsigned int)&EventCreateContext,
          HIDWORD(v51[0]),
          v29,
          *(_WORD *)(v31 + 8),
          1 << *(_BYTE *)(v31 + 6),
          v51[0],
          SBYTE4(v51[0]),
          v51[1],
          SBYTE4(v51[1]),
          v51[2],
          (2 * (((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0) | (2 * v30))) | 1,
          v8);
      }
    }
    goto LABEL_12;
  }
  memset(v53, 0, 0x48uLL);
  *(_QWORD *)&v53[0] = 0LL;
  v32 = *(unsigned int *)(v8 + 88);
  v33 = *(_QWORD *)(v4 + 8);
  DWORD2(v53[0]) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 8 * v32 + 440) + 8LL);
  HIDWORD(v53[0]) = 1 << *(_BYTE *)(*(_QWORD *)(v4 + 8 * v32 + 440) + 6LL);
  LODWORD(v53[1]) = v53[1] & 0xFFFFFFE6 | ((v19 & 4 | ((v19 & 0x200 | (v19 >> 1) & 0x400) >> 4)) >> 2);
  v34 = *(_QWORD **)(a1 + 16);
  LODWORD(v53[1]) ^= (LOBYTE(v53[1]) ^ (unsigned __int8)(4
                                                       * *(_BYTE *)(352LL * *(unsigned __int16 *)(v49 + 6)
                                                                  + *(_QWORD *)(*(_QWORD *)(v33 + 16) + 2360LL)
                                                                  + 40))) & 4;
  if ( (int)DxgCoreInterface[18](v33, v34, (__int64)v53) >= 0 )
  {
    v36 = bTracingEnabled == 0;
    v37 = v53[1];
    v38 = *(_QWORD *)&v53[0];
    *(_OWORD *)(v8 + 896) = v53[0];
    *(_QWORD *)(v8 + 64) = v38;
    v39 = v53[2];
    *(_OWORD *)(v8 + 912) = v37;
    v40 = v53[3];
    *(_OWORD *)(v8 + 928) = v39;
    *(_QWORD *)&v39 = *(_QWORD *)&v53[4];
    *(_OWORD *)(v8 + 944) = v40;
    *(_QWORD *)(v8 + 960) = v39;
    if ( !v36 )
    {
      v41 = *(_QWORD *)(a1 + 8);
      if ( !v41 )
        LODWORD(v41) = a1;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqqqqqqqqppp(
          v53[3],
          (unsigned int)&EventCreateContext,
          v35,
          v41,
          SBYTE8(v53[0]),
          SBYTE12(v53[0]),
          SBYTE4(v53[2]),
          SBYTE8(v53[2]),
          SBYTE12(v53[2]),
          v53[3],
          SBYTE4(v53[3]),
          (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) & 0x10) != 0)) | 1,
          v8);
    }
LABEL_12:
    if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) >= 0 )
    {
      v20 = *(_DWORD *)(v4 + 132) * (48 * *(_DWORD *)(v4 + 60) + ((8 * *(_DWORD *)(v4 + 60) + 175) & 0xFFFFFFF8))
          + 8 * (*(_DWORD *)(v4 + 60) + 98);
      if ( v20 <= 0x3C0 )
        v20 = 960;
      v21 = 0;
      v22 = v20;
      do
      {
        v23 = ExAllocatePoolWithTag((POOL_TYPE)512, v22, 0x68536956u);
        v26 = (__int64)v23;
        if ( !v23 )
        {
          v48 = WdLogNewEntry5_WdWarning(v25, v24);
          WdLogEvent5_WdWarning(v48);
          goto LABEL_37;
        }
        memset(v23, 0, v22);
        v50 = (KSPIN_LOCK *)(v4 + 1912);
        VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v4 + 1912), v8 + 752, (_QWORD *)(v26 + 8), (_DWORD *)(v8 + 768));
        VidSchiFreeQueuePacket(v8, v26, v27);
        ++v21;
      }
      while ( v21 < 5 );
      if ( (*a2 & 0x100) == 0 )
        return v8;
      v42 = a2[6];
      if ( v42 )
      {
        v43 = 0;
        while ( 1 )
        {
          v44 = ExAllocatePoolWithTag((POOL_TYPE)512, v22, 0x68536956u);
          v45 = (__int64)v44;
          if ( !v44 )
            break;
          memset(v44, 0, v22);
          *(_DWORD *)(v45 + 64) |= 0x40u;
          VidSchiInterlockedInsertTailList(v50, v8 + 752, (_QWORD *)(v45 + 8), (_DWORD *)(v8 + 768));
          VidSchiFreeQueuePacket(v8, v45, v46);
          if ( ++v43 >= v42 )
            return v8;
        }
      }
    }
  }
LABEL_37:
  VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
  return 0LL;
}
