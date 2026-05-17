/*
 * XREFs of sub_1800FDDA8 @ 0x1800FDDA8
 * Callers:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_18001C3EC @ 0x18001C3EC (sub_18001C3EC.c)
 *     sub_18001C638 @ 0x18001C638 (sub_18001C638.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D350 @ 0x18001D350 (sub_18001D350.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 * Callees:
 *     sub_18010057C @ 0x18010057C (sub_18010057C.c)
 */

__int64 sub_1800FDDA8()
{
  __int64 result; // rax

  if ( !byte_18015B388 )
    return sub_18010057C();
  return result;
}
