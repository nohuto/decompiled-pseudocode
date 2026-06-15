/*
 * XREFs of ?SetAccessibilityAudioMonoMixState@CPolicyConfig@@UEAAJH@Z @ 0x180087210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::SetAccessibilityAudioMonoMixState(CPolicyConfig *this)
{
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 272LL))(g_PolicyManager);
}
