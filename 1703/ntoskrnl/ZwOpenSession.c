/*
 * XREFs of ZwOpenSession @ 0x140180360
 * Callers:
 *     PnpInitializeNotifyEntry @ 0x140571770 (PnpInitializeNotifyEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenSession(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
