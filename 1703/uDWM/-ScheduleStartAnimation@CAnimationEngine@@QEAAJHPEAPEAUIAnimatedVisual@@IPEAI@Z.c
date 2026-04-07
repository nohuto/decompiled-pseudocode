/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180012498
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800123A4 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009ED48 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180012E10 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x180012F68 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180022830 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_qdq @ 0x180091AD8 (Template_qdq.c)
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
  int started; // eax
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  CDesktopManager *v17; // rcx
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // edx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+30h] [rbp-28h] BYREF
  CAnimationEngine::CTransitionVisualSet *v24; // [rsp+60h] [rbp+8h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = *((_DWORD *)this + 8);
  v24 = 0LL;
  *((_DWORD *)this + 8) = v10 + 1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qdq(v9, (unsigned int)&UdwmAnimationEngine_Animation_Start, v10, a2, 0);
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
  v24 = (CAnimationEngine::CTransitionVisualSet *)v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v22 = 127;
    goto LABEL_19;
  }
  started = CAnimationEngine::CTransitionVisualSet::Initialize((CAnimationEngine::CTransitionVisualSet *)v11, a3, a4);
  v13 = started;
  if ( started >= 0 )
  {
    v14 = *((unsigned int *)this + 16);
    v15 = (unsigned int)v24;
    v16 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v15 = v14 + 1;
    v13 = v16 < (unsigned int)v14 ? 0x80070216 : 0;
    if ( v16 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
    }
    else if ( v15 > *((_DWORD *)this + 15) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &v24);
      v13 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v14) = v24;
      *((_DWORD *)this + 16) = v15;
    }
    if ( v13 >= 0 )
    {
      v17 = CDesktopManager::s_pDesktopManagerInstance;
      *a5 = v10;
      started = CDesktopManager::PostStartAnimations(v17);
      v13 = started;
      if ( started >= 0 )
        goto LABEL_14;
      v22 = 134;
      goto LABEL_23;
    }
    v22 = 130;
LABEL_19:
    v20 = v13;
    goto LABEL_24;
  }
  v22 = 129;
LABEL_23:
  v20 = started;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v22);
  if ( v24 )
  {
    CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(v24, v21);
    v24 = 0LL;
  }
LABEL_14:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v13;
}
