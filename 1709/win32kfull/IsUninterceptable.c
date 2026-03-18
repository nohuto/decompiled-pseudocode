/*
 * XREFs of IsUninterceptable @ 0x1C00F9DFC
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C0055E90 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00FA3CC (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey(LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc));
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}
