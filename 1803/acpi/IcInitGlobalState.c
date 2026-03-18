/*
 * XREFs of IcInitGlobalState @ 0x1C00925B8
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C009C790 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C0066548 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
