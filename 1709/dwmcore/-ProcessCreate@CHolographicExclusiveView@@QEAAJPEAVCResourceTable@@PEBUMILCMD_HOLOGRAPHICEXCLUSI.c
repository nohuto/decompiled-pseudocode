/*
 * XREFs of ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1801BDA0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFB00 (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessCreate(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE *a3)
{
  bool v3; // zf

  v3 = *((_QWORD *)this + 7) == 0LL;
  *((_DWORD *)this + 17) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 5);
  *((_QWORD *)this + 12) = *((_QWORD *)a3 + 1);
  if ( !v3 )
    CHolographicManager::AddExclusiveView(*((CHolographicManager **)this + 7), this);
  return 0LL;
}
