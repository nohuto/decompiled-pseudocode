/*
 * XREFs of ?IsSystemSoundsSession@CServerAudioSessionControl@@UEAAJXZ @ 0x1800AEB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CServerAudioSessionControl::IsSystemSoundsSession(CServerAudioSessionControl *this)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 24LL) + 24LL))(*((_QWORD *)this + 9) + 24LL) == 0;
}
