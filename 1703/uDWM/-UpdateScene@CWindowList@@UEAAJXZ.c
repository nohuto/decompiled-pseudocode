/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002EFC0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180004A0C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800405E0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180022880 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_ @ 0x180085D64 (EtwppTemplate_.c)
 */

__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rbx
  char v3; // si
  CDesktopManager *v4; // rcx
  CDesktopManager *v5; // rbx
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rbp
  CDesktopManager *v10; // rcx
  PVOID i; // rbx
  struct CVisual *v12; // rdx
  struct CVisual *v13; // rdx
  struct CVisual *v14; // rdx
  struct CVisual *v15; // rdx
  __int64 v16; // rax
  struct CVisual *v17; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r14
  bool v23; // bl
  CDesktopManager *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  bool v27; // r14
  __int64 v28; // r14
  int v29; // eax
  CVisual *v30; // rcx
  int v31; // r15d
  void (*v32)(void); // rax
  PVOID v33; // rax
  CVisual *v34; // rsi
  void (__fastcall *v35)(CVisual *, double); // rax
  void *v36; // rcx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v38; // [rsp+30h] [rbp-88h]
  __int128 v39; // [rsp+40h] [rbp-78h]
  __int64 v40; // [rsp+50h] [rbp-68h]
  char v41; // [rsp+58h] [rbp-60h]
  PVOID RestartKey; // [rsp+D0h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = 1;
  if ( GetCurrentThreadId() == *((_DWORD *)v2 + 144) )
    goto LABEL_37;
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  v6 = 0;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v4 = (CDesktopManager *)*(unsigned int *)(v7 + 40);
  if ( !(_DWORD)v4 )
    goto LABEL_3;
  v19 = *(_QWORD *)(v7 + 16);
  v20 = *(unsigned int *)(v7 + 40);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v19 + 24LL) != 4 )
      ++v6;
    v19 += 8LL;
    --v20;
  }
  while ( v20 );
  if ( v6 <= 0 )
    goto LABEL_3;
  v21 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  if ( v21 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 116));
    v5 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v22 = *((_QWORD *)v5 + 20);
  if ( !v22 )
    goto LABEL_3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v23 = !*(_DWORD *)(v22 + 64) || !*(_BYTE *)(v22 + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( v23 )
    v3 = 0;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 116), 0xFFFFFFFF) == 1 )
  {
    *(_QWORD *)v22 = &CAnimationEngine::`vftable';
    DynArrayImpl<0>::~DynArrayImpl<0>(v22 + 72);
    DynArrayImpl<0>::~DynArrayImpl<0>(v22 + 40);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v22);
  }
  if ( v3 )
  {
LABEL_37:
    v5 = CDesktopManager::s_pDesktopManagerInstance;
LABEL_3:
    v8 = 0;
    v9 = *((_QWORD *)v5 + 23);
    for ( RestartKey = 0LL; v8 < *((_DWORD *)v5 + 174); ++v8 )
      CDesktopManager::UpdateSceneImpl(v4, *(struct CVisual **)(*((_QWORD *)v5 + 84) + 8LL * v8));
    for ( i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
          i;
          i = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey) )
    {
      v12 = (struct CVisual *)*((_QWORD *)i + 3);
      if ( v12 )
        CDesktopManager::UpdateSceneImpl(v10, v12);
      v13 = (struct CVisual *)*((_QWORD *)i + 5);
      if ( v13 )
        CDesktopManager::UpdateSceneImpl(v10, v13);
    }
    v14 = (struct CVisual *)*((_QWORD *)this + 63);
    if ( v14 && *((_QWORD *)v14 + 3) )
      CDesktopManager::UpdateSceneImpl(v10, v14);
    v15 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v15 && *((_QWORD *)v15 + 3) )
      CDesktopManager::UpdateSceneImpl(v10, v15);
    v16 = *((_QWORD *)this + 66);
    if ( v16 )
    {
      v17 = *(struct CVisual **)(v16 + 48);
      if ( v17 )
        CDesktopManager::UpdateSceneImpl(v10, v17);
    }
    if ( v9 && *(_QWORD *)(v9 + 8) )
    {
      v24 = CDesktopManager::s_pDesktopManagerInstance;
      v25 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
      if ( v25 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 116));
        v24 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v26 = *((_QWORD *)v24 + 20);
      if ( v26 )
      {
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v27 = !*(_DWORD *)(v26 + 64) || !*(_BYTE *)(v26 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v27 )
        {
          v28 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
          if ( v28 )
          {
            v10 = *(CDesktopManager **)(v28 + 8);
            if ( v10 )
            {
              v29 = CVisual::MoveToFront(v10, 0);
              v30 = *(CVisual **)(v28 + 8);
              v31 = v29;
              v32 = *(void (**)(void))(*(_QWORD *)v30 + 88LL);
              if ( (char *)v32 == (char *)CVisual::SetOpacity )
                CVisual::SetOpacity(v30, 1.0);
              else
                v32();
              if ( v31 >= 0 )
              {
                Buffer[0] = *(_QWORD *)(v28 + 96);
                v38 = 0LL;
                v39 = 0LL;
                Buffer[1] = 0LL;
                v40 = -1LL;
                v41 = 0;
                v33 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
                if ( v33 )
                {
                  v34 = (CVisual *)*((_QWORD *)v33 + 5);
                  if ( v34 )
                  {
                    CVisual::MoveToFront(*((CVisual **)v33 + 5), 0);
                    v35 = *(void (__fastcall **)(CVisual *, double))(*(_QWORD *)v34 + 88LL);
                    if ( v35 == CVisual::SetOpacity )
                      CVisual::SetOpacity(v34, 1.0);
                    else
                      ((void (__fastcall *)(CVisual *))v35)(v34);
                  }
                }
              }
            }
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 116), 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v26 = &CAnimationEngine::`vftable';
          DynArrayImpl<0>::~DynArrayImpl<0>(v26 + 72);
          DynArrayImpl<0>::~DynArrayImpl<0>(v26 + 40);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v26);
        }
      }
      CDesktopManager::UpdateSceneImpl(v10, *(struct CVisual **)(v9 + 8));
    }
    if ( dword_1800C0044
      && (unsigned __int8)(byte_1800C0048 - 1) > 2u
      && (qword_1800C0030 & 0x8000000000000001uLL) != 0
      && (qword_1800C0038 & 0x8000000000000001uLL) == qword_1800C0038 )
    {
      EtwppTemplate_(v10, &EtwTraceInfo_9007);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 32LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      *((_QWORD *)this + 72));
    if ( *((_QWORD *)this + 72) )
    {
      NtDCompositionCommitSynchronizationObject();
      ConfirmResizeCommit(*((_QWORD *)this + 73));
      v36 = (void *)*((_QWORD *)this + 72);
      *((_QWORD *)this + 73) = 0LL;
      CloseHandle(v36);
      *((_QWORD *)this + 72) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
