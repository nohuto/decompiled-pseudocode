/*
 * XREFs of IopBusNumberInitialize @ 0x1405CE874
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405CECAC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, int a2)
{
  qword_1403835F8 = (__int64)IopBusNumberUnpackRequirement;
  qword_140383600 = (__int64)IopBusNumberPackResource;
  qword_140383608 = (__int64)IopBusNumberUnpackResource;
  qword_140383610 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootBusNumberArbiter, a2, 6, (unsigned int)L"RootBusNumber");
}
