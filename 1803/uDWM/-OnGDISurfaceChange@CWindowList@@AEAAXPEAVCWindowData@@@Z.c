/*
 * XREFs of ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002C974
 * Callers:
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028A60 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D5C0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::OnGDISurfaceChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rax

  v2 = (CVisual *)*((_QWORD *)a2 + 49);
  if ( v2 )
  {
    if ( *((_QWORD *)a2 + 47) )
      CVisual::SetDirtyFlags(v2, 0x2000000);
    else
      *((_DWORD *)v2 + 20) &= ~0x2000000u;
  }
}
