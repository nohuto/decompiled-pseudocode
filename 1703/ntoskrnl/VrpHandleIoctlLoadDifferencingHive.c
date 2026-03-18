/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x14067A1F8
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int JobSilo; // edi
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  ULONG_PTR v16; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v18; // r15
  volatile signed __int64 *v19; // rsi
  _WORD *PoolWithTag; // rdi
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  _WORD v23[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-18h]
  _WORD v25[4]; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-8h]
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  Object = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v10 = *(_WORD *)(a1 + 20);
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  v11 = *(_WORD *)(a1 + 22);
  if ( (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  v12 = *(_WORD *)(a1 + 24);
  if ( (v12 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !v10 )
    return (unsigned int)-1073741811;
  if ( !v11 )
    return (unsigned int)-1073741811;
  v13 = v10 + 26;
  v14 = v13 + v11;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  v15 = v14 + v12;
  if ( v14 > v15 || a2 < v15 || (*(_DWORD *)(a1 + 12) & 1) != 0 && !v12 )
    return (unsigned int)-1073741811;
  String1.MaximumLength = *(_WORD *)(a1 + 20);
  String1.Length = v10;
  String1.Buffer = (wchar_t *)(a1 + 26);
  v16 = *(_QWORD *)a1;
  v26 = a1 + 26 + 2 * ((unsigned __int64)v10 >> 1);
  v25[1] = v11;
  v25[0] = v11;
  v24 = v26 + 2 * ((unsigned __int64)v11 >> 1);
  v23[1] = v12;
  v23[0] = v12;
  JobSilo = ObpReferenceObjectByHandleWithTag(v16, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetPermanentSiloContext(a5, gVregSiloContextSlot, &a6);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v18 = a6;
        v19 = (volatile signed __int64 *)(a6 + 16);
        ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
        if ( *(_DWORD *)(v18 + 84) )
        {
          JobSilo = -1073741738;
        }
        else
        {
          JobSilo = VrpLoadDifferencingHive(
                      (unsigned int)&String1,
                      (unsigned int)v25,
                      (unsigned int)v23,
                      *(_DWORD *)(a1 + 16),
                      *(_DWORD *)(a1 + 12) & 1,
                      (*(_DWORD *)(a1 + 12) >> 1) & 1);
          if ( JobSilo >= 0 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, String1.Length + 10LL, 0x67655256u);
            if ( PoolWithTag )
            {
              PoolWithTag[4] = String1.Length;
              memmove(PoolWithTag + 5, String1.Buffer, String1.Length);
              *(_QWORD *)PoolWithTag = *(_QWORD *)(v18 + 24);
              *(_QWORD *)(v18 + 24) = PoolWithTag;
              if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v19);
              KeAbPostRelease((ULONG_PTR)v19);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              JobSilo = 0;
              goto LABEL_23;
            }
            JobSilo = -1073741670;
            VrpUnloadDifferencingHive(&String1);
          }
        }
        if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v19);
        KeAbPostRelease((ULONG_PTR)v19);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
  }
LABEL_23:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
