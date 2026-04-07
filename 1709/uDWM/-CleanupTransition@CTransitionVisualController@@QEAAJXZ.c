/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180006070 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000D8BC (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x18006DD70 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x18008F230 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800054EC (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180005E88 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009498 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BAA4 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18002D7BC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18002DFB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030830 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18008F4E0 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject ***v7; // rdi
  struct CTopLevelWindow *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  __int64 v12; // rdi
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
      McTemplateU0d(v14, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
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
    v7 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v8 = **v7;
      if ( v8 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v8, 0);
        v9 = **v7;
        if ( v9 )
          CBaseObject::Release(v9);
      }
      v10 = (*v7)[1];
      if ( v10 )
        CBaseObject::Release(v10);
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
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
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
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), (struct CVisual *)(v25 + 8));
        CBaseObject::Release((CBaseObject *)v22);
        v26 = *((_DWORD *)this + 34);
        if ( v26 - 1 < v26 )
          --*((_DWORD *)this + 34);
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), *((struct CVisual **)this + 2));
      v11 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v11 )
      {
        CBaseObject::Release(v11);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v12 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v12 >= 0 )
    {
      v27 = 24LL * (int)v12;
      do
      {
        v28 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v27 + v28 + 16) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v28 + 24 * v12));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v12);
        }
        v27 -= 24LL;
        v12 = (unsigned int)(v12 - 1);
      }
      while ( (int)v12 >= 0 );
    }
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 18) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
