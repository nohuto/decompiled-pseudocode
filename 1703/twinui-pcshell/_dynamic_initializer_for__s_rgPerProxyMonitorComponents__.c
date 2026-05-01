/*
 * XREFs of _dynamic_initializer_for__s_rgPerProxyMonitorComponents__ @ 0x1800022B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

GUID *dynamic_initializer_for__s_rgPerProxyMonitorComponents__()
{
  GUID *result; // rax

  qword_18024267C = 0LL;
  dword_180242684 = 0;
  result = &CLSID_ImmersiveBackstackManager;
  qword_180242688 = (__int64)&CLSID_ImmersiveBackstackManager;
  xmmword_180242690 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  return result;
}
