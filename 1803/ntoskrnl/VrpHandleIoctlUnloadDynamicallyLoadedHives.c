/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407097C0
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ZwUnloadKey2 @ 0x1401AACC0 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x140223478 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x1402847C0 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x140707750 (VrpCleanupNamespace.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONGLONG v15; // rax
  ULONGLONG i; // rdi
  ULONGLONG v17; // r8
  ULONGLONG v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONGLONG pullResult; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
        goto LABEL_28;
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
            ExfTryToWakePushLock(v11, v12, v13, v14);
          KeAbPostRelease((ULONG_PTR)v11);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_28;
        }
        v15 = v9[6];
        for ( i = 0LL; i < v15; v15 = v9[6] )
        {
          v17 = 0LL;
          if ( i < v15 )
          {
            if ( ULongLongMult(v9[5], i, &pullResult) < 0 || (v18 = v9[9], v18 + pullResult < v18) )
              v17 = 0LL;
            else
              v17 = v18 + pullResult;
          }
          v19 = *(_QWORD *)v17;
          if ( *(int *)(*(_QWORD *)v17 + 56LL) >= 0 )
          {
            ++i;
          }
          else
          {
            TargetKey.RootDirectory = 0LL;
            TargetKey.ObjectName = (PUNICODE_STRING)(v19 + 24);
            TargetKey.Length = 48;
            TargetKey.Attributes = 576;
            *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
            ZwUnloadKey2(&TargetKey, 1u);
            VrpDestroyNamespaceNode(v10);
          }
        }
        VrpCleanupNamespace(v10);
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11, v20, v21, v22);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_28;
      }
      JobSilo = 0;
    }
  }
LABEL_28:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
