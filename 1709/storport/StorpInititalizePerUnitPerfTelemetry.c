/*
 * XREFs of StorpInititalizePerUnitPerfTelemetry @ 0x1C0062D80
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C0017540 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall StorpInititalizePerUnitPerfTelemetry(LARGE_INTEGER *a1)
{
  __int64 result; // rax
  __int64 QuadPart; // r9
  PVOID Pool; // rax
  PVOID v5; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // r9
  PVOID v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  result = 3221225473LL;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    QuadPart = a1[1].QuadPart;
    a1[235].QuadPart = 0LL;
    a1[237].QuadPart = 0LL;
    Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned int)Size, 0x65546152u, QuadPart);
    a1[235].QuadPart = (__int64)Pool;
    if ( Pool
      && (memset(Pool, 0, (unsigned int)Size),
          v5 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C00563E4, 0x65546152u, a1[1].QuadPart),
          (a1[237].QuadPart = (__int64)v5) != 0) )
    {
      memset(v5, 0, (unsigned int)dword_1C00563E4);
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v7 = a1[1].QuadPart;
      a1[236] = PerformanceCounter;
      v8 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C00563FC, 0x65546152u, v7);
      a1[238].QuadPart = (__int64)v8;
      if ( v8 )
        memset(v8, 0, (unsigned int)dword_1C00563FC);
      a1[239].QuadPart = 0LL;
      result = 0LL;
      a1[240].QuadPart = 0LL;
      a1[324].QuadPart = 0LL;
      a1[325].QuadPart = 0LL;
    }
    else
    {
      v9 = (void *)a1[235].QuadPart;
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x65546152u);
        a1[235].QuadPart = 0LL;
      }
      v10 = (void *)a1[237].QuadPart;
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x65546152u);
        a1[237].QuadPart = 0LL;
      }
      v11 = (void *)a1[238].QuadPart;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x65546152u);
        a1[238].QuadPart = 0LL;
      }
      return 3221225495LL;
    }
  }
  return result;
}
