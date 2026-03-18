/*
 * XREFs of ?UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x18019AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18007A9E8 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CD2DBitmap::UpdateAlphaMode(CD2DBitmap *this, enum D2D1_ALPHA_MODE a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 29) != a2 )
  {
    *((_DWORD *)this + 29) = a2;
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 6);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 7);
    v4 = CD2DBitmap::InitializeBitmaps((CD2DBitmap *)((char *)this - 104));
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1D9u);
  }
  return v2;
}
