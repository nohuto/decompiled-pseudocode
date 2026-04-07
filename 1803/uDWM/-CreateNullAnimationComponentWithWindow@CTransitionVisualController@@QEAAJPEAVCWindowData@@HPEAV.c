/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800022E4
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180001B84 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 * Callees:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000677C (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006A38 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180006ED8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008EA4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008F90 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  struct CAnimatedTransitionVisual *v5; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  struct CAnimatedTransitionVisual *v18; // rcx
  struct CTopLevelWindow *v19; // rcx
  struct CAnimationComponent **v20; // rax
  struct CAnimatedTransitionVisual *v21; // rcx
  struct CAnimatedTransitionVisual *v23; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v23 = 0LL;
  v10 = 4095;
  if ( a2 )
    v10 = *((_DWORD *)a2 + 150) & 0x400000 | 0xFFF;
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v11 )
  {
    if ( a2 )
      v12 = *((_QWORD *)a2 + 5);
    else
      v12 = 0LL;
    v13 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v11, v12, v10, a3, a4);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v14 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v14,
        0x6D6u);
    }
    else
    {
      v16 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v16,
          0x6D7u);
      }
      else
      {
        v17 = CAnimatedTransitionVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v23);
        v15 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v17,
            0x6D9u);
        }
        else
        {
          v18 = v23;
          *((_DWORD *)v23 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v18 + 185) = a3;
          if ( a2 )
          {
            v19 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 49);
            if ( v19 )
              CTransitionVisualController::_MoveWindowOffscreen(v19, 1);
          }
          v20 = a5;
          *a5 = (struct CAnimationComponent *)v13;
          _InterlockedIncrement(v13 + 2);
          v21 = v23;
          *((_QWORD *)*v20 + 5) = v23;
          _InterlockedIncrement((volatile signed __int32 *)v21 + 4);
        }
        v5 = v23;
      }
    }
    CBaseObject::Release((CBaseObject *)v13);
    if ( v5 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v5 + 8));
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x6D4u);
  }
  return v15;
}
