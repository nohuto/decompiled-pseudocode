/*
 * XREFs of IopBusNumberInitialize @ 0x1405D5BF8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405B5E18 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_140367618 = (__int64)IopBusNumberUnpackRequirement;
  qword_140367620 = (__int64)IopBusNumberPackResource;
  qword_140367628 = (__int64)IopBusNumberUnpackResource;
  qword_140367630 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber", v3, 0LL);
}
