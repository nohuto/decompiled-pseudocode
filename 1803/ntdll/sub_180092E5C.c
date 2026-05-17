/*
 * XREFs of sub_180092E5C @ 0x180092E5C
 * Callers:
 *     atan @ 0x18008D160 (atan.c)
 *     atan2 @ 0x18008D3C0 (atan2.c)
 *     cos @ 0x18008DE90 (cos.c)
 *     sin @ 0x18008E2B0 (sin.c)
 *     tan @ 0x180090650 (tan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180092E5C(int a1, int a2)
{
  return sub_180092B9C(a1, a2 & 0xFFF7FFFF);
}
