/*
 * XREFs of MmFreeContiguousMemory @ 0x140118130
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14000F4C0 (HvlpFreeOverlayPages.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1401EA214 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F7C84 (IopInitializeInMemoryDumpData.c)
 *     ViReleaseDmaAdapter @ 0x1407AEA94 (ViReleaseDmaAdapter.c)
 * Callees:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1407A6994 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 PteShadow; // rax
  int v8; // r9d
  SIZE_T v9; // rsi
  SIZE_T v10; // rdi
  __int64 v11; // rax
  ULONG_PTR v12; // [rsp+30h] [rbp-48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+48h] [rbp-30h] BYREF

  if ( (((unsigned int)MiGetSystemRegionType((unsigned __int64)BaseAddress) - 5) & 0xFFFFFFF7) != 0 )
  {
    v2 = 4LL;
    v3 = v15;
    LODWORD(v4) = 4;
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
      v4 = (unsigned int)(v4 - 1);
      v6 = (__int64 *)v15[v4];
      PteShadow = *v6;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v6, *v6);
      v14 = PteShadow;
    }
    while ( (PteShadow & 0x80u) == 0LL && (_DWORD)v4 );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    v8 = 0;
    if ( PteShadow < 0 )
      v8 = 512;
    ExFreeLargePool((ULONG_PTR)BaseAddress, (unsigned int *)&v12, &NumberOfBytes, v8);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || (_DWORD)v12 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, (unsigned int)v12);
    v9 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v9 = NumberOfBytes + 4096;
    v10 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v9);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v10);
    v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v14);
    MiFreeContiguousPages(&MiSystemPartition, v11, v10);
  }
  else
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
}
