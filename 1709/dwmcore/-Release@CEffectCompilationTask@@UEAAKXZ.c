/*
 * XREFs of ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180084970
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x180083AC8 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801455AC (--1CEffectCompilationTask@@QEAA@XZ.c)
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
