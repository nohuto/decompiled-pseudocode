/*
 * XREFs of MmFreeContiguousMemory @ 0x140123200
 * Callers:
 *     HvlpFreeOverlayPages @ 0x140136B90 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F232C (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x14076CDD8 (ViReleaseDmaAdapter.c)
 * Callees:
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140764C70 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  SIZE_T v8; // rsi
  SIZE_T v9; // rdi
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // [rsp+30h] [rbp-48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-30h] BYREF

  if ( (((unsigned int)MiGetSystemRegionType((unsigned __int64)BaseAddress) - 5) & 0xFFFFFFF7) != 0 )
  {
    v2 = 4LL;
    v3 = v14;
    v4 = 4;
    v5 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      *v3 = v5;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v3;
      --v2;
    }
    while ( v2 );
    do
    {
      v6 = MI_READ_PTE_LOCK_FREE(v14[v4 - 1]);
      v13 = v6;
    }
    while ( (v6 & 0x80u) == 0LL && v4 );
    v7 = v6 >> 63;
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    ExFreeLargePool((ULONG_PTR)BaseAddress, (int *)&v11, &NumberOfBytes, v7 != 0 ? 0x200 : 0);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || (_DWORD)v11 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, (unsigned int)v11);
    v8 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v8 = NumberOfBytes + 4096;
    v9 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v8);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v9);
    v10 = MI_READ_PTE_LOCK_FREE(&v13);
    MiFreeContiguousPages(&MiSystemPartition, (v10 >> 12) & 0xFFFFFFFFFLL, v9);
  }
  else
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
}
