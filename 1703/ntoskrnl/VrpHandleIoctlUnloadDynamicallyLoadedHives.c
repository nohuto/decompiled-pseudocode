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
  __int64 v12; // r8
  ULONGLONG v13; // rax
  ULONGLONG i; // rdi
  ULONGLONG v15; // rdx
  __int64 v16; // r15
  ULONGLONG pullResult; // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v24 = 0LL;
  a6 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      PermanentSiloContext = PsGetPermanentSiloContext(a6, gVregSiloContextSlot, (unsigned __int64 *)&v24);
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = (ULONGLONG *)v24;
        --CurrentThread->KernelApcDisable;
        v10 = v24;
        v11 = (volatile signed __int64 *)(v24 + 16);
        ExAcquirePushLockExclusiveEx(v24 + 16, 0LL);
        if ( *(_DWORD *)(v10 + 84) )
        {
          JobSilo = -1073741738;
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_25;
        }
        v13 = v9[6];
        for ( i = 0LL; i < v13; v13 = v9[6] )
        {
          v15 = 0LL;
          if ( i < v13 )
          {
            if ( ULongLongMult(v9[5], i, &pullResult) < 0 || (v15 = v9[9] + pullResult, v15 < v9[9]) )
              v15 = 0LL;
          }
          v16 = *(_QWORD *)v15;
          if ( *(int *)(*(_QWORD *)v15 + 48LL) >= 0 )
          {
            ++i;
          }
          else
          {
            v20 = 0LL;
            v21 = v16 + 16;
            v19 = 48;
            v22 = 576;
            v23 = 0LL;
            ZwUnloadKey2((__int64)&v19, 1LL, v12);
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
