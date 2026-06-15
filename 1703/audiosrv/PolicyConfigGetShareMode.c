/*
 * XREFs of PolicyConfigGetShareMode @ 0x18009F6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PolicyConfigGetShareMode()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 72LL))(g_PolicyConfig);
}
