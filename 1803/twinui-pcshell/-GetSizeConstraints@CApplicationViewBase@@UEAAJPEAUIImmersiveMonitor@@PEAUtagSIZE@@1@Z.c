/*
 * XREFs of ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x180024EE0
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180022368 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18002A910 (-GetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetSizeConstraints(
        CApplicationViewBase *this,
        struct IImmersiveMonitor *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(CWin32ApplicationView *__hidden, unsigned int, struct tagSIZE *, struct tagSIZE *); // rax
  int SizeConstraintsForDpi; // eax
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  char v19; // [rsp+70h] [rbp+18h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v20 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v20);
  v7 = (__int64)v20;
  if ( !v20 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
    v13 = (*(__int64 (__fastcall **)(CApplicationViewBase *, struct IImmersiveMonitor **))(*(_QWORD *)this + 80LL))(
            this,
            &v20);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 142LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)v14,
        v16);
      goto LABEL_10;
    }
    v7 = (__int64)v20;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *, char *))(*(_QWORD *)v7 + 112LL))(v7, &v18, &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = (unsigned int)v8;
    v15 = 147LL;
    goto LABEL_17;
  }
  v10 = *(__int64 (__fastcall **)(CWin32ApplicationView *__hidden, unsigned int, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 288LL);
  if ( v10 == CWin32ApplicationView::GetSizeConstraintsForDpi )
    SizeConstraintsForDpi = CWin32ApplicationView::GetSizeConstraintsForDpi(this, v18, a3, a4);
  else
    SizeConstraintsForDpi = v10(this, v18, a3, a4);
  v9 = SizeConstraintsForDpi;
  if ( SizeConstraintsForDpi < 0 )
  {
    v14 = (unsigned int)SizeConstraintsForDpi;
    v15 = 148LL;
    goto LABEL_17;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
  return v9;
}
