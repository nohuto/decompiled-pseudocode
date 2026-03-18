/*
 * XREFs of ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800CD73C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N33@Z @ 0x1800CD7E8 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 */

__int64 __fastcall CDesktopRenderTarget::ResetRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  int v2; // r9d
  char v3; // al
  int v4; // eax
  unsigned int v5; // ebx
  char v7; // [rsp+28h] [rbp-30h]
  char v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v2 = *((_DWORD *)this + 86);
  v8 = *((_BYTE *)this + 378);
  v7 = *((_BYTE *)this + 364);
  v3 = *((_BYTE *)this + 376);
  v9 = *(_OWORD *)((char *)this + 348);
  v4 = CHwndRenderTarget::ResetRenderTarget((_DWORD)a2, (_DWORD)this, (unsigned int)&v9, v2, v3, v7, v8);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1DDu);
  return v5;
}
