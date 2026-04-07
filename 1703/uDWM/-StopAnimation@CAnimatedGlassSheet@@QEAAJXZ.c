/*
 * XREFs of ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800873C8
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F380 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180087188 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x1800872A0 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800875D0 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?Hide@CAnimatedGlassSheet@@QEAAXXZ @ 0x180086B78 (-Hide@CAnimatedGlassSheet@@QEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800874B8 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     Template_dddd @ 0x1800877DC (Template_dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StopAnimation(CAnimatedGlassSheet *this)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  float v7; // xmm1_4
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // al

  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v4 = *((_QWORD *)this + 54);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    *((_QWORD *)this + 54) = 0LL;
    CDesktopManager::s_fTimelineDirty = v6;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_dddd(
        v3,
        v2,
        *((_DWORD *)this + 100),
        *((_DWORD *)this + 101),
        *((_DWORD *)this + 102),
        *((_DWORD *)this + 103));
  }
  if ( *((_QWORD *)this + 56) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 111)) & _xmm);
    if ( v7 <= 0.0000011920929 )
    {
      CAnimatedGlassSheet::Hide(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v8, (__int64)&UdwmGlassSheetFadeOut_End);
    }
  }
  v9 = *((_QWORD *)this + 56);
  if ( v9 )
  {
    v5 = (*(_DWORD *)(v9 + 8))-- == 1;
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v10 = 1;
    *((_QWORD *)this + 56) = 0LL;
    CDesktopManager::s_fTimelineDirty = v10;
  }
  return 0LL;
}
