/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C001D7B4
 * Callers:
 *     IsIntelPccDriverPresent @ 0x1C0003FEC (IsIntelPccDriverPresent.c)
 *     GetRegistryQwordValue @ 0x1C001D584 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C001D790 (GetRegistryDwordValue.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x1C002277C (ProcLibTraceSummary2.c)
 *     GetHvPpmCapabilities @ 0x1C002ABD0 (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 *     PopulateEnergyEstimationModel @ 0x1C0035264 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0035340 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00353FC (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C0005000 (memset.c)
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
