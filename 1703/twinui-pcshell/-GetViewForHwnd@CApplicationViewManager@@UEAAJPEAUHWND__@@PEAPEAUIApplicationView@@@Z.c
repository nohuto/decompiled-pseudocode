/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180072740
 * Callers:
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x180073B10 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1800742C0 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x1800744B0 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___::Invoke @ 0x180076050 (CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___--Invoke.c)
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18007CFA0 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18007D0E0 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18007B124 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rbx
  struct IApplicationView *v7; // rdi
  PVOID v8; // rsi
  unsigned int v9; // r14d
  _QWORD *Ptr; // rdi
  __int64 v11; // rcx

  v6 = this + 45;
  AcquireSRWLockShared(this + 45);
  *a3 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -2147319765;
  do
  {
    if ( v8 >= this[47].Ptr )
      break;
    if ( IsEqualByHwnd(a2, *((struct IApplicationView **)this[46].Ptr + (_QWORD)v8)) )
    {
      Ptr = this[46].Ptr;
      v11 = Ptr[(_QWORD)v8];
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v7 = (struct IApplicationView *)Ptr[(_QWORD)v8];
      v9 = 0;
    }
    v8 = (char *)v8 + 1;
  }
  while ( !v7 );
  *a3 = v7;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
