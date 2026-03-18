/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x140216D54
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400C38C0 (MiAssignNonPagedPoolPtes.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x1406E1368 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  unsigned __int64 *v8; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = (16 * a2) & 0xFFFFFFFFFFFF0LL;
  v10 = 0;
  v6 = a1;
  v7 = a4;
  v9 = 24;
  v5 = ((unsigned __int8)v4 ^ (unsigned __int8)((unsigned __int64)a3 >> 1)) & 0xF ^ (unsigned __int64)v4;
  v8 = &v5;
  EtwTraceKernelEvent((__int64)&v8, 1u, 0x20000001u, ((a3 & 1) == 0) | 0x278, 0x11401B02u);
}
