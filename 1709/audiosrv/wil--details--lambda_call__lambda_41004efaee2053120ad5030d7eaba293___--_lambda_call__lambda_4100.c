/*
 * XREFs of wil::details::lambda_call__lambda_41004efaee2053120ad5030d7eaba293___::_lambda_call__lambda_41004efaee2053120ad5030d7eaba293___ @ 0x18005BD3C
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$8 @ 0x180038E4D (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
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
    return (*(__int64 (__fastcall **)(_QWORD, struct ISessionInternalEvents *))(*(_QWORD *)*v1 + 184LL))(*v1, v2);
  }
  return result;
}
