/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1407285CC
 * Callers:
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiPnpRtlObjectEventCreate @ 0x140504830 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, wchar_t *a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v12 = 0LL;
  Object = PiDmGetObject(1LL, (__int64)a2, (__int64 *)&BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        *(_DWORD *)(v6 + 32) |= 1u;
        ExReleasePushLockEx(v6, 0LL, v7, v8);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) >= 0 )
        {
          v9 = KeGetCurrentThread();
          --v9->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v10 = PiPnpRtlObjectEventCreate((__int64)a2, 1LL, (__int64)P, &v12);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v10 >= 0 && v12 )
            *(_DWORD *)(v12 + 4) |= 1u;
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
