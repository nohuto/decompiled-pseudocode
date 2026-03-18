/*
 * XREFs of VidSchPrepareForRecovery @ 0x1C00B5FF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00B61D0 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchPrepareForRecovery(__int64 a1)
{
  VidSchiBlockDriverCallback(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2312LL) + 512LL));
  return 0LL;
}
