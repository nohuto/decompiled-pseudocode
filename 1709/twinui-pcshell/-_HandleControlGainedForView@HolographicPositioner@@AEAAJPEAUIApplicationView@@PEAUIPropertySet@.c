/*
 * XREFs of ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FC040 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x180105F80 (CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE06C (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFBF8 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180100AA0 (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18010397C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_HandleControlGainedForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 *ViewHostItem; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  struct IApplicationView *v14; // rcx
  __int64 v15; // rax
  struct IApplicationView *v16; // rcx
  HolographicPositioner *v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+28h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+48h] [rbp-18h]
  __int64 v32; // [rsp+50h] [rbp-10h]
  struct IApplicationView *v33; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IApplicationView *v35; // [rsp+98h] [rbp+38h] BYREF

  v32 = -2LL;
  HolographicPositioner::_FindViewHostItem(this, &v26, a2);
  v6 = v26;
  if ( !v26 )
  {
    v7 = HolographicPositioner::_RaiseViewAdded(this, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1575LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_52;
    }
    v7 = HolographicPositioner::_TransitionViewToHolographic(this, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1578LL;
      goto LABEL_6;
    }
    ViewHostItem = (__int64 *)HolographicPositioner::_FindViewHostItem(this, &v29, a2);
    v6 = 0LL;
    v28 = 0LL;
    if ( &v28 != ViewHostItem )
    {
      v6 = *ViewHostItem;
      v28 = *ViewHostItem;
      *ViewHostItem = 0LL;
    }
    v26 = v6;
    v11 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( !v6 )
      goto LABEL_21;
  }
  v35 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IApplicationView **))v6)(
          v6,
          &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
          &v35);
  v8 = v12;
  if ( v12 >= 0 )
  {
    if ( a3 )
    {
      v12 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v35 + 56LL))(
              v35,
              a3);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 1592LL;
        goto LABEL_17;
      }
    }
    v16 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_21:
    v33 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v27 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v27) >= 0 )
    {
      v18 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v30);
      v19 = *v18;
      v31 = *v18;
      *v18 = 0LL;
      v20 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        if ( _InterlockedExchangeAdd(v20 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 216LL))(v20, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v19 = v31;
        v6 = v26;
      }
      if ( !v19 )
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x641,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_42;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 168LL))(v19, 0LL, 0LL);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 1603LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v21);
LABEL_42:
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        goto LABEL_48;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 184LL))(v19, 0LL, 0LL);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 1604LL;
        goto LABEL_41;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 200LL))(v19, 0LL);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 1605LL;
        goto LABEL_41;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 120LL))(v19, 8LL);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 1606LL;
        goto LABEL_41;
      }
      v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 296LL))(a2, v19);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 1607LL;
        goto LABEL_41;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v23 = HolographicPositioner::_EnableSystemVisuals(v17, a2, 0);
    v8 = v23;
    if ( v23 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x64B,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v23);
LABEL_48:
    v24 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v15 = *(_QWORD *)a2;
    v14 = a2;
    goto LABEL_51;
  }
  v13 = 1587LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v12);
  v14 = v35;
  if ( !v35 )
    goto LABEL_52;
  v35 = 0LL;
  v15 = *(_QWORD *)v14;
LABEL_51:
  (*(void (__fastcall **)(struct IApplicationView *))(v15 + 16))(v14);
LABEL_52:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
