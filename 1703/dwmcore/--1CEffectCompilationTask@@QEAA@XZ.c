/*
 * XREFs of ??1CEffectCompilationTask@@QEAA@XZ @ 0x180152BC4
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180006190 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180145824 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180145824.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180152C58 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180152CF4 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(CEffectCompilationTask *this)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  CCompiledEffectCache *v4; // rcx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread(this);
  SysFreeString(*((BSTR *)this + 10));
  v2 = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 6);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 128LL))(v7);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
    (__int64 *)(v2 + 112),
    &v6);
  v4 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
  if ( v4 )
    CCompiledEffectCache::`scalar deleting destructor'(v4, v3);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
}
