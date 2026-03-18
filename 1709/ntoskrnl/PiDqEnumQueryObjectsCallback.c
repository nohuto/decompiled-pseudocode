/*
 * XREFs of PiDqEnumQueryObjectsCallback @ 0x140529540
 * Callers:
 *     <none>
 * Callees:
 *     PiDqQueryEnumObject @ 0x140529564 (PiDqQueryEnumObject.c)
 */

__int64 __fastcall PiDqEnumQueryObjectsCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  *a3 = 0;
  return PiDqQueryEnumObject(a2, a1);
}
