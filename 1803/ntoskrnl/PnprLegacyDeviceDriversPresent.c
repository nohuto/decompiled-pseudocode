/*
 * XREFs of PnprLegacyDeviceDriversPresent @ 0x140734828
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140732D40 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoGetLegacyVetoList @ 0x14051CFCC (IoGetLegacyVetoList.c)
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
