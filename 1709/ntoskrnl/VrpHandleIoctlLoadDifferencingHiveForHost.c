/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1406A4C3C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1406A33F0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x1406A8FE8 (VrpLoadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _WORD *PoolWithQuotaTag; // rdi
  int DifferencingHive; // ebx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _WORD v18[4]; // [rsp+30h] [rbp-30h] BYREF
  void *Src; // [rsp+38h] [rbp-28h]
  __int16 v20; // [rsp+40h] [rbp-20h] BYREF
  __int16 v21; // [rsp+42h] [rbp-1Eh]
  __int64 v22; // [rsp+48h] [rbp-18h]
  _WORD v23[4]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h]

  PoolWithQuotaTag = 0LL;
  if ( a2 < 0x10 )
    return (unsigned int)-1073741811;
  v8 = *(_WORD *)(a1 + 8);
  if ( (v8 & 1) != 0 || (v9 = *(_WORD *)(a1 + 10), (v9 & 1) != 0) || (v10 = *(_WORD *)(a1 + 12), (v10 & 1) != 0) )
  {
    DifferencingHive = -1073741811;
  }
  else
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    if ( !v9 )
      return (unsigned int)-1073741811;
    v11 = v8 + 14;
    v12 = v11 + v9;
    if ( v11 > v12 )
      return (unsigned int)-1073741811;
    v13 = v12 + v10;
    if ( v12 > v13 || a2 < v13 )
      return (unsigned int)-1073741811;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
      return (unsigned int)-1073741727;
    v14 = *(unsigned __int16 *)(a1 + 8);
    Src = (void *)(a1 + 14);
    v18[1] = v14;
    v18[0] = v14;
    v15 = a1 + 2 * ((unsigned __int64)v14 >> 1);
    v24 = v15 + 14;
    v16 = *(unsigned __int16 *)(a1 + 10);
    v23[1] = v16;
    v23[0] = v16;
    v22 = v15 + 2 * ((v16 >> 1) + 7);
    v21 = *(_WORD *)(a1 + 12);
    v20 = v21;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14 + 10, 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = v18[0];
    memmove(PoolWithQuotaTag + 5, Src, v18[0]);
    DifferencingHive = VrpLoadDifferencingHive(
                         (unsigned int)v18,
                         (unsigned int)v23,
                         (unsigned int)&v20,
                         *(_DWORD *)a1,
                         *(_DWORD *)(a1 + 4) & 1,
                         (*(_DWORD *)(a1 + 4) >> 1) & 1);
    if ( DifferencingHive >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
      *(_QWORD *)PoolWithQuotaTag = VrpHostLoadedHives;
      VrpHostLoadedHives = (__int64)PoolWithQuotaTag;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
      KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      return 0;
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)DifferencingHive;
}
