/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18000F0D0
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18000EFD8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800A5318 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18000F3CC (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18000F508 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800250C0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qdq @ 0x1800967B8 (McTemplateU0qdq.c)
 */

__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        struct IAnimatedVisual **a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rax
  int started; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edx
  CDesktopManager *v15; // rcx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-28h] BYREF
  CAnimationEngine::CTransitionVisualSet *v21; // [rsp+60h] [rbp+8h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  v21 = 0LL;
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          56LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 4) = 0;
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_WORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_DWORD *)v11 = v10;
    *(_DWORD *)(v11 + 12) = a2;
  }
  v21 = (CAnimationEngine::CTransitionVisualSet *)v11;
  if ( v11 )
  {
    started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
    if ( started < 0 )
    {
      v18 = 130;
    }
    else
    {
      v13 = *((_DWORD *)this + 16);
      v14 = v13 + 1;
      started = v13 + 1 < v13 ? 0x80070216 : 0;
      if ( v13 + 1 < v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xB5u);
      }
      else if ( v14 > *((_DWORD *)this + 15) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &v21);
        started = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v13) = v21;
        *((_DWORD *)this + 16) = v14;
      }
      if ( started < 0 )
      {
        v18 = 131;
      }
      else
      {
        v15 = CDesktopManager::s_pDesktopManagerInstance;
        *a5 = v10;
        started = CDesktopManager::PostStartAnimations(v15);
        if ( started >= 0 )
          goto LABEL_12;
        v18 = 135;
      }
    }
  }
  else
  {
    started = -2147024882;
    v18 = 128;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, v18);
  if ( v21 )
  {
    CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(v21, v19);
    v21 = 0LL;
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)started;
}
