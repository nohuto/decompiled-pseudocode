/*
 * XREFs of ?OnChannelVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800059C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnChannelVolumeChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        float *const a4,
        unsigned int a5,
        const struct _GUID *a6)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *, __int64, float *const, unsigned int, const struct _GUID *))(*(_QWORD *)(v6 + 16) + 48LL))(
             v6 + 16,
             a2,
             a3,
             a4,
             a5,
             a6);
  return result;
}
