/*
 * XREFs of sub_18007C1E0 @ 0x18007C1E0
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D781C @ 0x1800D781C (sub_1800D781C.c)
 * Callees:
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall sub_18007C1E0(
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
