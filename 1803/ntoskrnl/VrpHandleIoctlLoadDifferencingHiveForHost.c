/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14070929C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x14070D6EC (VrpLoadDifferencingHive.c)
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
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _WORD v22[4]; // [rsp+30h] [rbp-30h] BYREF
  void *Src; // [rsp+38h] [rbp-28h]
  __int16 v24; // [rsp+40h] [rbp-20h] BYREF
  __int16 v25; // [rsp+42h] [rbp-1Eh]
  __int64 v26; // [rsp+48h] [rbp-18h]
  _WORD v27[4]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]

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
    v15 = *(unsigned __int16 *)(a1 + 8);
    Src = (void *)(a1 + 14);
    v22[1] = v14;
    v22[0] = v14;
    v16 = a1 + 14 + 2 * (v15 >> 1);
    v17 = *(unsigned __int16 *)(a1 + 10);
    v27[1] = v17;
    v27[0] = v17;
    v28 = v16;
    v26 = v16 + 2 * (v17 >> 1);
    v25 = *(_WORD *)(a1 + 12);
    v24 = v25;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v14 + 10), 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = v22[0];
    memmove(PoolWithQuotaTag + 5, Src, v22[0]);
    DifferencingHive = VrpLoadDifferencingHive(
                         (unsigned int)v22,
                         (unsigned int)v27,
                         (unsigned int)&v24,
                         *(_DWORD *)a1,
                         *(_DWORD *)(a1 + 4) & 1,
                         (*(_DWORD *)(a1 + 4) >> 1) & 1);
    if ( DifferencingHive >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
      *(_QWORD *)PoolWithQuotaTag = VrpHostLoadedHives;
      VrpHostLoadedHives = (__int64)PoolWithQuotaTag;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock, v18, v19, v20);
      KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      return 0;
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)DifferencingHive;
}
