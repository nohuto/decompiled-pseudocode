/*
 * XREFs of wil::details::lambda_call__lambda_7b69b8565b6c07483982bc0f5468612f___::_lambda_call__lambda_7b69b8565b6c07483982bc0f5468612f___ @ 0x18005BCDC
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$6 @ 0x180038E35 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_7b69b8565b6c07483982bc0f5468612f___::_lambda_call__lambda_7b69b8565b6c07483982bc0f5468612f___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 184LL))(**a1, a1[1]);
  }
  return result;
}
