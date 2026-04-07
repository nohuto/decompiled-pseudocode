/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180027F90
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180003B9C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003DF00 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180017540 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002770C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_ @ 0x18007D144 (EtwppTemplate_.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rbx
  CDesktopManager *v3; // rcx
  CDesktopManager *v4; // rbx
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  CDesktopManager *v9; // rcx
  PVOID i; // rbx
  struct CVisual *v11; // rdx
  struct CVisual *v12; // rdx
  struct CVisual *v13; // rdx
  struct CVisual *v14; // rdx
  __int64 v15; // rax
  struct CVisual *v16; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  bool v22; // bl
  CDesktopManager *v23; // rcx
  void *v24; // rcx
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() == *((_DWORD *)v2 + 156) )
    goto LABEL_36;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = 0;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  v3 = (CDesktopManager *)*(unsigned int *)(v6 + 40);
  if ( !(_DWORD)v3 )
    goto LABEL_3;
  v18 = *(_QWORD *)(v6 + 16);
  v19 = *(unsigned int *)(v6 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v18 + 24LL) != 4 )
      ++v5;
    v18 += 8LL;
    --v19;
  }
  while ( v19 );
  if ( v5 <= 0 )
    goto LABEL_3;
  v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 116));
    v4 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v21 = *((_QWORD *)v4 + 24);
  if ( !v21 )
    goto LABEL_3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v22 = !*(_DWORD *)(v21 + 64) || !*(_BYTE *)(v21 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v21 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>(v21 + 72);
    DynArrayImpl<0>::~DynArrayImpl<0>(v21 + 40);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v21);
  }
  if ( !v22 )
  {
LABEL_36:
    v4 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_3:
    v7 = 0LL;
    v8 = *((_QWORD *)v4 + 29);
    for ( RestartKey = 0LL; (unsigned int)v7 < *((_DWORD *)v4 + 186); v7 = (unsigned int)(v7 + 1) )
      CDesktopManager::UpdateSceneImpl(v3, *(struct CVisual **)(*((_QWORD *)v4 + 90) + 8 * v7));
    for ( i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
          i;
          i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey) )
    {
      v11 = (struct CVisual *)*((_QWORD *)i + 3);
      if ( v11 )
        CDesktopManager::UpdateSceneImpl(v9, v11);
      v12 = (struct CVisual *)*((_QWORD *)i + 5);
      if ( v12 )
        CDesktopManager::UpdateSceneImpl(v9, v12);
    }
    v13 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v13 && *((_QWORD *)v13 + 3) )
      CDesktopManager::UpdateSceneImpl(v9, v13);
    v14 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v14 && *((_QWORD *)v14 + 3) )
      CDesktopManager::UpdateSceneImpl(v9, v14);
    v15 = *((_QWORD *)this + 66);
    if ( v15 )
    {
      v16 = *(struct CVisual **)(v15 + 48);
      if ( v16 )
        CDesktopManager::UpdateSceneImpl(v9, v16);
    }
    if ( v8 && *(_QWORD *)(v8 + 8) )
    {
      CWindowList::MoveTransitionAndTouchVisualToFront(this);
      CDesktopManager::UpdateSceneImpl(v23, *(struct CVisual **)(v8 + 8));
    }
    if ( dword_1800BE044
      && (unsigned __int8)(byte_1800BE048 - 1) > 2u
      && (qword_1800BE030 & 0x8000000000000001uLL) != 0
      && (qword_1800BE038 & 0x8000000000000001uLL) == qword_1800BE038 )
    {
      EtwppTemplate_(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &EtwTraceInfo_9007);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 32LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      *((_QWORD *)this + 72));
    if ( *((_QWORD *)this + 72) )
    {
      NtDCompositionCommitSynchronizationObject();
      ConfirmResizeCommit(*((_QWORD *)this + 73));
      v24 = (void *)*((_QWORD *)this + 72);
      *((_QWORD *)this + 73) = 0LL;
      CloseHandle(v24);
      *((_QWORD *)this + 72) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
