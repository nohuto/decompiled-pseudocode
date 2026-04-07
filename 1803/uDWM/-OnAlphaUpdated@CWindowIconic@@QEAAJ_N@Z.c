/*
 * XREFs of ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003A9D4
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029700 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A580 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowIconic::OnAlphaUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 344LL) = *(_BYTE *)(*((_QWORD *)this + 9) + 344LL);
  CVisual::SetOpacity(
    *((CVisual **)this + 11),
    (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)this + 11) + 720LL) + 344LL) / 255.0);
  if ( a2 )
  {
    v6 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x297u);
  }
  return v4;
}
