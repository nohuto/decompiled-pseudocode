/*
 * XREFs of ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1801348A4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18013699C (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 */

__int64 __fastcall CDesktopRenderTarget::ResetRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  char v5; // [rsp+28h] [rbp-20h]
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_BYTE *)this + 377);
  v2 = CHwndRenderTarget::ResetRenderTarget(
         (_DWORD)a2,
         (_DWORD)this,
         (unsigned int)&v6,
         *((_DWORD *)this + 86),
         *((_BYTE *)this + 364),
         v5,
         *(_QWORD *)((char *)this + 348),
         *(_QWORD *)((char *)this + 356));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x1E1u);
  return v3;
}
