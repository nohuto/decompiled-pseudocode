/*
 * XREFs of ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18000F454
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18001D4E0 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18001E300 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CDataStreamWriter::FlushData(CDataStreamWriter *this)
{
  __int64 v1; // rdx
  CDataStreamWriter *v2; // rdx
  CDataStreamWriter **v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v2 = (CDataStreamWriter *)((v1 + 8) & -(__int64)(v1 != 0));
    v3 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    if ( *v3 != this )
      __fastfail(3u);
    *(_QWORD *)v2 = this;
    *((_QWORD *)v2 + 1) = v3;
    *v3 = v2;
    *((_QWORD *)this + 1) = v2;
    *((_QWORD *)this + 2) = 0LL;
  }
  return (struct _LIST_ENTRY *)this;
}
