/*
 * XREFs of wil::details::lambda_call__lambda_cb9968fbd2c773224d6a0973d1005a02___::_lambda_call__lambda_cb9968fbd2c773224d6a0973d1005a02___ @ 0x18005BD0C
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$7 @ 0x180038E41 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_cb9968fbd2c773224d6a0973d1005a02___::_lambda_call__lambda_cb9968fbd2c773224d6a0973d1005a02___(
        __int64 a1)
{
  _QWORD *v1; // rax
  struct ISessionInternalEvents *v2; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    v2 = g_PolicyEventsHandler;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, struct ISessionInternalEvents *))(*(_QWORD *)*v1 + 184LL))(*v1, v2);
  }
  return result;
}
