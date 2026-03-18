/*
 * XREFs of TraceDxgkPerformanceWarning @ 0x1C0039320
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

NTSTATUS __fastcall TraceDxgkPerformanceWarning(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return Template_q(a1, &EventPerformanceWarning, a3, a1);
  return result;
}
