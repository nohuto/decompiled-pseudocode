/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AAA4
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180016598 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028CE0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180039EE0 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A024 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A580 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x180039F94 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, __int64 a2)
{
  char v3; // si
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax

  v3 = a2;
  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 100LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 104LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 104LL);
  v5 = *((_QWORD *)this + 9);
  v6 = *((_QWORD *)this + 10);
  *(_DWORD *)(v6 + 108) = *(_DWORD *)(v5 + 108);
  *(_BYTE *)(*((_QWORD *)this + 10) + 592LL) = ((unsigned __int8)IsOpenThemeDataPresent(v6, a2) != 0 ? 8 : 0) | *(_BYTE *)(*((_QWORD *)this + 10) + 592LL) & 0xF7;
  *(_DWORD *)(*((_QWORD *)this + 10) + 348LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 348LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 592LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 592LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 592LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 100LL) |= 0x1000000u;
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x8000);
  if ( v3 )
  {
    v7 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x216u);
  }
  return v4;
}
