/*
 * XREFs of ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x1C003F524
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007BA80 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     ACPIComputeDeviceIdMutiStringLength @ 0x1C003F464 (ACPIComputeDeviceIdMutiStringLength.c)
 */

__int64 __fastcall ACPIEmQueryFailDeviceResetOnOpenHandles(unsigned int a1, _WORD *a2)
{
  __int64 v2; // r10
  _QWORD *v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  _QWORD v6[4]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp+18h] BYREF

  v6[0] = a2;
  v6[2] = a1;
  v5 = 24;
  v6[1] = 2 * ACPIComputeDeviceIdMutiStringLength(a2);
  v4 = v6;
  v7 = &v4;
  return EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_FAIL_RESET_ON_OPEN_HANDLES, &v7, 1LL, v2);
}
