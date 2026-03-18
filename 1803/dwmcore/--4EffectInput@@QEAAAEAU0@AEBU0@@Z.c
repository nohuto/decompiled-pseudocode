/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18008F6E8
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18008DC58 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180089E50 (-InternalAddRef@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall EffectInput::operator=(__int64 a1, __int64 a2)
{
  CRenderTargetImageSource *v2; // rsi
  __int64 v5; // rsi
  __int64 result; // rax
  CRenderTargetImageSource *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(CRenderTargetImageSource **)a2;
  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
  {
    v7 = *(CRenderTargetImageSource **)a2;
    Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(&v7);
    v7 = *(CRenderTargetImageSource **)a1;
    *(_QWORD *)a1 = v2;
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v7);
  }
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 8) != v5 )
  {
    v7 = *(CRenderTargetImageSource **)(a2 + 8);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v7);
    v7 = *(CRenderTargetImageSource **)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v5;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v7);
  }
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a2 + 45);
  result = a1;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  return result;
}
