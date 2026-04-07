/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180037E40
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180011758 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800373C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180037F4C (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x180037330 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 100LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 104LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 104LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 108LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 592LL) = ((unsigned __int8)IsOpenThemeDataPresent() != 0 ? 8 : 0) | *(_BYTE *)(*((_QWORD *)this + 10) + 592LL) & 0xF7;
  *(_DWORD *)(*((_QWORD *)this + 10) + 356LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 356LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 592LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 592LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 592LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0x1000000u;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x8000);
  if ( a2 )
  {
    v5 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x215u);
  }
  return v4;
}
