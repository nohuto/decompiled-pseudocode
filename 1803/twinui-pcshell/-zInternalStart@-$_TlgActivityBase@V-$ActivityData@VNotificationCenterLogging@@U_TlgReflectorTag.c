/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@QEAAXXZ @ 0x18016A0B0
 * Callers:
 *     ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18016A07C (-zInternalStart@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800755FC (TraceLoggingProviderEnabled.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall _TlgActivityBase<wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::zInternalStart(
        __int64 a1)
{
  void *v2; // r8
  ULONG result; // eax
  WINBOOL v4; // [rsp+30h] [rbp+8h] BYREF
  TraceLoggingHProvider *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = (TraceLoggingHProvider *)qword_1804387D8;
    qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
    qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0, v2);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
  }
  if ( TraceLoggingProviderEnabled(v5[1], 5u, 0x200000000000uLL) )
  {
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  }
  else
  {
    result = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 1;
  return result;
}
