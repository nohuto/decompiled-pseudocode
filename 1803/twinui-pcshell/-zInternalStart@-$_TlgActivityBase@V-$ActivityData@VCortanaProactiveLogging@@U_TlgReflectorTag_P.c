/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@QEAAXXZ @ 0x1800F9F9C
 * Callers:
 *     ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800F6A98 (-zInternalStart@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::zInternalStart(
        __int64 a1)
{
  ULONG result; // eax
  WINBOOL v3; // [rsp+30h] [rbp+8h] BYREF
  _DWORD **v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4) && v3 )
  {
    v4 = (_DWORD **)&qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  result = (unsigned int)v4;
  if ( *v4[1] <= 5u )
    *(_QWORD *)(a1 + 8) = 0LL;
  else
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  *(_DWORD *)a1 = 1;
  return result;
}
