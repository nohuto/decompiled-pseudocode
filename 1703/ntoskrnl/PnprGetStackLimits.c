/*
 * XREFs of PnprGetStackLimits @ 0x1401FA2B8
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401FA618 (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140417D90 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x140181EE0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
