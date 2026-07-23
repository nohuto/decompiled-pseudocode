/*
 * XREFs of sub_18004AEE4 @ 0x18004AEE4
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D00B4 @ 0x1800D00B4 (sub_1800D00B4.c)
 * Callees:
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall sub_18004AEE4(
        void *a1,
        void *a2,
        const WCHAR *a3,
        ULONG a4,
        PVOID Buffer,
        ULONG BufferSize,
        __int64 a7,
        _QWORD *a8)
{
  NTSTATUS result; // eax

  if ( a1
    && ((result = LdrQueryImageFileKeyOption(a1, a3, a4, Buffer, BufferSize, 0LL),
         ((result + 0x80000000) & 0x80000000) != 0)
     || result == -2147483643) )
  {
    if ( a8 )
      *a8 = a1;
  }
  else if ( a2
         && ((result = LdrQueryImageFileKeyOption(a2, a3, a4, Buffer, BufferSize, 0LL),
              ((result + 0x80000000) & 0x80000000) != 0)
          || result == -2147483643) )
  {
    if ( a8 )
      *a8 = a2;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
