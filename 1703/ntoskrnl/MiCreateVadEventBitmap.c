/*
 * XREFs of MiCreateVadEventBitmap @ 0x1404C8910
 * Callers:
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x140073BE0 (RtlClearAllBitsEx.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14009AA70 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
