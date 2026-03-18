/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x1406A491C
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
 *     memmove @ 0x140192C00 (memmove.c)
 *     PsGetJobSilo @ 0x14024E430 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpLoadDifferencingHive @ 0x1406A8FE8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1406A92F8 (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        unsigned __int64 a6)
{
  int JobSilo; // edi
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG_PTR v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v20; // r15
  volatile signed __int64 *v21; // rsi
  _WORD *PoolWithTag; // rdi
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  _WORD v25[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  _WORD v27[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+68h] [rbp-8h]

  Object = 0LL;
  a6 = 0LL;
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
  String1.Buffer = (wchar_t *)(a1 + 26);
  String1.Length = v10;
  v27[1] = v11;
  v16 = a1 + 2 * ((unsigned __int64)v10 >> 1);
  v27[0] = v11;
  v25[1] = v12;
  v28 = v16 + 26;
  v25[0] = v12;
  v17 = v16 + 2 * (((unsigned __int64)v11 >> 1) + 13);
  v18 = *(_QWORD *)a1;
  v26 = v17;
  JobSilo = ObpReferenceObjectByHandleWithTag(v18, 6, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &a6);
        if ( JobSilo >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v20 = a6;
          v21 = (volatile signed __int64 *)(a6 + 16);
          ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
          if ( *(_DWORD *)(v20 + 84) )
          {
            JobSilo = -1073741738;
          }
          else
          {
            JobSilo = VrpLoadDifferencingHive(
                        (unsigned int)&String1,
                        (unsigned int)v27,
                        (unsigned int)v25,
                        *(_DWORD *)(a1 + 16),
                        *(_DWORD *)(a1 + 12) & 1,
                        (*(_DWORD *)(a1 + 12) >> 1) & 1);
            if ( JobSilo >= 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)String1.Length + 10, 0x67655256u);
              if ( PoolWithTag )
              {
                PoolWithTag[4] = String1.Length;
                memmove(PoolWithTag + 5, String1.Buffer, String1.Length);
                *(_QWORD *)PoolWithTag = *(_QWORD *)(v20 + 24);
                *(_QWORD *)(v20 + 24) = PoolWithTag;
                if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v21);
                KeAbPostRelease((ULONG_PTR)v21);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                JobSilo = 0;
                goto LABEL_25;
              }
              JobSilo = -1073741670;
              VrpUnloadDifferencingHive(&String1);
            }
          }
          if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v21);
          KeAbPostRelease((ULONG_PTR)v21);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
  }
LABEL_25:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
