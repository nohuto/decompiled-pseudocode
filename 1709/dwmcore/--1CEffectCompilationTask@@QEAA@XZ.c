/*
 * XREFs of ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801455AC
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180084970 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x1801321B8 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_1801321B8.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180145644 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801456D0 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(void **this)
{
  __int64 *v2; // rbx
  unsigned int v3; // edx
  OLECHAR *v4; // rcx
  CCompiledEffectCache *v5; // rcx
  void *v6; // rcx
  int v7; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+28h] [rbp-10h]

  *this = &CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread((CEffectCompilationTask *)this);
  v2 = (__int64 *)this[1];
  v8 = this[6];
  v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 128LL))(v8);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
    v2 + 14,
    &v7);
  v4 = (OLECHAR *)this[10];
  if ( v4 )
    SysFreeString(v4);
  v5 = (CCompiledEffectCache *)this[9];
  if ( v5 )
    CCompiledEffectCache::`scalar deleting destructor'(v5, v3);
  v6 = this[6];
  if ( v6 )
  {
    this[6] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
}
