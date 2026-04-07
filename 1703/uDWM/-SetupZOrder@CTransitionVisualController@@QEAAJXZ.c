/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180008AD4
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180004A0C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180005D7C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800089A8 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009C80 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x18000AA5C (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800132A4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x18009CCF0 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // ebx
  int v5; // ecx
  int j; // esi
  unsigned int v7; // ecx
  char v8; // r9
  unsigned int k; // esi
  __int64 v10; // rbp
  int v11; // eax
  CTransitionVisualController *v12; // rcx
  int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r12
  CAnimationComponent *v24; // r15
  __int64 v25; // r14
  int WindowZOrder; // ebx

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v2, 0x714u);
    goto LABEL_36;
  }
  for ( i = 0; i < *((_DWORD *)this + 34); ++i )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * i));
  }
  v5 = *((_DWORD *)this + 34);
  for ( j = 0; j < v5 - 1; ++j )
  {
    LODWORD(v21) = 0;
    if ( v5 - j - 1 > 0 )
    {
      do
      {
        v22 = *((_QWORD *)this + 14);
        v23 = (unsigned int)v21;
        v21 = (unsigned int)(v21 + 1);
        v24 = *(CAnimationComponent **)(v22 + 8 * v23);
        v25 = *(_QWORD *)(v22 + 8 * v21);
        if ( !*((_BYTE *)v24 + 65) && !*(_BYTE *)(v25 + 65) )
        {
          WindowZOrder = CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(v22 + 8 * v21));
          if ( (int)CAnimationComponent::GetWindowZOrder(v24) > WindowZOrder )
          {
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v21) = v24;
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v23) = v25;
          }
        }
      }
      while ( (int)v21 < *((_DWORD *)this + 34) - j - 1 );
    }
    v5 = *((_DWORD *)this + 34);
  }
  v7 = *((_DWORD *)this + 34);
  v8 = 1;
  while ( v7 > 1 && v8 )
  {
    v8 = 0;
    v15 = 8LL;
    v16 = v7 - 1;
    v17 = 0LL;
    do
    {
      v18 = *((_QWORD *)this + 14);
      v19 = *(_QWORD *)(v17 + v18);
      v20 = *(_QWORD *)(v15 + v18);
      if ( !*(_BYTE *)(v19 + 65)
        && !*(_BYTE *)(v20 + 65)
        && *(_QWORD *)(v19 + 128) == *(_QWORD *)(v20 + 128)
        && *(_DWORD *)(v19 + 56) > *(_DWORD *)(v20 + 56) )
      {
        *(_QWORD *)(v17 + v18) = v20;
        v8 = 1;
        *(_QWORD *)(v15 + *((_QWORD *)this + 14)) = v19;
      }
      v17 += 8LL;
      v15 += 8LL;
      --v16;
    }
    while ( v16 );
    --v7;
  }
  for ( k = 0; k < *((_DWORD *)this + 34); ++k )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * k);
    if ( !*(_BYTE *)(v10 + 65) )
    {
      v11 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v10 + 40) + 8LL), 0);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v11, 0x74Au);
        goto LABEL_36;
      }
      CTransitionVisualController::_UpdateClipping(v12, (struct CAnimationComponent *)v10);
    }
  }
  v13 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  v3 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v13, 0x752u);
LABEL_36:
    CTransitionVisualController::CleanupTransition(this);
  }
  return v3;
}
