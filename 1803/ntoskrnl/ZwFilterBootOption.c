/*
 * XREFs of ZwFilterBootOption @ 0x1401A9040
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140234FC0 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
