/*
 * XREFs of ?RemoveRenderTargetMapEntry@CWindowBackgroundTreatment@@QEAAXPEAVIRenderTarget@@@Z @ 0x18000BB8C
 * Callers:
 *     ??1CBaseRenderTarget@@MEAA@XZ @ 0x1800C29C8 (--1CBaseRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAVIRenderTarget@@$$V@?$unordered_map@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@6@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVIRenderTarget@@@Z @ 0x18000C410 (--$_Try_emplace@AEBQEAVIRenderTarget@@$$V@-$unordered_map@PEAVIRenderTarget@@V-$ComPtr@VCRenderT.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@_K@Z @ 0x18000C63C (-_End@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micro.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@V?$_Uhash_compare@PEAVIRenderTarget@@U?$hash@PEAVIRenderTarget@@@std@@U?$equal_to@PEAVIRenderTarget@@@3@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA_KAEBQEAVIRenderTarget@@@Z @ 0x18000C794 (-erase@-$_Hash@V-$_Umap_traits@PEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Micr.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::RemoveRenderTargetMapEntry(
        CWindowBackgroundTreatment *this,
        struct IRenderTarget *a2)
{
  char *v2; // rbx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp+8h] BYREF
  struct IRenderTarget *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 72;
  v4 = *((_QWORD *)this + 15) & std::_Hash_bytes((const unsigned __int8 *)&v10, 8uLL);
  while ( 1 )
  {
    v5 = (_QWORD *)std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::_End(
                     v2,
                     &v9,
                     v4);
    if ( v6 == *v5 )
      break;
    if ( *(_QWORD *)(v6 + 16) == v7 )
      goto LABEL_4;
  }
  v6 = *((_QWORD *)v2 + 1);
LABEL_4:
  if ( v6 != *((_QWORD *)this + 10) )
  {
    std::unordered_map<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>::_Try_emplace<IRenderTarget * const &,>(
      v2,
      v8,
      &v10);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)(v8[0] + 24LL) + 96LL) + 32LL))(
      *(_QWORD *)(v8[0] + 24LL) + 96LL,
      (char *)this + 56);
    std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::erase(
      v2,
      &v10);
  }
}
