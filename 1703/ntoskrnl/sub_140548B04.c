/*
 * XREFs of sub_140548B04 @ 0x140548B04
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x14045CE10 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x1405481A0 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbHashData @ 0x140548BA0 (WbHashData.c)
 */

__int64 __fastcall sub_140548B04(UCHAR *Source1, unsigned int a2)
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
