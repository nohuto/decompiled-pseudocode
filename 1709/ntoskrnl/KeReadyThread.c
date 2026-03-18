/*
 * XREFs of KeReadyThread @ 0x1400A6844
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KiInSwapSingleProcess @ 0x1400BFC20 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KeReadyThread(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 CurrentIrql; // r8

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 572) & 7) == 0 )
    return KiFastReadyThread(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  result = KiInSwapSingleProcess(a1, v1, CurrentIrql);
  if ( !(_BYTE)result )
    return KiFastReadyThread(a1);
  return result;
}
