/*
 * XREFs of RtlStringFromGUID @ 0x180071790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringFromGUID(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return RtlStringFromGUIDEx(a1, a2, a3);
}
