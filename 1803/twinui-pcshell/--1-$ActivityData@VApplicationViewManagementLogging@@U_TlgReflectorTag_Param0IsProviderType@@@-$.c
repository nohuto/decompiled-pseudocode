/*
 * XREFs of ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180095244
 * Callers:
 *     ??4?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180017DA8 (--4-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180017E60 (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800F6910 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180072174 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  wil::details::shared_buffer::reset((LPVOID *)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((LPVOID *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    Context = 0LL;
    *(_DWORD *)a1 = 2;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
