/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180037DE0
 * Callers:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180011818 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 593LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 593LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 593LL)) & 0x20;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x100000);
  if ( a2 )
  {
    v6 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1EBu);
  }
  return v4;
}
