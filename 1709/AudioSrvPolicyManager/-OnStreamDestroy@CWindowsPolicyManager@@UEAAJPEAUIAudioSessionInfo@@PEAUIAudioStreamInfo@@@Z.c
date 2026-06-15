/*
 * XREFs of ?OnStreamDestroy@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStreamDestroy(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, struct IAudioStreamInfo *))(*(_QWORD *)(v3 + 16) + 96LL))(
             v3 + 16,
             a2,
             a3);
  return result;
}
