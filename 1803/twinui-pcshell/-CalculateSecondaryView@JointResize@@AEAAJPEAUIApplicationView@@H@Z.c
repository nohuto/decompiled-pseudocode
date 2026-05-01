/*
 * XREFs of ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1802E8B20
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1802E9800 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1802E9A30 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FE4 (--4-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall JointResize::CalculateSecondaryView(
        JointResize *this,
        __int64 (__fastcall ***a2)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        int a3)
{
  __int64 v3; // rbx
  int v7; // ebx
  bool v8; // zf
  int v9; // eax
  __int64 v10; // rdx
  struct IApplicationView *v11; // rdx
  struct IApplicationView *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  ApplicationViewHelpers *v16; // [rsp+58h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 18);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, ApplicationViewHelpers **))(*(_QWORD *)v3 + 32LL))(v3, a2, &v16);
  if ( v7 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **)))(**((_QWORD **)this + 18) + 48LL))(
           *((_QWORD *)this + 18),
           a2) )
    {
      v8 = a3 == 11;
    }
    else
    {
      v8 = a3 == 10;
    }
    if ( !v8 )
    {
      v7 = -2147467259;
      goto LABEL_14;
    }
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **), __int64 *))(*a2)[10])(
           a2,
           &v15);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 88LL))(v15, (char *)this + 264);
      v7 = v9;
      if ( v9 >= 0 )
      {
        *((_QWORD *)this + 29) = ApplicationViewHelpers::GetWindowForView(a2, v11);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(
          (CWinRTApplicationView **)this + 24,
          (CWinRTApplicationView *)a2);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)this + 25, &v16);
        *((_QWORD *)this + 30) = ApplicationViewHelpers::GetWindowForView(
                                   (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v16,
                                   v12);
        Microsoft::WRL::ComPtr<IViewWrapperInternal>::operator=((__int64 *)this + 23, &v15);
        v7 = 0;
        *((_DWORD *)this + 72) = a3;
        goto LABEL_13;
      }
      v10 = 685LL;
    }
    else
    {
      v10 = 683LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return (unsigned int)v7;
}
