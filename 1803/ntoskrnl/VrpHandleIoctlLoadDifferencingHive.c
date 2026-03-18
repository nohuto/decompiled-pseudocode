/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x140708F80
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
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PsGetJobSilo @ 0x1402847C0 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpLoadDifferencingHive @ 0x14070D6EC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14070DA14 (VrpUnloadDifferencingHive.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _WORD *PoolWithTag; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  _WORD v29[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-18h]
  _WORD v31[4]; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-8h]

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
  String1.Length = v10;
  String1.Buffer = (wchar_t *)(a1 + 26);
  v16 = *(_QWORD *)a1;
  v32 = a1 + 26 + 2 * ((unsigned __int64)v10 >> 1);
  v31[1] = v11;
  v31[0] = v11;
  v30 = v32 + 2 * ((unsigned __int64)v11 >> 1);
  v29[1] = v12;
  v29[0] = v12;
  JobSilo = ObpReferenceObjectByHandleWithTag(v16, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
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
                        (unsigned int)v31,
                        (unsigned int)v29,
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
                *(_QWORD *)PoolWithTag = *(_QWORD *)(v18 + 24);
                *(_QWORD *)(v18 + 24) = PoolWithTag;
                if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v19, v24, v25, v26);
                KeAbPostRelease((ULONG_PTR)v19);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                JobSilo = 0;
                goto LABEL_25;
              }
              JobSilo = -1073741670;
              VrpUnloadDifferencingHive(&String1);
            }
          }
          if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v19, v20, v21, v22);
          KeAbPostRelease((ULONG_PTR)v19);
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
