/*
 * XREFs of KeFlushIoBuffers @ 0x140021430
 * Callers:
 *     ViMapDoubleBuffer @ 0x14076CA00 (ViMapDoubleBuffer.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x1402011E0 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x1402533D4 (EtwTraceCpuCacheFlush.c)
 */

void __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // r13
  char v8; // r14
  PVOID v9; // rsi
  unsigned int v10; // ebp
  int BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  unsigned int v12; // [rsp+30h] [rbp-58h]
  LARGE_INTEGER v13[3]; // [rsp+38h] [rbp-50h] BYREF

  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v12 = *(_DWORD *)(BugCheckParameter4 + 40);
    if ( a3 || a2 )
    {
      v8 = 1;
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
        v9 = *(PVOID *)(BugCheckParameter4 + 24);
      else
        v9 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !v9 && CurrentIrql == 15 )
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      if ( (xmmword_1403E4010 & 0x4000000) != 0 )
        EtwGetKernelTraceTimestamp(v13, 0x84000000);
      else
        v8 = 0;
      if ( v9 )
      {
        v10 = v12;
        LOBYTE(BugCheckOnFailure) = a3;
        KiFlushRangeAllCaches(BugCheckParameter4, (ULONG_PTR)v9, v12, a2);
      }
      else
      {
        if ( a3 )
          KeInvalidateAllCaches();
        v10 = v12;
      }
      if ( v8 )
      {
        LOBYTE(a4) = a2 == 0;
        EtwTraceCpuCacheFlush(v13, v9, v10, a4, BugCheckOnFailure);
      }
    }
  }
}
