/*
 * XREFs of HSMMUX_InitializeHSMMuxContext @ 0x1C000CD54
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0066140 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     memset @ 0x1C0039F00 (memset.c)
 */

void __fastcall HSMMUX_InitializeHSMMuxContext(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx

  v1 = (KSPIN_LOCK *)(a1 + 2312);
  memset((void *)(a1 + 2312), 0, 0x50uLL);
  v1[6] = (KSPIN_LOCK)(v1 + 5);
  v1[5] = (KSPIN_LOCK)(v1 + 5);
  v1[9] = (KSPIN_LOCK)(v1 + 8);
  v1[8] = (KSPIN_LOCK)(v1 + 8);
  KeInitializeSpinLock(v1);
}
