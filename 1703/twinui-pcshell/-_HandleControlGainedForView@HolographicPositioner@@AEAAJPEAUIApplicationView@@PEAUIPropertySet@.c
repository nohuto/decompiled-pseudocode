/*
 * XREFs of ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA948
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8B70 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x1800E1160 (CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB438 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_EnableSystemVisualAnimation@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1800DC168 (-_EnableSystemVisualAnimation@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ??$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800DEF40 (--$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOperati.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewOperation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E26A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewOperation@@U-$InterfaceLi_ea_1800E26A0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_HandleControlGainedForView(
        HolographicPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 *ViewHostItem; // rax
  _QWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 **v17; // rax
  __int64 *v18; // rbx
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  HolographicPositioner *v22; // rcx
  _QWORD v24[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  _QWORD *v26; // [rsp+78h] [rbp+38h] BYREF

  v24[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, v24, a2);
  v6 = v24[0];
  if ( v24[0] )
    goto LABEL_12;
  v7 = HolographicPositioner::_RaiseViewAdded(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1236LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_42;
  }
  v7 = HolographicPositioner::_TransitionViewToHolographic(this, (struct IApplicationView *)a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1239LL;
    goto LABEL_6;
  }
  ViewHostItem = (__int64 *)HolographicPositioner::_FindViewHostItem(this, &v26, a2);
  v6 = 0LL;
  if ( v24 != ViewHostItem )
  {
    v6 = *ViewHostItem;
    *ViewHostItem = 0LL;
  }
  v24[0] = v6;
  v11 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  }
  if ( v6 )
  {
LABEL_12:
    v26 = 0LL;
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))v6)(
            v6,
            &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
            &v26);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 1248LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      v14 = v26;
      if ( !v26 )
        goto LABEL_42;
      v26 = 0LL;
      v15 = *v14;
      goto LABEL_41;
    }
    if ( a3 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, struct Windows::Foundation::Collections::IPropertySet *))(*v26 + 56LL))(
              v26,
              a3);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 1253LL;
        goto LABEL_17;
      }
    }
    v16 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    }
  }
  v17 = (__int64 **)Microsoft::WRL::Details::Make<ApplicationViewOperation>(&v26);
  v18 = *v17;
  v24[2] = *v17;
  *v17 = 0LL;
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v19);
  }
  if ( v18 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v18 + 168))(v18, 0LL, 0LL);
    v8 = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v18 + 184))(v18, 0LL, 0LL);
      v8 = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v18 + 200))(v18, 0LL);
        v8 = v20;
        if ( v20 >= 0 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v18 + 120))(v18, 8LL);
          v8 = v20;
          if ( v20 >= 0 )
          {
            v20 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), __int64 *))(*a2)[37])(
                    a2,
                    v18);
            v8 = v20;
            if ( v20 >= 0 )
            {
              v20 = HolographicPositioner::_EnableSystemVisualAnimation(v22, (struct IApplicationView *)a2, 0);
              v8 = v20;
              if ( v20 >= 0 )
              {
                v8 = 0;
                goto LABEL_39;
              }
              v21 = 1268LL;
            }
            else
            {
              v21 = 1265LL;
            }
          }
          else
          {
            v21 = 1264LL;
          }
        }
        else
        {
          v21 = 1263LL;
        }
      }
      else
      {
        v21 = 1262LL;
      }
    }
    else
    {
      v21 = 1261LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v20);
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EB,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_39:
  if ( !v18 )
    goto LABEL_42;
  v15 = *v18;
  v14 = v18;
LABEL_41:
  (*(void (__fastcall **)(__int64 *))(v15 + 16))(v14);
LABEL_42:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
