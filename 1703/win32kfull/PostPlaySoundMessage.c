/*
 * XREFs of PostPlaySoundMessage @ 0x1C010C160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PostPlaySoundMessage()
{
  return CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
}
