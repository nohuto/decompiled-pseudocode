/*
 * XREFs of _dynamic_initializer_for__g_InvariantLocale__ @ 0x180001840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct localeinfo_struct *dynamic_initializer_for__g_InvariantLocale__()
{
  struct localeinfo_struct *result; // rax

  result = _create_locale(0, "C");
  g_InvariantLocale = result;
  return result;
}
