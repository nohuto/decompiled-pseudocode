/*
 * XREFs of PfpIsProcessInfoPresent @ 0x140011D20
 * Callers:
 *     PfpCopyEvent @ 0x140455440 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x140455670 (PfpFlushBuffers.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 736) && *(_QWORD *)(a1 + 776);
}
