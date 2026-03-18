/*
 * XREFs of ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180085C90
 * Callers:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ @ 0x18006BE74 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180084A40 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::CCompiledEffectCache(
        CCompiledEffectCache *this,
        struct Windows::UI::Composition::ICompiledEffect *a2,
        void *a3)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Windows::UI::Composition::ICompiledEffect *))a2)(a2);
  *((_QWORD *)this + 4) = a3;
  return this;
}
