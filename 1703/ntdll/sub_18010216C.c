/*
 * XREFs of sub_18010216C @ 0x18010216C
 * Callers:
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

char __fastcall sub_18010216C(_DWORD *a1)
{
  char v2; // bl

  v2 = 0;
  if ( sub_18001F9B0(a1, "RtlWalkHeap") )
    return sub_180090710((__int64)a1, 0);
  return v2;
}
