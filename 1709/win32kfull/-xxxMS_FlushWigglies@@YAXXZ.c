/*
 * XREFs of ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01DAD00
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void xxxMS_FlushWigglies(void)
{
  _BYTE v0[48]; // [rsp+30h] [rbp-38h] BYREF

  memset(v0, 0, sizeof(v0));
  while ( (unsigned int)xxxInternalGetMessage((int)v0, 0, 512, 512, 3, 0) )
    ;
}
