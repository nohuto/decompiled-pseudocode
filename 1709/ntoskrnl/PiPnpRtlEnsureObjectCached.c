/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1406C259C
 * Callers:
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, __int64 a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v10 = 0LL;
  Object = PiDmGetObject(1LL, a2, (__int64 *)&BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1LL, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        *(_DWORD *)(v6 + 32) |= 1u;
        ExReleasePushLockEx(v6, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) >= 0 )
        {
          v7 = KeGetCurrentThread();
          --v7->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v8 = PiPnpRtlObjectEventCreate(a2, 1LL, (__int64)P, &v10);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v8 >= 0 && v10 )
            *(_DWORD *)(v10 + 4) |= 1u;
          PiPnpRtlEndOperation((PVOID **)P);
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)v4;
}
