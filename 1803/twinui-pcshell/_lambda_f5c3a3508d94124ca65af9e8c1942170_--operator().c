/*
 * XREFs of _lambda_f5c3a3508d94124ca65af9e8c1942170_::operator() @ 0x180136824
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a___::Run @ 0x180137200 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800F67B4 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800F9724 (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 *     WPP_SF_qd @ 0x180112400 (WPP_SF_qd.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801370B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CAX_N.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x180137E00 (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f5c3a3508d94124ca65af9e8c1942170_::operator()(struct CFrameApplicationPresentation **a1)
{
  struct CFrameApplicationPresentation *v2; // rbx
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-78h]
  _BYTE v5[80]; // [rsp+40h] [rbp-58h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1[1] + 15) + 48LL))(*((_QWORD *)a1[1] + 15), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::ReportUsageToService();
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***((_QWORD ***)a1[1] + 13) + 208LL))(
    **((_QWORD **)a1[1] + 13),
    *((_QWORD *)a1[1] + 16),
    0LL);
  CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
    (struct CFrameApplicationPresentation *)((char *)a1[1] + 64),
    a1[1],
    0LL,
    **((_QWORD **)a1[1] + 14));
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v2 = a1[1];
    v3 = (*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
    v4 = *((_DWORD *)v2 + 12);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids, v3, v4);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*((HWND *)a1[1] + 16), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible(a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
}
