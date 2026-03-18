/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x14020F010
 * Callers:
 *     MiAssignNonPagedPoolPtes @ 0x1400B2F20 (MiAssignNonPagedPoolPtes.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MmFreeContiguousMemory @ 0x140123200 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1406B5200 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  unsigned __int64 *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = (16 * a2) & 0xFFFFFFFFFFFF0LL;
  v11 = 0;
  v7 = a1;
  v8 = a4;
  v10 = 24;
  v6 = ((unsigned __int8)v4 ^ (unsigned __int8)((unsigned __int64)a3 >> 1)) & 0xF ^ (unsigned __int64)v4;
  v9 = &v6;
  return EtwTraceKernelEvent((int)&v9, 1, 0x20000001u, ((a3 & 1) == 0) | 0x278u, 289413890);
}
