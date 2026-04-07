/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180016598
 * Callers:
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029660 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x18002C4DC (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002FFB4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180025994 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  CVisual *v2; // rcx
  int v3; // eax
  CWindowIconic *v4; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 49);
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 + 20);
    if ( (v3 & 0x8000) == 0 )
    {
      *((_DWORD *)v2 + 20) = v3 | 0x8000;
      CVisual::PropagateDirtyChildren(v2);
    }
  }
  v4 = (CWindowIconic *)*((_QWORD *)this + 54);
  if ( v4 )
    CWindowIconic::OnWindowStyleUpdated(v4, 1);
}
