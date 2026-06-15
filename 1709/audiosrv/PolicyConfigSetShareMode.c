/*
 * XREFs of PolicyConfigSetShareMode @ 0x180089EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PolicyConfigSetShareMode()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 80LL))(g_PolicyConfig);
}
