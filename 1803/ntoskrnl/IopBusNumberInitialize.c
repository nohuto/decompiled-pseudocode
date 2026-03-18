/*
 * XREFs of IopBusNumberInitialize @ 0x14061B758
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14061AD90 (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopBusNumberInitialize(__int64 a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  qword_1403C6A78 = (__int64)IopBusNumberUnpackRequirement;
  qword_1403C6A80 = (__int64)IopBusNumberPackResource;
  qword_1403C6A88 = (__int64)IopBusNumberUnpackResource;
  qword_1403C6A90 = (__int64)IopBusNumberScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootBusNumberArbiter, a2, 6, (__int64)L"RootBusNumber", v3, 0LL);
}
