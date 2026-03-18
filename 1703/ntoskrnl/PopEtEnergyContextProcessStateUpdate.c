/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x1406D0F54
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406D031C (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x1406D0FDC (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PopEtEnumEnergyTrackers @ 0x1406D26C4 (PopEtEnumEnergyTrackers.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[4]; // [rsp+20h] [rbp-198h] BYREF
  _OWORD v5[22]; // [rsp+40h] [rbp-178h] BYREF

  ++*(_DWORD *)(a1[229] + 380LL);
  PsQueryProcessEnergyValues(a1, v5);
  memset(v4, 0, sizeof(v4));
  LODWORD(v4[2]) = 3;
  v4[3] = v5;
  v4[0] = a1;
  return PopEtEnumEnergyTrackers(v2, v4);
}
