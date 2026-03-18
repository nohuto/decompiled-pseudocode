/*
 * XREFs of PnprLegacyDeviceDriversPresent @ 0x1406CCE88
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406CB3C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoGetLegacyVetoList @ 0x1404E8A2C (IoGetLegacyVetoList.c)
 */

bool PnprLegacyDeviceDriversPresent()
{
  bool v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  v0 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v2) >= 0 )
    v0 = v2 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v0;
}
