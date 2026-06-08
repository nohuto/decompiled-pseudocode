/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0021D48
 * Callers:
 *     GetHvPpmCapabilities @ 0x1C001A310 (GetHvPpmCapabilities.c)
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E52C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     GetRegistryDwordValue @ 0x1C0021D24 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0021DC4 (GetRegistryQwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C0028498 (ProcLibTraceSummary2.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0031EA4 (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C0032114 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0032374 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C000CC80 (memset.c)
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
