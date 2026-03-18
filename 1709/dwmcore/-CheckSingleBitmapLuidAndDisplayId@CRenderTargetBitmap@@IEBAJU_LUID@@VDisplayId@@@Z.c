/*
 * XREFs of ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18008B048
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008B210 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008B370 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18008B510 (-GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v5; // edi
  signed int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a2;
  v3 = *(_QWORD *)(a1 + 152);
  v10 = 0;
  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v3 + 88LL))(v3, &v12, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1AFu);
  }
  else
  {
    v8 = v10;
    if ( v10 == DisplayId::All )
      v8 = DisplayId::None;
    v10 = v8;
    if ( __PAIR64__(HIDWORD(v11), v5) != v12 || v8 != DisplayId::None && v8 != a3 && a3 != DisplayId::All )
    {
      v7 = -2003304287;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x889800A1, 0x1BBu);
    }
  }
  return v7;
}
