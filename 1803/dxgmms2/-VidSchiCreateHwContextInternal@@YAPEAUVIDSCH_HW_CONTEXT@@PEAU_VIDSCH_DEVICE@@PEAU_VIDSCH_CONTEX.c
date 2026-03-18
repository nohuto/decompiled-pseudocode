/*
 * XREFs of ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0030470
 * Callers:
 *     VidSchCreateSystemDevices @ 0x1C007F53C (VidSchCreateSystemDevices.c)
 *     VidSchCreateHwContext @ 0x1C00BE8F0 (VidSchCreateHwContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002DD70 (McTemplateK0pqqqqqqqqppp.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0030D14 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwContext @ 0x1C0033120 (VidSchTerminateHwContext.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00BF11C (VidSchiUpdateDdiHwContextPriority.c)
 */

struct VIDSCH_HW_CONTEXT *__fastcall VidSchiCreateHwContextInternal(
        struct _VIDSCH_DEVICE *a1,
        struct _VIDSCH_CONTEXT_DATA *a2,
        struct DXGCONTEXT *a3)
{
  __int64 v3; // r13
  char *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // r12
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  struct _VIDSCH_DEVICE **v16; // rdx
  struct _VIDSCH_DEVICE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rdx
  char v21; // al
  _QWORD *v22; // rdx
  __int64 v23; // r8
  bool v24; // zf
  struct _VIDSCH_DEVICE *v25; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v27[10]; // [rsp+A0h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x180uLL, 0x68536956u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v11);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0x180uLL);
  *(_DWORD *)v10 = 1668761686;
  *((_QWORD *)v10 + 3) = a3;
  *((_QWORD *)v10 + 1) = a1;
  *((_OWORD *)v10 + 3) = *(_OWORD *)a2;
  *((_QWORD *)v10 + 8) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v10 + 18) = *((_DWORD *)a2 + 6);
  v13 = *(_QWORD *)(v3 + 8LL * *((unsigned int *)a2 + 1) + 440);
  *((_QWORD *)v10 + 2) = v13;
  memset(v10 + 312, 0, 0x38uLL);
  KeInitializeEvent((PRKEVENT)v10 + 13, SynchronizationEvent, 0);
  *((_QWORD *)v10 + 47) = v10 + 368;
  *((_QWORD *)v10 + 46) = v10 + 368;
  *((_QWORD *)v10 + 18) = v10 + 136;
  *((_QWORD *)v10 + 17) = v10 + 136;
  VidSchiIncrementHwContextReference((struct VIDSCH_HW_CONTEXT *)v10);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1904), &LockHandle);
  v14 = *(_QWORD **)(v13 + 1696);
  v15 = v10 + 104;
  if ( *v14 != v13 + 1688 )
    __fastfail(3u);
  *v15 = v13 + 1688;
  *((_QWORD *)v10 + 14) = v14;
  *v14 = v15;
  *(_QWORD *)(v13 + 1696) = v15;
  v16 = (struct _VIDSCH_DEVICE **)*((_QWORD *)a1 + 12);
  v17 = (struct _VIDSCH_DEVICE *)(v10 + 88);
  if ( *v16 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88) )
    __fastfail(3u);
  *(_QWORD *)v17 = (char *)a1 + 88;
  *((_QWORD *)v10 + 12) = v16;
  *v16 = v17;
  *((_QWORD *)a1 + 12) = v17;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a3 )
  {
    *((_QWORD *)v10 + 5) = *((_QWORD *)a3 + 23);
  }
  else
  {
    memset(v27, 0, 0x48uLL);
    v18 = *((_QWORD *)v10 + 2);
    v19 = *(_QWORD *)(v3 + 8);
    v27[0] = 0LL;
    LODWORD(v27[1]) = *(unsigned __int16 *)(*(_QWORD *)(v3 + 8LL * *(unsigned __int16 *)(v18 + 4) + 440) + 8LL);
    HIDWORD(v27[1]) = 1 << *(_BYTE *)(*(_QWORD *)(v3 + 8LL * *(unsigned __int16 *)(v18 + 4) + 440) + 6LL);
    v20 = 352LL * *(unsigned __int16 *)(v13 + 6);
    LODWORD(v27[2]) = v27[2] & 0xFFFFFFF6 | ((*(_DWORD *)a2 & 4 | ((*(_DWORD *)a2 & 0x200 | 0x400u) >> 4)) >> 2);
    v21 = *(_BYTE *)(v20 + *(_QWORD *)(*(_QWORD *)(v19 + 16) + 2360LL) + 40);
    v22 = (_QWORD *)*((_QWORD *)a1 + 2);
    LODWORD(v27[2]) ^= (LOBYTE(v27[2]) ^ (unsigned __int8)(4 * v21)) & 4;
    if ( (int)DxgCoreInterface[18](v19, v22, (__int64)v27) < 0 )
    {
      VidSchTerminateHwContext(v10);
      return 0LL;
    }
    v24 = bTracingEnabled == 0;
    *((_QWORD *)v10 + 5) = v27[0];
    if ( !v24 )
    {
      v25 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 1);
      if ( !v25 )
        v25 = a1;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqqqqqqqqppp(
          v27[6],
          &EventCreateContext,
          v23,
          (__int64)v25,
          v27[1],
          SBYTE4(v27[1]),
          SBYTE4(v27[4]),
          v27[5],
          SBYTE4(v27[5]),
          v27[6],
          SBYTE4(v27[6]),
          (2 * ((*(_DWORD *)(*((_QWORD *)v10 + 1) + 48LL) & 0x10) != 0)) | 1,
          v10);
    }
  }
  VidSchiUpdateDdiHwContextPriority(v10);
  return (struct VIDSCH_HW_CONTEXT *)v10;
}
