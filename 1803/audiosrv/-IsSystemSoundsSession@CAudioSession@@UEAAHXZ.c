/*
 * XREFs of ?IsSystemSoundsSession@CAudioSession@@UEAAHXZ @ 0x1800354B0
 * Callers:
 *     ?FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z @ 0x18000431C (-FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z.c)
 *     ?GroupAudioSessionsWithNullGUIDs@CAudioSessionManager@@IEAAJU_GUID@@K@Z @ 0x180004A04 (-GroupAudioSessionsWithNullGUIDs@CAudioSessionManager@@IEAAJU_GUID@@K@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::IsSystemSoundsSession(CAudioSession *this)
{
  return *((unsigned __int8 *)this + 277);
}
