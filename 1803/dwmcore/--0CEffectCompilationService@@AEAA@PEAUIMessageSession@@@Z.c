/*
 * XREFs of ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x180035444
 * Callers:
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C9B1C (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C4184 (-_Init@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800C42DC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::CEffectCompilationService(
        CEffectCompilationService *this,
        struct IMessageSession *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = std::_List_alloc<std::_List_base_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>::_Buynode0(
                             v4,
                             0LL,
                             0LL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 28) = 1065353216;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Init(
    (char *)this + 112,
    8LL);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v5 = (_OWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 16LL);
  *((_QWORD *)this + 22) = v5;
  *v5 = 0LL;
  **((_QWORD **)this + 22) = (char *)this + 176;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
