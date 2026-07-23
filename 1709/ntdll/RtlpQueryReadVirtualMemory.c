/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x180017800
 * Callers:
 *     LdrpReadMemory @ 0x1800175CC (LdrpReadMemory.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x1800A08A0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpQueryReadVirtualMemory(void *a1, void *a2, void *a3, SIZE_T a4, PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = ZwReadVirtualMemory(a1, a2, a3, a4, NumberOfBytesRead);
  if ( result >= 0 )
    return a4 != *NumberOfBytesRead ? 0x8000000D : 0;
  *NumberOfBytesRead = 0LL;
  return result;
}
