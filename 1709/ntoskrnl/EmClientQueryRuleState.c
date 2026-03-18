/*
 * XREFs of EmClientQueryRuleState @ 0x140424330
 * Callers:
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x1400B0F88 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400B0FAC (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1400B0FE4 (EmpUpdateRuleState.c)
 *     EmpReleasePagingReference @ 0x140424520 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x140424598 (EmpAcquirePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbp

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v5 = EmpSearchRuleDatabase(a1);
      v6 = v5;
      if ( v5 && (v7 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v5), (v9 = v7) != 0LL) )
      {
        _InterlockedIncrement(v7);
        EmpUpdateRuleState(v8);
        _InterlockedAdd(v9, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v6 + 4);
      }
      else
      {
        v2 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
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
