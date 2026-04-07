/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180009D50
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180011268 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001EFD0 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(CBaseObject **this)
{
  struct CVisual *v2; // rdx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx

  if ( (*((_BYTE *)this + 241) & 4) != 0 )
    CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v2 = this[59];
  if ( v2 )
  {
    v3 = *((_QWORD *)v2 + 3);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v2);
    v4 = this[59];
    if ( v4 )
    {
      CBaseObject::Release(v4);
      this[59] = 0LL;
    }
  }
}
