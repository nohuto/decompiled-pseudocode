/*
 * XREFs of ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001F308
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180016080 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001F2BC (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::ForceDisconnectClientArea(struct CVisual **this)
{
  CBaseObject *v2; // rax
  __int64 v3; // rcx

  if ( (*((_BYTE *)this + 241) & 4) != 0 )
    CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v2 = this[59];
  if ( v2 )
  {
    v3 = *((_QWORD *)v2 + 3);
    if ( v3 )
    {
      VisualCollection::Remove((VisualCollection *)(v3 + 32), this[59]);
      v2 = this[59];
    }
    if ( v2 )
    {
      CBaseObject::Release(v2);
      this[59] = 0LL;
    }
  }
}
