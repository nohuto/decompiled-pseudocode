/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007A250
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B5380 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180079BA0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007AA90 (-GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(
        CDxHandleBitmapRealization *this,
        struct _LUID *a2,
        struct ID3D11ShaderResourceView **a3)
{
  CD2DBitmapCache *v3; // rdi
  __int64 (__fastcall *v6)(CDxHandleBitmapRealization *); // rax
  CDxHandleBitmapRealization *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int BitmapInternalNoRef; // eax
  __int64 (__fastcall *v11)(CD2DBitmap *__hidden, struct ID3D11ShaderResourceView **); // rax
  int ShaderResourceViewNoRef; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  CD2DBitmap *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = (CDxHandleBitmapRealization *)((char *)this - 104);
  *a3 = 0LL;
  v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*((_QWORD *)this - 13) + 104LL);
  v7 = (CDxHandleBitmapRealization *)((char *)this - 104);
  if ( v6 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v8 = CDxHandleBitmapRealization::EnsureD2DBitmap(v7);
  else
    v8 = v6(v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 203;
    goto LABEL_14;
  }
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v3, *a2, 0LL, (__int64)&v15);
  v9 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0xD1u);
    return v9;
  }
  v11 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden, struct ID3D11ShaderResourceView **))(*(_QWORD *)v15 + 80LL);
  if ( v11 == CD2DBitmap::GetShaderResourceViewNoRef )
    ShaderResourceViewNoRef = CD2DBitmap::GetShaderResourceViewNoRef(v15, a3);
  else
    ShaderResourceViewNoRef = v11(v15, a3);
  v9 = ShaderResourceViewNoRef;
  if ( ShaderResourceViewNoRef < 0 )
  {
    v14 = 213;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v14);
  }
  return v9;
}
