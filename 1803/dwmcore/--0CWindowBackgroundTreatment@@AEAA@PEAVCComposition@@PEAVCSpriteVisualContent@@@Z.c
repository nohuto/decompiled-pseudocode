/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800B9014
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180050D58 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800B8DC4 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B9208 (-_Init@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micr.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800B94E0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTarget.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CSpriteVisualContent *a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  CPtrArrayBase *v6; // rcx
  unsigned __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 2) = a2;
  v3 = (_QWORD *)((char *)this + 64);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = a3;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 8);
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_List_alloc<std::_List_base_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>::_Buynode0(
                             v5,
                             0LL,
                             0LL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 18) = 1065353216;
  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::_Init(
    (char *)this + 72,
    8LL);
  *((_QWORD *)this + 17) = 0LL;
  *((_OWORD *)this + 9) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 20) = qword_1802D5678;
  *(_OWORD *)((char *)this + 168) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 23) = qword_1802D5678;
  *((_OWORD *)this + 12) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 26) = qword_1802D5678;
  *((_WORD *)this + 140) = 32085;
  *(_OWORD *)((char *)this + 216) = _xmm;
  *(_OWORD *)((char *)this + 232) = _xmm;
  *(_OWORD *)((char *)this + 248) = _xmm;
  *(_OWORD *)((char *)this + 264) = _xmm;
  *((_DWORD *)this + 71) = 0;
  *((_WORD *)this + 176) = 32085;
  *((_OWORD *)this + 18) = _xmm;
  *((_OWORD *)this + 19) = _xmm;
  *((_OWORD *)this + 20) = _xmm;
  *((_OWORD *)this + 21) = _xmm;
  *((_WORD *)this + 178) = 256;
  *((_BYTE *)this + 358) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  v6 = (CPtrArrayBase *)(*v3 + 24LL);
  if ( (*(_QWORD *)v6 & 2) != 0 )
    v7 = *(_QWORD *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v7 = *(_QWORD *)v6 & 1LL;
  v8 = CPtrArrayBase::InsertAt(v6, (unsigned __int64)this, v7);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
  CWindowBackgroundTreatment::UpdateBackdropFlags((CSpriteVisualContent **)this, v9);
  return this;
}
