/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800202B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C840 (-GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?IsInHighZOrderBand@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18002A690 (-IsInHighZOrderBand@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18002AFC0 (-GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014D530 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z @ 0x18014DA94 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014E010 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  char v5; // si
  __int64 v7; // r14
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  int Monitor; // eax
  wil::details::in1diag3 *v10; // rcx
  struct IShellPositionerPriority *v11; // rcx
  struct IUnknown *v12; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  int PositionerPriority; // eax
  __int64 (*v15)(void); // rax
  int v16; // eax
  __int64 (*v17)(void); // rax
  int CurrentPositioner; // eax
  HRESULT (__stdcall *v19)(IUnknown *, const IID *const, void **); // rax
  int v20; // eax
  __int64 v21; // rdx
  struct IShellPositionerPriority *v22; // rcx
  __int64 v23; // rdx
  int v24; // esi
  int v25; // eax
  unsigned int v26; // ebx
  struct IShellPositionerPriority *v27[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IShellPositionerPriority *v29; // [rsp+50h] [rbp+20h] BYREF

  v27[1] = (struct IShellPositionerPriority *)-2LL;
  if ( !*(_DWORD *)(a1 + 96) )
    return 0LL;
  v5 = 1;
  if ( a3 == 1 )
  {
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 64), a2) )
      FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(a1 - 120), 0LL);
    return 0LL;
  }
  if ( (unsigned int)(a3 - 7) > 1 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  v27[0] = 0LL;
  AddRef = a2->lpVtbl[3].AddRef;
  if ( (char *)AddRef == (char *)CWinRTApplicationView::GetMonitor )
  {
    Monitor = CWinRTApplicationView::GetMonitor((CWinRTApplicationView *)a2, v27);
  }
  else if ( (char *)AddRef == (char *)CWin32ApplicationView::GetMonitor )
  {
    Monitor = CWin32ApplicationView::GetMonitor((CWin32ApplicationView *)a2, v27);
  }
  else
  {
    Monitor = ((__int64 (__fastcall *)(struct IUnknown *, struct IShellPositionerPriority **))AddRef)(a2, v27);
  }
  v10 = retaddr;
  if ( Monitor < 0 )
  {
    v23 = 163LL;
  }
  else
  {
    Monitor = (*(__int64 (__fastcall **)(__int64, struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v7 + 96LL))(
                v7,
                v27[0],
                &v29);
    v10 = retaddr;
    if ( Monitor >= 0 )
    {
      if ( (_DWORD)v29 )
        goto LABEL_10;
      goto LABEL_39;
    }
    v23 = 164LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v10,
    (void *)v23,
    (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
    (const char *)(unsigned int)Monitor,
    (int)v27[0]);
LABEL_39:
  v5 = 0;
LABEL_10:
  v11 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !v5 )
    return 0LL;
  v12 = *(struct IUnknown **)(a1 + 64);
  if ( v12 )
  {
    if ( v12 == a2 )
      return 0LL;
    v27[0] = 0LL;
    v29 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IShellPositionerPriority **))v12->lpVtbl->QueryInterface)(
           v12,
           &GUID_00000000_0000_0000_c000_000000000046,
           v27) >= 0 )
    {
      v24 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IShellPositionerPriority **))a2->lpVtbl->QueryInterface)(
              a2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v29);
      if ( v24 >= 0 )
        (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v29 + 16LL))(v29);
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
      if ( v24 >= 0 && v27[0] == v29 )
        return 0LL;
    }
  }
  LODWORD(v29) = 0;
  v27[0] = 0LL;
  QueryInterface = a2->lpVtbl[11].QueryInterface;
  if ( (char *)QueryInterface == (char *)CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority((CApplicationViewBase *)a2, v27);
  else
    PositionerPriority = ((__int64 (__fastcall *)(struct IUnknown *, struct IShellPositionerPriority **))QueryInterface)(
                           a2,
                           v27);
  if ( PositionerPriority < 0
    || ((v15 = *(__int64 (**)(void))(*(_QWORD *)v27[0] + 24LL), v15 != PositionerPriority::GetCurrentPositioner)
      ? (v16 = v15())
      : (v16 = PositionerPriority::GetCurrentPositioner()),
        v16 != 3) )
  {
    if ( !v27[0]
      || ((v17 = *(__int64 (**)(void))(*(_QWORD *)v27[0] + 24LL), v17 != PositionerPriority::GetCurrentPositioner)
        ? (CurrentPositioner = v17())
        : (CurrentPositioner = PositionerPriority::GetCurrentPositioner()),
          CurrentPositioner != 4) )
    {
      v19 = a2->lpVtbl[14].QueryInterface;
      if ( (char *)v19 == (char *)CWin32ApplicationView::IsInHighZOrderBand )
        v20 = CWin32ApplicationView::IsInHighZOrderBand((CWin32ApplicationView *)a2, (int *)&v29);
      else
        v20 = ((__int64 (__fastcall *)(struct IUnknown *, struct IShellPositionerPriority **))v19)(a2, &v29);
      if ( v20 >= 0 && !(_DWORD)v29 )
      {
        v21 = *(_QWORD *)(a1 + 64);
        if ( v21 )
        {
          FullScreenPositioner::PositionView(a1 - 120, v21, 2LL);
          FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(a1 - 120), 0LL);
        }
      }
    }
    goto LABEL_30;
  }
  v25 = FullScreenPositioner::FullScreenViewGetsFocus((FullScreenPositioner *)(a1 - 120), (struct IApplicationView *)a2);
  v26 = v25;
  if ( v25 >= 0 )
  {
LABEL_30:
    v22 = v27[0];
    if ( v27[0] )
    {
      v27[0] = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x227,
    (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v25,
    (int)v27[0]);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v27);
  return v26;
}
