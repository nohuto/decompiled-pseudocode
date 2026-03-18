/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180005260
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180006090 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180152CF4 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x180005B8C (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  unsigned int v6; // ecx
  __int64 i; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  char *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 72) )
  {
    v6 = *((_DWORD *)this + 26);
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      if ( *(struct CEffectCompilationTask **)(*((_QWORD *)this + 10) + 8 * i) == a2 )
        break;
    }
    if ( (unsigned int)i < v6 )
    {
      if ( (unsigned int)i >= *((_DWORD *)this + 19) )
      {
        v8 = *((_QWORD *)this + 10);
        v9 = *((unsigned int *)this + 19);
        v10 = *(_QWORD *)(v8 + 8 * i);
        *(_QWORD *)(v8 + 8 * i) = *(_QWORD *)(v8 + 8 * v9);
        *(_QWORD *)(v8 + 8 * v9) = v10;
        i = (unsigned int)++*((_DWORD *)this + 19);
      }
      if ( a3 )
      {
        DynArray<CCursorVisual *,0>::RemoveAt((char *)this + 80, i);
        --*((_DWORD *)this + 19);
      }
      SetEvent(*((HANDLE *)this + 3));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
}
