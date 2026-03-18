/*
 * XREFs of ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800B75F0
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18001D4E0 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18001E300 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800B7570 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800B76C8 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CDataBlockReader::GetFirstItemSafe(
        struct _LIST_ENTRY ***this,
        unsigned int *a2,
        void **a3,
        unsigned int *a4)
{
  struct _LIST_ENTRY **v4; // rax
  __int64 result; // rax

  v4 = *this;
  if ( v4 == (struct _LIST_ENTRY **)*v4 )
    return 1LL;
  CDataBlockReader::SetCurrentBlock((CDataBlockReader *)this, *v4);
  this[3] = this[2];
  result = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)(this + 2), a2, a3, a4);
  if ( (_DWORD)result == 1 && this[1][1] != (struct _LIST_ENTRY *)*this )
    return 2147500037LL;
  return result;
}
