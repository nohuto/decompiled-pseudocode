/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180083B94
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180084A40 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801456D0 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z @ 0x180084498 (-RemoveAt@-$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 72) )
  {
    v6 = *((_DWORD *)this + 26);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *((_QWORD *)this + 10);
      do
      {
        if ( *(struct CEffectCompilationTask **)(v8 + 8 * v7) == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v6 );
      if ( (unsigned int)v7 < v6 )
      {
        if ( (unsigned int)v7 >= *((_DWORD *)this + 19) )
        {
          v9 = *((unsigned int *)this + 19);
          v10 = (unsigned int)v7;
          v11 = *(_QWORD *)(v8 + 8 * v7);
          *(_QWORD *)(v8 + 8 * v10) = *(_QWORD *)(v8 + 8 * v9);
          *(_QWORD *)(v8 + 8 * v9) = v11;
          v7 = (unsigned int)++*((_DWORD *)this + 19);
        }
        if ( a3 )
        {
          DynArray<CEffectCompilationTask *,0>::RemoveAt((char *)this + 80, v7);
          --*((_DWORD *)this + 19);
        }
        SetEvent(*((HANDLE *)this + 3));
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
}
