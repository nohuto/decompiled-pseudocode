/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800132A4
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180008AD4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18001050C (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180078310 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x180093080 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800079B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180007EC4 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800088D0 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000D9E8 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800170B0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180041F98 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180093324 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  CBaseObject *v2; // rcx
  __int64 v3; // rdi
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject ***v9; // rdi
  struct CTopLevelWindow *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CAnimationEngine *v13; // rax
  __int64 v14; // rcx
  CAnimationEngine *v15; // rdi
  _QWORD *v16; // rsi
  unsigned int v17; // edi
  __int64 v18; // rbp
  CBaseObject *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rdi
  struct CVisual *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdx
  struct CWindowData *v29; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v13 = CDesktopManager::AcquireAnimationEngine();
    v15 = v13;
    if ( v13 )
    {
      CAnimationEngine::ScheduleStopAnimation(v13, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v15);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_q(v14, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  if ( *((_DWORD *)this + 44) )
  {
    v16 = (_QWORD *)((char *)this + 152);
    do
    {
      v17 = *((_DWORD *)this + 44) - 1;
      v18 = 56LL * v17;
      v19 = *(CBaseObject **)(*v16 + v18 + 48);
      if ( v19 )
      {
        CBaseObject::Release(v19);
        *(_QWORD *)(*v16 + v18 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v17);
    }
    while ( *((_DWORD *)this + 44) );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v9 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v10 = **v9;
      if ( v10 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v10, 0);
        v11 = **v9;
        if ( v11 )
          CBaseObject::Release(v11);
      }
      v12 = (*v9)[1];
      if ( v12 )
        CBaseObject::Release(v12);
      DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, 0);
    }
    while ( *((_DWORD *)this + 12) );
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      while ( *((_DWORD *)this + 34) )
      {
        v20 = *((_QWORD *)this + 14);
        v21 = *((_DWORD *)this + 34) - 1;
        v29 = 0LL;
        v22 = *(_QWORD *)(v20 + 8LL * v21);
        if ( (int)CWindowList::GetSyncedWindowDataByHwnd(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                    *(HWND *)(v22 + 16),
                    &v29) >= 0
          && v29 )
        {
          CTransitionVisualController::RestoreWindow(this, v29, 1);
        }
        v23 = *(struct CVisual **)(v22 + 32);
        if ( v23 )
        {
          v24 = *((_QWORD *)v23 + 3);
          if ( v24 )
            VisualCollection::Remove((VisualCollection *)(v24 + 32), v23);
        }
        v25 = *(_QWORD *)(v22 + 40);
        if ( v25 )
          VisualCollection::Remove(
            (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
            (struct CVisual *)((v25 + 8) & -(__int64)(v25 != 0)));
        CBaseObject::Release((CBaseObject *)v22);
        v26 = *((_DWORD *)this + 34);
        if ( v26 - 1 < v26 )
          --*((_DWORD *)this + 34);
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), *((struct CVisual **)this + 2));
      v2 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v2 )
      {
        CBaseObject::Release(v2);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v3 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v3 >= 0 )
    {
      v27 = 24LL * (int)v3;
      do
      {
        v28 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v27 + v28 + 16) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v28 + 24 * v3));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v3);
        }
        v27 -= 24LL;
        v3 = (unsigned int)(v3 - 1);
      }
      while ( (int)v3 >= 0 );
    }
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 18) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
