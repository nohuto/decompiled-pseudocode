/*
 * XREFs of sub_180068DC0 @ 0x180068DC0
 * Callers:
 *     RtlCopyContext @ 0x1800688F0 (RtlCopyContext.c)
 *     sub_1800F16A8 @ 0x1800F16A8 (sub_1800F16A8.c)
 *     sub_180103880 @ 0x180103880 (sub_180103880.c)
 *     sub_1801038E0 @ 0x1801038E0 (sub_1801038E0.c)
 * Callees:
 *     sub_180068DDC @ 0x180068DDC (sub_180068DDC.c)
 */

__int64 __fastcall sub_180068DC0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return sub_180068DDC();
  if ( (a3 & 0x100000) != 0 )
    return sub_1800F1730();
  if ( (a3 & 0x200000) != 0 )
    return sub_1800F1914();
  if ( (a3 & 0x400000) != 0 )
    return sub_1800F1A64();
  return result;
}
