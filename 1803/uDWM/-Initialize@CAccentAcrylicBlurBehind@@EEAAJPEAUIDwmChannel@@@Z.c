/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x18003B950
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180025F40 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003B65C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(CAccentAcrylicBlurBehind *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CVisual::Initialize(this, a2);
  v4 = 0;
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B7,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v3,
      v8);
    return v5;
  }
  else
  {
    v6 = CAccentAcrylicBlurBehind::InitializeDComp(this);
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v4;
  }
}
