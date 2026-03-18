/*
 * XREFs of sub_1405731F0 @ 0x1405731F0
 * Callers:
 *     sub_14044AEBC @ 0x14044AEBC (sub_14044AEBC.c)
 *     WbCreateHeapExecutedBlock @ 0x140503894 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbHashData @ 0x14057328C (WbHashData.c)
 */

__int64 __fastcall sub_1405731F0(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( Source1 && a2 > 0x20 )
  {
    v2 = WbHashData(Source1 + 32, a2 - 32);
    if ( v2 >= 0 )
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
