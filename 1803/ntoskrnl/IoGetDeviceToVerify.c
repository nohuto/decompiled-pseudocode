/*
 * XREFs of IoGetDeviceToVerify @ 0x14014D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetDeviceToVerify(PETHREAD Thread)
{
  return (PDEVICE_OBJECT)Thread[1].ApcState.ApcListHead[0].Flink;
}
