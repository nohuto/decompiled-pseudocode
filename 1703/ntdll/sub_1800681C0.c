/*
 * XREFs of sub_1800681C0 @ 0x1800681C0
 * Callers:
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1800681C0(void *a1, void *a2, void *a3, SIZE_T a4, PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = ZwReadVirtualMemory(a1, a2, a3, a4, NumberOfBytesRead);
  if ( result >= 0 )
    return a4 != *NumberOfBytesRead ? 0x8000000D : 0;
  *NumberOfBytesRead = 0LL;
  return result;
}
