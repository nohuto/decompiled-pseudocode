/*
 * XREFs of EmClientRuleEvaluate @ 0x140424420
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     EmpEvaluateTargetRule @ 0x140018A60 (EmpEvaluateTargetRule.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x1400B0F88 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400B0FAC (EmpSearchRuleDatabase.c)
 *     EmpReleasePagingReference @ 0x140424520 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x140424598 (EmpAcquirePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v9 = EmpSearchRuleDatabase(a1);
      if ( v9 && (v10 = EmpSearchTargetRuleList((__int64)v9)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v11 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v10, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
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
  return v4;
}
