/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14067A4F4
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
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
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _WORD v19[4]; // [rsp+30h] [rbp-30h] BYREF
  void *Src; // [rsp+38h] [rbp-28h]
  __int16 v21; // [rsp+40h] [rbp-20h] BYREF
  __int16 v22; // [rsp+42h] [rbp-1Eh]
  __int64 v23; // [rsp+48h] [rbp-18h]
  _WORD v24[4]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h]

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
    v15 = v14;
    v19[1] = v14;
    v19[0] = v14;
    Src = (void *)(a1 + 14);
    v16 = a1 + 14 + 2 * (v14 >> 1);
    v17 = *(unsigned __int16 *)(a1 + 10);
    v24[1] = v17;
    v24[0] = v17;
    v25 = v16;
    v23 = v16 + 2 * (v17 >> 1);
    v22 = *(_WORD *)(a1 + 12);
    v21 = v22;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(PagedPool, v15 + 10, 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = v19[0];
    memmove(PoolWithQuotaTag + 5, Src, v19[0]);
    DifferencingHive = VrpLoadDifferencingHive(
                         (unsigned int)v19,
                         (unsigned int)v24,
                         (unsigned int)&v21,
                         *(_DWORD *)a1,
                         *(_DWORD *)(a1 + 4) & 1,
                         (*(_DWORD *)(a1 + 4) >> 1) & 1);
    if ( DifferencingHive >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&gHostLoadedHivesLock, 0LL);
      *(_QWORD *)PoolWithQuotaTag = gHostLoadedHives;
      gHostLoadedHives = (__int64)PoolWithQuotaTag;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&gHostLoadedHivesLock);
      KeAbPostRelease((ULONG_PTR)&gHostLoadedHivesLock);
      return 0;
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)DifferencingHive;
}
