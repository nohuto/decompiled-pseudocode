/*
 * XREFs of CmpVolumeContextDecrementRefCount @ 0x14054E060
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x1406F76D8 (CmpDestroyHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpVolumeContextCleanup @ 0x1406F7508 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextDecrementRefCount(PPRIVILEGE_SET Privileges)
{
  volatile signed __int64 *v2; // rdi
  signed __int64 v3; // rax
  signed __int64 i; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  PPRIVILEGE_SET *Luid; // rdx

  v2 = *(volatile signed __int64 **)&Privileges->Privilege[0].Attributes;
  _m_prefetchw(&Privileges[1].Control);
  v3 = *(_QWORD *)&Privileges[1].Control;
  for ( i = v3 - 1; i > 0; i = v3 - 1 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)&Privileges[1].Control, i, v3);
    if ( v5 == v3 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
  v8 = _InterlockedDecrement64((volatile signed __int64 *)&Privileges[1].Control);
  if ( v8 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2, v8, v6, v7);
    KeAbPostRelease((ULONG_PTR)v2);
  }
  else
  {
    if ( v8 )
      __fastfail(0xEu);
    v9 = *(_QWORD *)&Privileges->PrivilegeCount;
    if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
      || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
    {
      __fastfail(3u);
    }
    *Luid = (PPRIVILEGE_SET)v9;
    *(_QWORD *)(v9 + 8) = Luid;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2, (__int64)Luid, v6, v7);
    KeAbPostRelease((ULONG_PTR)v2);
    CmpVolumeContextCleanup(Privileges);
    CmSiFreeMemory(Privileges);
  }
}
