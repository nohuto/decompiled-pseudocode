/*
 * XREFs of ?RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z @ 0x180024FB0
 * Callers:
 *     _lambda_c35d5355421e51b91e1b7dc40faf7951_::operator() @ 0x18001DBC0 (_lambda_c35d5355421e51b91e1b7dc40faf7951_--operator().c)
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18002CB00 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x18001C310 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18002AC30 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RefreshEnterpriseId(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rsi
  CWinRTApplicationView *v5; // rcx
  __int64 (__fastcall *v6)(CWinRTApplicationView *); // rax
  int refreshed; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v5 = (CWinRTApplicationView *)&this[-3];
  if ( a2 )
    *((_BYTE *)v5 + 56) = 1;
  v6 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v5 + 440LL);
  if ( v6 == CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded )
  {
    refreshed = CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded(v5);
  }
  else if ( v6 == CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded )
  {
    refreshed = CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded(v5);
  }
  else
  {
    refreshed = v6(v5);
  }
  v8 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)refreshed,
      -2);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)v8,
      v10);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v8;
}
