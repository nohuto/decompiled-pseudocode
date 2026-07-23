/*
 * XREFs of MiCreateVadEventBitmap @ 0x14056A9D8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400A18B0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     RtlClearAllBitsEx @ 0x14010C850 (RtlClearAllBitsEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *PoolWithTag; // rbx
  int v10; // edi

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 9LL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x77776D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 16) = a4;
    *((_QWORD *)PoolWithTag + 1) = a3;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 72;
    RtlClearAllBitsEx((PRTL_BITMAP_EX)(PoolWithTag + 8));
    MiInsertVadEvent(a2, PoolWithTag, 1);
    return 0LL;
  }
}
