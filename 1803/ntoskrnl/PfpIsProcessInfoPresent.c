/*
 * XREFs of PfpIsProcessInfoPresent @ 0x14007AB78
 * Callers:
 *     PfpCopyEvent @ 0x1405293C0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140529600 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 736) && *(_QWORD *)(a1 + 776);
}
