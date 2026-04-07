/*
 * XREFs of ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x18009C928
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000681C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012174 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800123A4 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800170B0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180022830 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x18009C888 (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccentTransition::StartAnimation(
        CAccentTransition *this,
        const struct ACCENT_POLICY *a2,
        struct CAccent *a3)
{
  __int64 v6; // rdi
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // r15
  int v9; // r9d
  int v10; // ebx
  int started; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int128 v15; // xmm1
  struct tagRECT si128; // xmm6
  bool v17; // cf
  int v18; // eax
  unsigned int v20; // [rsp+28h] [rbp-39h]
  __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+40h] [rbp-21h] BYREF
  __int128 v23; // [rsp+48h] [rbp-19h] BYREF
  int v24; // [rsp+58h] [rbp-9h]
  int v25; // [rsp+5Ch] [rbp-5h]
  int v26; // [rsp+60h] [rbp-1h]
  struct tagRECT rc; // [rsp+68h] [rbp+7h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v6 = 0LL;
  *((_BYTE *)this + 32) = 1;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0LL;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  if ( !v7 )
  {
    v20 = 37;
LABEL_5:
    v9 = -2147024882;
    v10 = -2147024882;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, v20);
    goto LABEL_25;
  }
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v7, this);
  v10 = started;
  if ( started < 0 )
  {
    v20 = 38;
LABEL_23:
    v9 = started;
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  v6 = v12;
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 3);
    v14 = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v12 + 16) = 1;
    *(_QWORD *)v12 = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
    *(_QWORD *)(v12 + 8) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
    *(_DWORD *)(v12 + 32) = v14;
    *(_OWORD *)(v12 + 40) = *(_OWORD *)(v13 + 584);
    v15 = *(_OWORD *)(v13 + 584);
    *(_QWORD *)(v12 + 24) = v13;
    *(_OWORD *)(v12 + 56) = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v20 = 39;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 3) == 5 )
  {
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
    v17 = *(_BYTE *)(*((_QWORD *)this + 3) + 600LL) != 0;
    rc = si128;
    OffsetRect(&rc, (v17 ? 1 : -1) * (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 49) * 81.0), 0);
    *(struct tagRECT *)(v6 + 56) = rc;
    *(struct tagRECT *)(v6 + 40) = si128;
  }
  v21 = v6;
  v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v23, 8u, 1, &v21);
  v10 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xC0u);
  if ( v10 >= 0 )
  {
    started = CAnimationEngine::ScheduleStartAnimation(v8, 74, (__int64)&v23, (unsigned int *)this + 9);
    v10 = started;
    if ( started >= 0 )
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v10 = started;
      if ( started >= 0 )
        goto LABEL_26;
      v20 = 58;
    }
    else
    {
      v20 = 56;
    }
    goto LABEL_23;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x34u);
LABEL_25:
  CAccentTransition::CleanupAnimation(this);
LABEL_26:
  if ( v8 )
    CAnimationEngine::Release(v8);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v23);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)v10;
}
