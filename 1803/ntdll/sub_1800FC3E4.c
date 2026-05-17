/*
 * XREFs of sub_1800FC3E4 @ 0x1800FC3E4
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002ACD0 @ 0x18002ACD0 (sub_18002ACD0.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_1800FC664 @ 0x1800FC664 (sub_1800FC664.c)
 * Callees:
 *     sub_1800FF090 @ 0x1800FF090 (sub_1800FF090.c)
 */

__int64 sub_1800FC3E4()
{
  __int64 result; // rax

  if ( !byte_18015C3A8 )
    return sub_1800FF090();
  return result;
}
