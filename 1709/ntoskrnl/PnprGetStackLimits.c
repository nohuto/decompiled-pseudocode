/*
 * XREFs of PnprGetStackLimits @ 0x140200000
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140200330 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400D9080 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x140181960 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
