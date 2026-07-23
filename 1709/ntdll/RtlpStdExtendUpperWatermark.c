/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1800FA674
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FA744 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpStdLockAcquire @ 0x1800FA8B4 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800FA8D0 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  char *v5; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  RtlpStdLockAcquire(a1);
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(char **)(a1 + 152);
  BaseAddress = v5;
  v6 = v4 - 8;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v6 < (unsigned __int64)v5 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v5 - 4096) <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = BaseAddress;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v3 = v4 - 8;
    *(_QWORD *)(a1 + 168) = v4 - 8;
    goto LABEL_9;
  }
  if ( v6 >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  RtlpStdLockRelease(a1);
  return v3;
}
