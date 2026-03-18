/*
 * XREFs of ResetHoldingFrame @ 0x1C01A6E04
 * Callers:
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A45D4 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     AbandonHoldingFrame @ 0x1C01A62D0 (AbandonHoldingFrame.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetHoldingFrame(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  v1 = (_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( *(_QWORD *)(a1 + 80) )
  {
    result = HMAssignmentUnlock(a1 + 80);
    *v1 = 0LL;
  }
  return result;
}
