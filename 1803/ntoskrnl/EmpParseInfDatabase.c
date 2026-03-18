/*
 * XREFs of EmpParseInfDatabase @ 0x1408A97DC
 * Callers:
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x1408A98A4 (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x1408A9B4C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1408A9CB4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1408AA4CC (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408AA82C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408AAA58 (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x1408B1834 (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID *v8; // rdi
  int v9; // ebx
  char v10; // al
  int v12; // [rsp+40h] [rbp+18h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v12 = 0;
  v4 = CmpParseInfBuffer(a1, a2, &v12);
  v8 = (PVOID *)v4;
  if ( v4 )
  {
    v9 = EmpParseEntryTypes(v4);
    if ( v9 >= 0 )
    {
      v9 = EmpParseCallbacks(v8);
      if ( v9 >= 0 )
      {
        v9 = EmpParseRules(v8);
        if ( v9 >= 0 )
        {
          v9 = EmpParseStrings(v8);
          if ( v9 >= 0 )
            v9 = EmpParseTargetRules(v8);
        }
      }
    }
    CmpFreeSectionList(*v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741816;
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v9;
}
