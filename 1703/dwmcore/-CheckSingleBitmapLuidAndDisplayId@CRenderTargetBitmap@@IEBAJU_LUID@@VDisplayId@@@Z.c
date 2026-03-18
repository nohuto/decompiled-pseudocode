/*
 * XREFs of ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18001650C
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180016590 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11S.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180046E80 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180046FB0 (-GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // esi
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  v3 = *(_QWORD *)(a1 + 120);
  v9 = 0;
  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, &v11, &v9, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x20Fu);
  }
  else if ( __PAIR64__(HIDWORD(v10), v5) != v11 || v9 != a3 && v9 != DisplayId::None && a3 != DisplayId::All )
  {
    v7 = -2003304287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304287, 0x214u);
  }
  return v7;
}
