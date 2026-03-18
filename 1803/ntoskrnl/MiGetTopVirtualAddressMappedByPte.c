/*
 * XREFs of MiGetTopVirtualAddressMappedByPte @ 0x14017D7B4
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetTopVirtualAddressMappedByPte(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = 3LL;
  v2 = a1 << 25 >> 16;
  do
  {
    v2 = v2 << 25 >> 16;
    --v1;
  }
  while ( v1 );
  return v2;
}
