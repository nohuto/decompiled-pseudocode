/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1402547CC
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x14074C154 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 *v10; // [rsp+48h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+54h] [rbp-Ch]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v5 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v12 = 0;
  v8 = a1;
  v9 = a4;
  v7 = v5 | (a3 >> 1) & 0xF;
  v11 = 24;
  v10 = &v7;
  return EtwTraceKernelEvent((int)&v10, 1, 0x20000001u, ((a3 & 1) == 0) | 0x278u, 289413890);
}
