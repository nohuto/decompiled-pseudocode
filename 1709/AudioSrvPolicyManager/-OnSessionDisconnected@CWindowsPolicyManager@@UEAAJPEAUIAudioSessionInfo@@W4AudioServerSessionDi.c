/*
 * XREFs of ?OnSessionDisconnected@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4AudioServerSessionDisconnectReason@@@Z @ 0x180005AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnSessionDisconnected(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 72LL))(v1 + 16);
  return result;
}
