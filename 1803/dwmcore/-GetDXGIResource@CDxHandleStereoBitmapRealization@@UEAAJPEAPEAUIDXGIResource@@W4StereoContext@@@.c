/*
 * XREFs of ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180214E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180007BD0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180018DB8 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1802151A0 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDXGIResource(
        CD2DBitmap **a1,
        struct IDXGIResource **a2,
        unsigned int a3)
{
  int DXGIResource; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax

  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(a1, a3) )
  {
    DXGIResource = CDxHandleBitmapRealization::GetDXGIResource(a1, a2);
    v6 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DXGIResource, 0xD4u);
  }
  else
  {
    v7 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(a1);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD8u);
    }
    else
    {
      v8 = CD2DBitmap::GetDXGIResource(a1[51], a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xDAu);
    }
  }
  return v6;
}
