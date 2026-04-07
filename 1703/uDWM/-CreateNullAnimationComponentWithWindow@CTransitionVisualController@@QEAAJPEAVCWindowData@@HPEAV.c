/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180008CB8
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180005868 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 * Callees:
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009B94 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009C80 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000A924 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, 0x6E2u);
    }
    else
    {
      v16 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v16, 0x6E3u);
      }
      else
      {
        v17 = CAnimatedTransitionVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v23);
        v15 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v17, 0x6E5u);
        }
        else
        {
          v18 = v23;
          *((_DWORD *)v23 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v18 + 185) = a3;
          if ( a2 )
          {
            v19 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 50);
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
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x6E0u);
  }
  return v15;
}
