/*
 * XREFs of ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001F2BC
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18001F308 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18001F50C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D200 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow::ReleaseHolographicSlate(CTopLevelWindow *this)
{
  CBaseObject *v2; // rcx
  struct CVisual **v3; // rdx
  VisualCollection *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    v3 = (struct CVisual **)*((_QWORD *)this + 59);
    v4 = (VisualCollection *)(*((_QWORD *)this + 99) + 32LL);
    *((_QWORD *)this + 98) = 0LL;
    VisualCollection::InsertRelative(v4, v3, 0LL, 1u, 1);
    v5 = (CBaseObject *)*((_QWORD *)this + 99);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 99) = 0LL;
    }
  }
}
