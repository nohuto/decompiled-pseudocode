/*
 * XREFs of EmpParseInfDatabase @ 0x1408335A4
 * Callers:
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x14083366C (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x140833920 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140833A88 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1408342C0 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140834620 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x14083484C (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x14083DA1C (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rdi
  int v6; // ebx
  char v7; // al
  int v9; // [rsp+40h] [rbp+18h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v9 = 0;
  v4 = CmpParseInfBuffer(a1, a2, &v9);
  v5 = (PVOID *)v4;
  if ( v4 )
  {
    v6 = EmpParseEntryTypes(v4);
    if ( v6 >= 0 )
    {
      v6 = EmpParseCallbacks(v5);
      if ( v6 >= 0 )
      {
        v6 = EmpParseRules(v5);
        if ( v6 >= 0 )
        {
          v6 = EmpParseStrings(v5);
          if ( v6 >= 0 )
            v6 = EmpParseTargetRules(v5);
        }
      }
    }
    CmpFreeSectionList(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741816;
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v6;
}
