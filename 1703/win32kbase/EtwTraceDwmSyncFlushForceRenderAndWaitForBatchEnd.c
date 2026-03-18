/*
 * XREFs of EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C008E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &DwmSyncFlushForceRenderAndWaitForBatchEnd, a3, (unsigned int)a1);
  return result;
}
