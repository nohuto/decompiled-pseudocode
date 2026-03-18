/*
 * XREFs of ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014C214
 * Callers:
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801438E4 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawTextW(
        CDrawingContext *this,
        unsigned __int16 *a2,
        __int64 a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        const struct _D3DCOLORVALUE *a6)
{
  int v6; // r10d
  int v7; // r8d
  int v8; // r8d

  v6 = 0;
  v7 = *((_DWORD *)this + 72);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 3 )
        v6 = 2;
    }
    else
    {
      v6 = 1;
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *, __int64, struct IDWriteTextFormat *, const struct D2D_RECT_F *, const struct _D3DCOLORVALUE *, bool, int, _DWORD, _DWORD))(**((_QWORD **)this + 49) + 160LL))(
           *((_QWORD *)this + 49),
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           a2,
           3LL,
           a4,
           a5,
           a6,
           *((_DWORD *)this + 66) != 0,
           v6,
           0,
           0);
}
