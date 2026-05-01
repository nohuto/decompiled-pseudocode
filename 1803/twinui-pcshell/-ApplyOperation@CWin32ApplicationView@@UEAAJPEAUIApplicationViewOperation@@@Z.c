/*
 * XREFs of ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18013EB80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800252D0 (-SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1801409F0 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::ApplyOperation(
        CWin32ApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  struct IApplicationViewPosition *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a2 + 104LL))(a2, &v9) < 0
    || (v4 = CApplicationViewBase::SetCloak((RTL_SRWLOCK *)this, 1u, v9 == 0), v5 = v4, v4 >= 0) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v10);
    if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition **))(*(_QWORD *)a2 + 88LL))(
           a2,
           &v10) < 0
      || (v6 = CWin32ApplicationView::SetPosition(this, v10), v5 = v6, v6 >= 0) )
    {
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x256,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
