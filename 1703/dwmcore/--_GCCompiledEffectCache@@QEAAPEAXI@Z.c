/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180152C58
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180006090 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18001A19C (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180152BC4 (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  CMILRefCountBase *v6; // rcx
  void *v7; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *((int *)this + 4) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        v6 = *(CMILRefCountBase **)(v4 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CMILRefCountBase::Release(v6);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)this + 4) );
    }
    WPF::ProcessHeapImpl::Free(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
