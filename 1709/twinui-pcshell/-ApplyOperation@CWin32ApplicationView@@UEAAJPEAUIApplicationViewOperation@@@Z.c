/*
 * XREFs of ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18007FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18007F310 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800849E0 (-SetCloak@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::ApplyOperation(
        CWin32ApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  struct IApplicationViewPosition *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF
  struct IApplicationViewPosition *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, int *))(*(_QWORD *)a2 + 80LL))(a2, &v10);
  if ( v4 < 0 )
  {
    v5 = 575LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CApplicationViewBase::SetCloak(this, 1LL, v10 == 0);
  if ( v4 < 0 )
  {
    v5 = 576LL;
    goto LABEL_3;
  }
  v11 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition **))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v11) < 0
    || (v6 = CWin32ApplicationView::SetPosition(this, v11), v4 = v6, v6 >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x246,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v6);
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v4;
}
