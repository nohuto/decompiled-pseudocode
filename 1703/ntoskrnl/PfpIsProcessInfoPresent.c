/*
 * XREFs of PfpIsProcessInfoPresent @ 0x140037CB0
 * Callers:
 *     PfpCopyEvent @ 0x140496400 (PfpCopyEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpIsProcessInfoPresent(__int64 a1)
{
  return *(_QWORD *)(a1 + 736) && *(_QWORD *)(a1 + 776);
}
