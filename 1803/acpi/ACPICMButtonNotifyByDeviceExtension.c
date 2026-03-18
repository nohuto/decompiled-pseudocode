/*
 * XREFs of ACPICMButtonNotifyByDeviceExtension @ 0x1C0016550
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonNotify @ 0x1C0016464 (ACPICMButtonNotify.c)
 */

_QWORD *__fastcall ACPICMButtonNotifyByDeviceExtension(__int64 a1, unsigned int a2)
{
  return ACPICMButtonNotify(0LL, a1, a2);
}
