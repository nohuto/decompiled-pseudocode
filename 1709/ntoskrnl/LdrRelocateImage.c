/*
 * XREFs of LdrRelocateImage @ 0x1405BE5F8
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     LdrRelocateImageWithBias @ 0x1405BE60C (LdrRelocateImageWithBias.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall LdrRelocateImage(PVOID NewBase, PCCH LoaderName, ULONG Success, ULONG Conflict, ULONG Invalid)
{
  ULONG v6; // [rsp+20h] [rbp-18h]
  ULONG v7; // [rsp+28h] [rbp-10h]

  return LdrRelocateImageWithBias(NewBase, (LONGLONG)LoaderName, *(PCCH *)&Success, Conflict, v6, v7);
}
