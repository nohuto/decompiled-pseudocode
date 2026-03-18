/*
 * XREFs of ZwIsUILanguageComitted @ 0x14017F820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwIsUILanguageComitted(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
