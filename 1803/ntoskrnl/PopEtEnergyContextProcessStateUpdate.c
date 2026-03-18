/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x14052F950
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140531AD4 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x140532154 (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     PopEtEnumEnergyTrackers @ 0x14052F9D8 (PopEtEnumEnergyTrackers.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[4]; // [rsp+20h] [rbp-1E8h] BYREF
  _OWORD v5[27]; // [rsp+40h] [rbp-1C8h] BYREF

  ++*(_DWORD *)(a1[232] + 468LL);
  PsQueryProcessEnergyValues(a1, v5);
  memset(v4, 0, sizeof(v4));
  LODWORD(v4[0]) = 3;
  v4[3] = v5;
  v4[1] = a1;
  return PopEtEnumEnergyTrackers(v2, v4);
}
