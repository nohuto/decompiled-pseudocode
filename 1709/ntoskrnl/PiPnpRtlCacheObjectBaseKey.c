/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x14052447C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405232C0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140524598 (PiPnpRtlGetCurrentOperation.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(int a1, __int64 a2, int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( a3 >= 6 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
    if ( CurrentOperation >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, (unsigned int)a3, v12, &v13);
      if ( CurrentOperation >= 0 && v13 )
      {
        v11 = (_QWORD *)(v13 + 16);
        if ( *(_QWORD *)(v13 + 16)
          || (CurrentOperation = PnpOpenObjectRegKey(a1, a2, a3, 0x2000000, 0, (__int64)v11, 0LL, 0),
              CurrentOperation >= 0) )
        {
          *a4 = *v11;
        }
        else
        {
          *v11 = 0LL;
        }
      }
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  return (unsigned int)CurrentOperation;
}
