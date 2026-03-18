/*
 * XREFs of EmClientQueryRuleState @ 0x14046FAB0
 * Callers:
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmSettings @ 0x140627EA0 (PopDirectedDripsQueryEmSettings.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     KeInitializeClock @ 0x1408C3688 (KeInitializeClock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x1400749A0 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400749C4 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1400749FC (EmpUpdateRuleState.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EmpAcquirePagingReference @ 0x14046FCA8 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x14046FD18 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r14
  volatile signed __int32 *v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbp

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v5 = EmpSearchRuleDatabase(a1);
      v9 = v5;
      if ( v5 && (v10 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v5), (v12 = v10) != 0LL) )
      {
        _InterlockedIncrement(v10);
        EmpUpdateRuleState(v11);
        _InterlockedAdd(v12, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v9 + 4);
      }
      else
      {
        v2 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, v6, v7, v8);
      KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
