/*
 * XREFs of EtwTraceDCompCommitBatchEvent @ 0x1C0082330
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C8E0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Template_qpq @ 0x1C00DC824 (Template_qpq.c)
 */

__int64 __fastcall EtwTraceDCompCommitBatchEvent(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return Template_qpq(a1, a2, a3, a1, a2, a3);
  return result;
}
