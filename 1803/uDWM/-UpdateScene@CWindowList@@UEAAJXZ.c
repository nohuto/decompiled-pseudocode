/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800273D0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000B994 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003C5B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180025110 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002DB70 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A84A0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rbx
  CDesktopManager *v3; // rcx
  CDesktopManager *v4; // rbx
  int v5; // edx
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rbp
  CDesktopManager *v9; // rcx
  PVOID i; // rbx
  struct CVisual *v11; // rdx
  struct CVisual *v12; // rdx
  struct CVisual *v13; // rdx
  struct CVisual *v14; // rdx
  __int64 v15; // rax
  struct CVisual *v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(CProjectionBorderManager *__hidden); // rax
  _QWORD *v19; // rax
  CDesktopManager *v20; // rcx
  __int64 v21; // rax
  CAnimationClockCoordinator *v22; // rsi
  __int64 v23; // rcx
  HANDLE v24; // rdx
  HANDLE v25; // rcx
  char *v26; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rsi
  bool v32; // bl
  CDesktopManager *v33; // rcx
  __int64 v34; // rcx
  CSecondaryWindowRepresentation *v35; // rcx
  int v36; // eax
  unsigned int v37; // esi
  DWORD CurrentProcessId; // eax
  void *v39; // rcx
  int v40[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PVOID RestartKey; // [rsp+68h] [rbp+10h] BYREF
  HANDLE hObject; // [rsp+70h] [rbp+18h] BYREF
  PVOID v44; // [rsp+78h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() == *((_DWORD *)v2 + 154) )
    goto LABEL_46;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = 0;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  v3 = (CDesktopManager *)*(unsigned int *)(v6 + 40);
  if ( !(_DWORD)v3 )
    goto LABEL_3;
  v28 = *(_QWORD *)(v6 + 16);
  v29 = *(unsigned int *)(v6 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v28 + 24LL) != 4 )
      ++v5;
    v28 += 8LL;
    --v29;
  }
  while ( v29 );
  if ( v5 <= 0 )
    goto LABEL_3;
  v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 116));
    v4 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v31 = *((_QWORD *)v4 + 24);
  if ( !v31 )
  {
LABEL_3:
    v7 = 0;
    v8 = *((_QWORD *)v4 + 29);
    for ( RestartKey = 0LL; v7 < *((_DWORD *)v4 + 184); ++v7 )
      CDesktopManager::UpdateSceneImpl(v3, *(struct CVisual **)(*((_QWORD *)v4 + 89) + 8LL * v7));
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
      CDesktopManager::UpdateSceneImpl(v33, *(struct CVisual **)(v8 + 8));
    }
    v17 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
    v18 = *(__int64 (__fastcall **)(CProjectionBorderManager *__hidden))(*(_QWORD *)v17 + 88LL);
    if ( v18 == CProjectionBorderManager::UpdateScene )
    {
      *(_QWORD *)v40 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v44 = 0LL;
      v19 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v17 + 440), &v44);
      if ( v19 )
      {
        while ( 1 )
        {
          v34 = v19[3];
          if ( v34 )
          {
            v35 = *(CSecondaryWindowRepresentation **)(v34 + 24);
            if ( *((_QWORD *)v35 + 6) )
            {
              v36 = CSecondaryWindowRepresentation::Validate(v35);
              v37 = v36;
              if ( v36 < 0 )
                break;
            }
          }
          v19 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v17 + 440), &v44);
          if ( !v19 )
            goto LABEL_20;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x435,
          (unsigned int)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v36,
          v40[0]);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x234,
          (unsigned int)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)v37,
          v40[0]);
        CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v40);
      }
      else
      {
LABEL_20:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
    }
    else
    {
      v18(*((CProjectionBorderManager **)CDesktopManager::s_pDesktopManagerInstance + 60));
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &CommitChannel_UpdateScene);
    v20 = CDesktopManager::s_pDesktopManagerInstance;
    v21 = *((_QWORD *)this + 74) - *(_QWORD *)&GUID_NULL.Data1;
    hObject = 0LL;
    v22 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
    if ( !v21 )
      v21 = *((_QWORD *)this + 75) - *(_QWORD *)GUID_NULL.Data4;
    if ( v21 )
    {
      CurrentProcessId = GetCurrentProcessId();
      if ( (int)CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                  v22,
                  (const struct _GUID *)this + 37,
                  CurrentProcessId,
                  &hObject) >= 0 )
      {
        v24 = hObject;
        v23 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
        goto LABEL_27;
      }
      v20 = CDesktopManager::s_pDesktopManagerInstance;
    }
    v23 = *((_QWORD *)v20 + 4);
    v24 = (HANDLE)*((_QWORD *)this + 72);
LABEL_27:
    (*(void (__fastcall **)(__int64, HANDLE))(*(_QWORD *)v23 + 32LL))(v23, v24);
    if ( *((_QWORD *)this + 72) )
    {
      NtDCompositionCommitSynchronizationObject();
      ConfirmResizeCommit(*((_QWORD *)this + 73));
      v39 = (void *)*((_QWORD *)this + 72);
      *((_QWORD *)this + 73) = 0LL;
      CloseHandle(v39);
      *((_QWORD *)this + 72) = 0LL;
    }
    v25 = hObject;
    v26 = (char *)hObject - 1;
    *((GUID *)this + 37) = GUID_NULL;
    if ( (unsigned __int64)v26 <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v25);
    goto LABEL_31;
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v32 = !*(_DWORD *)(v31 + 64) || !*(_BYTE *)(v31 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v31 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>(v31 + 72);
    DynArrayImpl<0>::~DynArrayImpl<0>(v31 + 40);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v31);
  }
  if ( !v32 )
  {
LABEL_46:
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    goto LABEL_3;
  }
LABEL_31:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
