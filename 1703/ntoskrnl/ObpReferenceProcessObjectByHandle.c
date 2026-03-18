/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x140517B10
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x1405171E0 (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     ExLockHandleTableEntry @ 0x1400B0390 (ExLockHandleTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x1407172E0 (ExpGetHandleExtraInfo.c)
 */

__int64 __fastcall ObpReferenceProcessObjectByHandle(
        unsigned __int64 a1,
        struct _KTHREAD *a2,
        __int64 a3,
        char a4,
        int a5,
        struct _KTHREAD **a6,
        int *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rbx
  int v14; // r10d
  volatile signed __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  __int64 result; // rax
  bool v22; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v24[14]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_2;
  if ( a1 == -1LL )
  {
    v22 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v22 )
      ObpPushStackInfo((__int64)&a2[-1].OtherOperationCount, 1, 1u, a5);
    ObpIncrPointerCount(&a2[-1].OtherOperationCount);
    result = 0LL;
    *a6 = a2;
  }
  else
  {
    if ( a1 != -2LL )
    {
      if ( a4 )
        return 3221225480LL;
      a3 = ObpKernelHandleTable;
      v8 = a1 ^ 0xFFFFFFFF80000000uLL;
LABEL_2:
      --CurrentThread->KernelApcDisable;
      if ( (v8 & 0x3FC) != 0 )
      {
        v12 = (volatile signed __int64 *)ExpLookupHandleTableEntry(a3, v8);
        v13 = v12;
        if ( v12 )
        {
          if ( ExLockHandleTableEntry(a3, v12) )
          {
            v14 = v13[1] & 0x1FFFFFF;
            v15 = (volatile signed __int64 *)((*(__int64 *)v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( *(_DWORD *)(a3 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v8)) != 0LL )
              v16 = *HandleExtraInfo;
            else
              v16 = 0LL;
            v17 = (__int64)*(unsigned int *)v13 >> 17;
            *a8 = v16;
            v18 = v17 & 7;
            v19 = *((_DWORD *)v13 + 2);
            v20 = v18 | 8;
            a7[1] = v14;
            if ( (v19 & 0x2000000) == 0 )
              v20 = v18;
            *a7 = v20;
            ObpIncrPointerCount(v15);
            _InterlockedExchangeAdd64(v13, 1uLL);
            _InterlockedOr(v24, 0);
            if ( *(_QWORD *)(a3 + 48) )
              ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)v15, 1, 1u, a5);
            *a6 = (struct _KTHREAD *)(v15 + 6);
            return 0LL;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
    v22 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v22 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].OtherOperationCount, 1, 1u, a5);
    ObpIncrPointerCount(&CurrentThread[-1].OtherOperationCount);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
