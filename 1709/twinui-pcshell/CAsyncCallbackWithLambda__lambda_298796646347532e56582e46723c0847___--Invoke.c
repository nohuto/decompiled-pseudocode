/*
 * XREFs of CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___::Invoke @ 0x180078F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180075370 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAsyncCallbackWithLambda__lambda_298796646347532e56582e46723c0847___::Invoke(__int64 a1)
{
  int ViewForHwnd; // eax
  unsigned int v3; // edi
  struct IObjectArray *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG (__stdcall *Release)(IObjectArray *); // rax
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  struct IObjectArray *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(
                  (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 64) + 144LL),
                  *(HWND *)(a1 + 56),
                  (struct IApplicationView **)&v14);
  v3 = ViewForHwnd;
  if ( ViewForHwnd >= 0 )
  {
    v13 = 0LL;
    v4 = v14;
    v5 = ((__int64 (__fastcall *)(struct IObjectArray *, GUID *, __int64 *))v14->lpVtbl->QueryInterface)(
           v14,
           &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
           &v13);
    v3 = v5;
    if ( v5 >= 0 )
    {
      LOBYTE(v6) = *(_DWORD *)(a1 + 72) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v6);
      v9 = CApplicationViewManager::RaiseApplicationViewChanged(*(_QWORD *)(a1 + 88) + 144LL, v4, 6u, 0LL);
      v3 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B0,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      Release = v4->lpVtbl->Release;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2AD,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v5);
      v7 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      Release = v4->lpVtbl->Release;
    }
    ((void (__fastcall *)(struct IObjectArray *))Release)(v4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2AA,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForHwnd);
    if ( v14 )
      ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->Release)(v14);
  }
  return v3;
}
