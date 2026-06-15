/*
 * XREFs of wil::details::lambda_call__lambda_41004efaee2053120ad5030d7eaba293___::_lambda_call__lambda_41004efaee2053120ad5030d7eaba293___ @ 0x180098BF8
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$8 @ 0x18006A7BB (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_41004efaee2053120ad5030d7eaba293___::_lambda_call__lambda_41004efaee2053120ad5030d7eaba293___(
        __int64 a1)
{
  _QWORD *v1; // rax
  struct ISessionInternalEvents *v2; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    v2 = g_TelephonyControlEventsHandler;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, struct ISessionInternalEvents *))(*(_QWORD *)*v1 + 192LL))(*v1, v2);
  }
  return result;
}
