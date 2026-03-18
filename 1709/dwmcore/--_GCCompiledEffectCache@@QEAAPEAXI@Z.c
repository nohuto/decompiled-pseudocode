/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180145644
 * Callers:
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18006FF14 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180084A40 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801455AC (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  CMILRefCountBase *v5; // rcx
  void *v6; // rcx

  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 3);
  if ( *(_QWORD *)this )
  {
    v2 = 0;
    if ( *((int *)this + 4) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *((_QWORD *)this + 1);
        v5 = *(CMILRefCountBase **)(v3 + v4);
        if ( v5 )
        {
          *(_QWORD *)(v3 + v4) = 0LL;
          CMILRefCountBase::Release(v5);
        }
        ++v2;
        v3 += 8LL;
      }
      while ( v2 < *((_DWORD *)this + 4) );
    }
    WPF::ProcessHeapImpl::Free(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
