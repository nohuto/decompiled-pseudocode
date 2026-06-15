/*
 * XREFs of ?SetAccessibilityAudioMonoMixState@CPolicyConfig@@UEAAJH@Z @ 0x18009D790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::SetAccessibilityAudioMonoMixState(CPolicyConfig *this)
{
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 272LL))(g_PolicyManager);
}
