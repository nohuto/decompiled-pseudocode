/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18016CDC4
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180037500 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18008EA84 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x18016CD2C (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  void *v2; // rcx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  CMILRefCountBase *v6; // rcx
  void *v7; // rcx

  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 3);
  v2 = *(void **)this;
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
      v2 = *(void **)this;
    }
    operator delete(v2);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  operator delete(this);
  return this;
}
