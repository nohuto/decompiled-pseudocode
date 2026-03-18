/*
 * XREFs of ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x18011C4EC
 * Callers:
 *     ?_Reallocate@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z @ 0x180070324 (-_Reallocate@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x1801D4A74 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, const struct CDrawListBitmap *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 1);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  return this;
}
