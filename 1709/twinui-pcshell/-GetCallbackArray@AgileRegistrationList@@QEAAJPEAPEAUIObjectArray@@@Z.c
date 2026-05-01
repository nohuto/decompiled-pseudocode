/*
 * XREFs of ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002564C
 * Callers:
 *     ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18000C560 (-GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180032D08 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18003366C (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18007BC20 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x180100950 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180025428 (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800255A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800255A0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v4; // rbx
  int Interface; // eax
  const char *v6; // r9
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rcx
  __int64 result; // rax
  volatile signed __int32 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h]

  try
  {
    *a2 = 0LL;
    v4 = this + 3;
    AcquireSRWLockShared(this + 3);
    v13 = v4;
    Microsoft::WRL::Details::Make<AgileRegistrationList::AgileCallbackArray,std::vector<AgileRegistrationList::Item> &>(
      (__int64 *)&v12,
      (__int64 *)this);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::QueryInterface(
                  (__int64)v12,
                  (__int64)&GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                  (void **)a2);
    v7 = Interface;
    if ( Interface >= 0 )
    {
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        if ( _InterlockedExchangeAdd(v10 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 40LL))(v10, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      if ( v4 )
        ReleaseSRWLockShared(v4);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x39,
        (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)(unsigned int)Interface);
      v8 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        if ( _InterlockedExchangeAdd(v8 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 40LL))(v8, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      if ( v4 )
        ReleaseSRWLockShared(v4);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v6);
  }
  return result;
}
