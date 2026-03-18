/*
 * XREFs of sub_14053A6D0 @ 0x14053A6D0
 * Callers:
 *     sub_14048AC0C @ 0x14048AC0C (sub_14048AC0C.c)
 *     WbCreateHeapExecutedBlock @ 0x140539C10 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WbHashData @ 0x14053A76C (WbHashData.c)
 */

__int64 __fastcall sub_14053A6D0(UCHAR *Source1, unsigned int a2)
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
