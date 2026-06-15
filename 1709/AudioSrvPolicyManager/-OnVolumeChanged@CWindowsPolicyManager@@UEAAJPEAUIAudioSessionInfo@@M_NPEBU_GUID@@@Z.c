/*
 * XREFs of ?OnVolumeChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180005980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnVolumeChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        float a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioSessionInfo *))(*(_QWORD *)(v3 + 16) + 40LL))(v3 + 16, a2);
  return result;
}
