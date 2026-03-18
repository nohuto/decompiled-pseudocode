/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180035038
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180037500 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x18016CE58 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z @ 0x18003576C (-RemoveAt@-$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r10
  struct CEffectCompilationTask *v9; // r8
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  char *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = (char *)this + 32;
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
        v9 = *(struct CEffectCompilationTask **)(v8 + 8 * v7);
        v10 = v7;
        if ( v9 == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v6 );
      v11 = v10 + 1;
      if ( v9 == a2 )
        v11 = v10;
      if ( (unsigned int)v11 < v6 )
      {
        if ( (unsigned int)v11 >= *((_DWORD *)this + 19) )
        {
          v12 = *((unsigned int *)this + 19);
          v13 = *(_QWORD *)(v8 + 8 * v11);
          *(_QWORD *)(v8 + 8 * v11) = *(_QWORD *)(v8 + 8 * v12);
          *(_QWORD *)(v8 + 8 * v12) = v13;
          v11 = (unsigned int)++*((_DWORD *)this + 19);
        }
        if ( a3 )
        {
          DynArray<CEffectCompilationTask *,0>::RemoveAt((char *)this + 80, v11);
          --*((_DWORD *)this + 19);
        }
        SetEvent(*((HANDLE *)this + 3));
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
}
