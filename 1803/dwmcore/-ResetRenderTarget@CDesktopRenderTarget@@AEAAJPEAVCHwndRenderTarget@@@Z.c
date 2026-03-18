/*
 * XREFs of ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800D780C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800D79E8 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 */

__int64 __fastcall CDesktopRenderTarget::ResetRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  char v5; // [rsp+28h] [rbp-20h]
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_BYTE *)this + 329);
  v2 = CHwndRenderTarget::ResetRenderTarget(
         (_DWORD)a2,
         (_DWORD)this,
         (unsigned int)&v6,
         *((_DWORD *)this + 73),
         *((_BYTE *)this + 312),
         v5,
         *((_QWORD *)this + 37),
         *((_QWORD *)this + 38));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x183u);
  return v3;
}
