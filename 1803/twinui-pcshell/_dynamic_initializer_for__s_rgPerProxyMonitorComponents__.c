/*
 * XREFs of _dynamic_initializer_for__s_rgPerProxyMonitorComponents__ @ 0x180001300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

GUID *dynamic_initializer_for__s_rgPerProxyMonitorComponents__()
{
  GUID *result; // rax

  qword_18042F1AC = 0LL;
  dword_18042F1B4 = 0;
  result = &CLSID_ImmersiveBackstackManager;
  qword_18042F1B8 = (__int64)&CLSID_ImmersiveBackstackManager;
  xmmword_18042F1C0 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  return result;
}
