/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14067AA04
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey2 @ 0x140181680 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x1401E1D04 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x14067909C (VrpCleanupNamespace.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
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
  UNICODE_STRING *v15; // r15
  ULONGLONG pullResult; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v19 = 0LL;
  a6 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      PermanentSiloContext = PsGetPermanentSiloContext(a6, gVregSiloContextSlot, (unsigned __int64 *)&v19);
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = (ULONGLONG *)v19;
        --CurrentThread->KernelApcDisable;
        v10 = v19;
        v11 = (volatile signed __int64 *)(v19 + 16);
        ExAcquirePushLockExclusiveEx(v19 + 16, 0LL);
        if ( *(_DWORD *)(v10 + 84) )
        {
          JobSilo = -1073741738;
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_25;
        }
        v12 = v9[6];
        for ( i = 0LL; i < v12; v12 = v9[6] )
        {
          v14 = 0LL;
          if ( i < v12 )
          {
            if ( ULongLongMult(v9[5], i, &pullResult) < 0 || (v14 = v9[9] + pullResult, v14 < v9[9]) )
              v14 = 0LL;
          }
          v15 = *(UNICODE_STRING **)v14;
          if ( *(int *)(*(_QWORD *)v14 + 48LL) >= 0 )
          {
            ++i;
          }
          else
          {
            TargetKey.RootDirectory = 0LL;
            TargetKey.ObjectName = v15 + 1;
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
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_25;
      }
      JobSilo = 0;
    }
  }
LABEL_25:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
