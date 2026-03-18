/*
 * XREFs of PspRequestProcessExecutionState @ 0x140532010
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x14008A720 (PspSetProcessFreezeStateCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1405319B4 (PspApplyJobChainLimitsToProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     PsSwapProcessWorkingSet @ 0x14077A520 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRequestProcessExecutionState(__int64 a1, int a2, char a3)
{
  int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  bool v8; // zf

  if ( (*(_DWORD *)(a1 + 1740) & 1) == 0 || (v8 = (a3 & 1) == 0, v3 = 0x10000000, !v8) )
    v3 = 805306368;
  LODWORD(result) = *(_DWORD *)(a1 + 768);
  v5 = v3 & (a2 << 28);
  v6 = ~v3;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 768), v5 | result & v6, result);
  }
  while ( (_DWORD)result != v7 );
  return result;
}
