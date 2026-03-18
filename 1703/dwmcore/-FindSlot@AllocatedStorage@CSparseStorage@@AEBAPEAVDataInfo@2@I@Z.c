/*
 * XREFs of ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18004F7C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::AllocatedStorage::FindSlot(
        CSparseStorage::AllocatedStorage *this,
        int a2)
{
  unsigned int *v2; // r8
  unsigned int v3; // r9d

  v2 = (unsigned int *)((char *)this + 12);
  v3 = *((_DWORD *)this + 3);
  if ( (HIBYTE(v3) & 0x7F) != a2 )
  {
    do
    {
      v2 = (unsigned int *)((char *)v2 + (v3 & 0xFFFFFF) + 4);
      v3 = *v2;
    }
    while ( (HIBYTE(*v2) & 0x7F) != a2 );
  }
  return (struct CSparseStorage::DataInfo *)v2;
}
