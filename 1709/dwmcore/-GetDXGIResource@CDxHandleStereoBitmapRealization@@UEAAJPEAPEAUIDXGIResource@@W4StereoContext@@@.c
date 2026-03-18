/*
 * XREFs of ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801D2F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18004C9E8 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18004D640 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801D2DC0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801D3270 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDXGIResource(
        CD2DBitmap **a1,
        struct IDXGIResource **a2,
        unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  signed int DXGIResource; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax

  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(a1, a3) )
  {
    DXGIResource = CDxHandleBitmapRealization::GetDXGIResource(a1, a2);
    v8 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DXGIResource, 0xD4u);
  }
  else
  {
    v9 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(a1, v5, v6);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xD8u);
    }
    else
    {
      v10 = CD2DBitmap::GetDXGIResource(a1[51], a2);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xDAu);
    }
  }
  return v8;
}
