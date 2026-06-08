/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0029830
 * Callers:
 *     ProcLibTraceSummary2 @ 0x1C0020158 (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0026F88 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00277EC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 *     GetRegistryDwordValue @ 0x1C002980C (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C00298AC (GetRegistryQwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C002D930 (GetHvPpmCapabilities.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0030E68 (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C00310C4 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0031318 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C000CA40 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
