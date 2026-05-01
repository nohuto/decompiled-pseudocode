/*
 * XREFs of _dynamic_initializer_for__s_rgPerProxyMonitorComponents__ @ 0x180002460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

GUID *dynamic_initializer_for__s_rgPerProxyMonitorComponents__()
{
  GUID *result; // rax

  qword_1802B7B8C = 0LL;
  dword_1802B7B94 = 0;
  result = &CLSID_ImmersiveBackstackManager;
  qword_1802B7B98 = (__int64)&CLSID_ImmersiveBackstackManager;
  xmmword_1802B7BA0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  return result;
}
