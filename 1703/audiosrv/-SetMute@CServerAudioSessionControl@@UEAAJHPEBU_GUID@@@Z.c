/*
 * XREFs of ?SetMute@CServerAudioSessionControl@@UEAAJHPEBU_GUID@@@Z @ 0x180091DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetMute(
        CServerAudioSessionControl *this,
        __int64 a2,
        const struct _GUID *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, _QWORD))(**((_QWORD **)this + 9) + 336LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           0LL);
}
