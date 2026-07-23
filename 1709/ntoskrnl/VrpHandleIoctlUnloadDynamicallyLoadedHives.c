/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1406A33F0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsThreadInSilo @ 0x140089378 (PsIsThreadInSilo.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     ZwUnloadKey2 @ 0x140181080 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x1401E5E10 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x14024E430 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x1406A30B8 (VrpCleanupNamespace.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONGLONG *v9; // r14
  __int64 v10; // r13
  volatile signed __int64 *v11; // rsi
  ULONGLONG v12; // rax
  ULONGLONG i; // rdi
  ULONGLONG v14; // rdx
  ULONGLONG v15; // rcx
  __int64 v16; // r15
  ULONGLONG pullResult; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
        goto LABEL_27;
      }
      PermanentSiloContext = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a5);
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = (ULONGLONG *)a5;
        --CurrentThread->KernelApcDisable;
        v10 = a5;
        v11 = (volatile signed __int64 *)(a5 + 16);
        ExAcquirePushLockExclusiveEx(a5 + 16, 0LL);
        if ( *(_DWORD *)(v10 + 84) )
        {
          JobSilo = -1073741738;
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_27;
        }
        v12 = v9[6];
        for ( i = 0LL; i < v12; v12 = v9[6] )
        {
          v14 = 0LL;
          if ( i < v12 )
          {
            if ( ULongLongMult(v9[5], i, &pullResult) < 0
              || (v15 = v9[9], v14 = v15 + pullResult, v15 + pullResult < v15) )
            {
              v14 = 0LL;
            }
          }
          v16 = *(_QWORD *)v14;
          if ( *(int *)(*(_QWORD *)v14 + 56LL) >= 0 )
          {
            ++i;
          }
          else
          {
            TargetKey.RootDirectory = 0LL;
            TargetKey.ObjectName = (PUNICODE_STRING)(v16 + 24);
            TargetKey.Length = 48;
            TargetKey.Attributes = 576;
            *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
            ZwUnloadKey2(&TargetKey, 1u);
            VrpDestroyNamespaceNode(v10);
          }
        }
        VrpCleanupNamespace(v10);
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_27;
      }
      JobSilo = 0;
    }
  }
LABEL_27:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
