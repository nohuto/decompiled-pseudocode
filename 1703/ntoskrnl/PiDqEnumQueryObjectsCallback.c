/*
 * XREFs of PiDqEnumQueryObjectsCallback @ 0x1404B9B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqEnumQueryObjectsCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  *a3 = 0;
  return PiDqQueryEnumObject(a2, a1);
}
