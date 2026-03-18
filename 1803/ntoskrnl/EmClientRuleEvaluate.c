/*
 * XREFs of EmClientRuleEvaluate @ 0x14046FBA0
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     EmpEvaluateTargetRule @ 0x140074298 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x1400749A0 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1400749C4 (EmpSearchRuleDatabase.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EmpAcquirePagingReference @ 0x14046FCA8 (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x14046FD18 (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v10 = EmpSearchRuleDatabase(a1);
      if ( v10 && (v13 = EmpSearchTargetRuleList((__int64)v10)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v14 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v13, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock, v9, v11, v12);
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
