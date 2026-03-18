/*
 * XREFs of ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180006190
 * Callers:
 *     <none>
 * Callees:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x18000518C (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180152BC4 (--1CEffectCompilationTask@@QEAA@XZ.c)
 */

__int64 __fastcall CEffectCompilationTask::Release(CEffectCompilationTask *this)
{
  unsigned __int32 v2; // edi
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // ett

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 24);
  if ( !v2 )
  {
    if ( CEffectCompilationService::TryAddDeadTask(*((CEffectCompilationService **)this + 1), this) )
    {
      _m_prefetchw((char *)this + 96);
      v4 = *((_DWORD *)this + 24);
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)this + 24, v4, v4);
      }
      while ( v5 != v4 );
      return v4;
    }
    else
    {
      CEffectCompilationTask::~CEffectCompilationTask(this);
      WPF::ProcessHeapImpl::Free(this);
    }
  }
  return v2;
}
