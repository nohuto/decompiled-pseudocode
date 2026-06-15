/*
 * XREFs of PolicyConfigGetAccessibilityAudioMonoMixState @ 0x180089760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PolicyConfigGetAccessibilityAudioMonoMixState()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 192LL))(g_PolicyConfig);
}
