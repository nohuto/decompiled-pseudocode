/*
 * XREFs of IsUninterceptable @ 0x1C00EF944
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00CAF60 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00EFEC0 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey(WPP_MAIN_CB.AlignmentRequirement);
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}
