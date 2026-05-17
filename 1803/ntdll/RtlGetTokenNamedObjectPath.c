/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x180082490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(__int64 a1, char a2, UNICODE_STRING *a3)
{
  return sub_180042B30(a1, 0LL, a2 != 0, a3);
}
