/*
 * XREFs of ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB438
 * Callers:
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA948 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithViewHostItemData @ 0x1800D73B4 (_LogEventWithViewHostItemData.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D998C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DB8B4 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1800DBFD8 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800DEF40 (--$Make@VApplicationViewOperation@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOperati.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E266C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewOperation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E26A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewOperation@@U-$InterfaceLi_ea_1800E26A0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_TransitionViewToHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int updated; // eax
  __int64 v9; // rcx
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  struct IApplicationViewTitlebarConfiguration *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v19[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationViewTitlebarConfiguration *v22; // [rsp+88h] [rbp+48h] BYREF

  v19[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, &v18, a2);
  v4 = v18;
  if ( v18 && *((_QWORD *)this + 25) )
  {
    LogEventWithViewHostItemData(
      v18,
      (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewToHolographic<unsigned short const *,unsigned int &>);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 25) + 48LL))(*((_QWORD *)this + 25), v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1368LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_34;
    }
    v19[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v21 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v21) >= 0 )
    {
      updated = HolographicPositioner::_UpdateViewStateDataForView(this, a2);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x55F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)updated);
        v9 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
        goto LABEL_34;
      }
      Microsoft::WRL::Details::Make<ApplicationViewOperation>(v19);
      v11 = v19[0];
      if ( v19[0] )
      {
        *(_DWORD *)(v19[0] + 84LL) = 31;
        *(_DWORD *)(v11 + 88) = 0;
        v22 = 0LL;
        v12 = HolographicPositioner::_CreateTitleBarConfiguration(retaddr, &v22);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x56A,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v12);
        v13 = v22;
        if ( *(struct IApplicationViewTitlebarConfiguration **)(v11 + 144) != v22 )
        {
          if ( v22 )
            (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v22 + 8LL))(v22);
          v14 = *(_QWORD *)(v11 + 144);
          *(_QWORD *)(v11 + 144) = v13;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 296LL))(a2, v11);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x56C,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v15);
        if ( v13 )
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      else
      {
        wil::details::in1diag3::_Log_NullAlloc(
          retaddr,
          (void *)0x563,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          v10);
      }
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    }
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  v5 = HolographicPositioner::_SendViewTransitionNotification(this, a2, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1393LL;
    goto LABEL_32;
  }
  v6 = 0;
LABEL_34:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
