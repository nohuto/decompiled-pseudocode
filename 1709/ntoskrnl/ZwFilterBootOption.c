/*
 * XREFs of ZwFilterBootOption @ 0x14017F420
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1401F7C84 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
