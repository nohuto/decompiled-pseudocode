/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C0008270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserDoSoundDisconnect(CUserPlaySound *a1)
{
  return CUserPlaySound::Disconnect(a1);
}
