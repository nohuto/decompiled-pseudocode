/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C000C320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
