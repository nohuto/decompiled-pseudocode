/*
 * XREFs of ObpReferenceProcessObjectByHandle @ 0x140507D70
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x140506A7C (ObCaptureObjectStateForDuplication.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     ExLockHandleTableEntry @ 0x1400BD9D4 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x140756A50 (ExpGetHandleExtraInfo.c)
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
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  volatile signed __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  unsigned int v21; // eax
  int v22; // ecx
  signed __int64 BugCheckParameter4; // rax
  __int64 result; // rax
  bool v25; // zf
  __int64 *HandleExtraInfo; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-48h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  *a6 = 0LL;
  if ( (a1 & 0x80000000) == 0LL )
    goto LABEL_2;
  if ( a1 == -1LL )
  {
    v25 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v25 )
      ObpPushStackInfo((__int64)&a2[-1].ReadTransferCount, 1, 1u, a5);
    ObpIncrPointerCount(&a2[-1].ReadTransferCount);
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
        v12 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a3, v8);
        v13 = v12;
        if ( v12 )
        {
          if ( ExLockHandleTableEntry(a3, v12) )
          {
            v16 = v13[1] & 0x1FFFFFF;
            v17 = (volatile signed __int64 *)((*(__int64 *)v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( *(_DWORD *)(a3 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(a3, v8, v14, v15)) != 0LL )
              v18 = *HandleExtraInfo;
            else
              v18 = 0LL;
            v19 = (__int64)*(unsigned int *)v13 >> 17;
            *a8 = v18;
            v20 = v19 & 7;
            v21 = *((_DWORD *)v13 + 2);
            v22 = v20 | 8;
            a7[1] = v16;
            if ( (v21 & 0x2000000) == 0 )
              v22 = v20;
            *a7 = v22;
            BugCheckParameter4 = _InterlockedIncrement64(v17);
            if ( BugCheckParameter4 <= 1 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v17 + 6), 0x10uLL, BugCheckParameter4);
            _InterlockedExchangeAdd64(v13, 1uLL);
            _InterlockedOr(v27, 0);
            if ( *(_QWORD *)(a3 + 48) )
              ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)v17, 1, 1u, a5);
            *a6 = (struct _KTHREAD *)(v17 + 6);
            return 0LL;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 3221225480LL;
    }
    v25 = ObpTraceFlags == 0;
    a7[1] = 0x1FFFFF;
    *a7 = 0;
    *a8 = 0LL;
    if ( !v25 )
      ObpPushStackInfo((__int64)&CurrentThread[-1].ReadTransferCount, 1, 1u, a5);
    ObpIncrPointerCount(&CurrentThread[-1].ReadTransferCount);
    result = 0LL;
    *a6 = CurrentThread;
  }
  return result;
}
