/*
 * XREFs of EmpParseInfDatabase @ 0x140805228
 * Callers:
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x1408052F0 (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x14080571C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408062B4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x14081678C (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rdi
  int v6; // ebx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v8 = 0;
  v4 = CmpParseInfBuffer(a1, a2, &v8);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v6;
}
