/*
 * XREFs of ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFBF8
 * Callers:
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C0D2C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _LogEventWithViewHostItemData @ 0x1800FA7D0 (_LogEventWithViewHostItemData.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800FD11C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180100138 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x180100950 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18010397C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  struct IApplicationViewTitlebarConfiguration *v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v19[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, &v18, a2);
  v4 = v18;
  if ( v18 && *((_QWORD *)this + 32) )
  {
    LogEventWithViewHostItemData(
      v18,
      (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewToHolographic<unsigned short const *,unsigned int &>);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 48LL))(*((_QWORD *)this + 32), v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1711LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_37;
    }
    v19[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v22 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v22) >= 0 )
    {
      updated = HolographicPositioner::_UpdateViewStateDataForView(this, a2);
      v6 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6B6,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)updated);
        v9 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
        goto LABEL_37;
      }
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v19);
      v11 = v19[0];
      if ( v19[0] )
      {
        *(_DWORD *)(v19[0] + 100LL) = 127;
        *(_DWORD *)(v11 + 104) = 0;
        v21 = 0LL;
        v12 = HolographicPositioner::_CreateTitleBarConfiguration(retaddr, &v21);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6C1,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v12);
        v13 = v21;
        if ( *(struct IApplicationViewTitlebarConfiguration **)(v11 + 160) != v21 )
        {
          if ( v21 )
            (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v21 + 8LL))(v21);
          v14 = *(_QWORD *)(v11 + 160);
          *(_QWORD *)(v11 + 160) = v13;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 296LL))(a2, v11);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x6C3,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v15);
        if ( v13 )
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      else
      {
        wil::details::in1diag3::_Log_NullAlloc(
          retaddr,
          (void *)0x6BA,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          v10);
      }
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 52), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v19[0] + 216LL))(v19[0], 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v4 = v18;
      }
    }
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  v5 = HolographicPositioner::_SendViewTransitionNotification(this, a2, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1736LL;
    goto LABEL_35;
  }
  v6 = 0;
LABEL_37:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
