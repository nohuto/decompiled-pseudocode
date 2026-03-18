/*
 * XREFs of HvlSetupPhysicalFaultNotificationQueue @ 0x1401EA214
 * Callers:
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpAllocateOverlayPages @ 0x1401EF5FC (HvlpAllocateOverlayPages.c)
 */

__int64 __fastcall HvlSetupPhysicalFaultNotificationQueue(_QWORD *a1, _DWORD *a2)
{
  void *OverlayPages; // rax
  void *v5; // rbp
  unsigned int v6; // ebx
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // rsi
  __int16 v11; // ax
  int v12; // edi
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v15[3]; // [rsp+40h] [rbp-38h] BYREF

  OverlayPages = (void *)HvlpAllocateOverlayPages();
  v5 = OverlayPages;
  if ( OverlayPages )
  {
    memset(OverlayPages, 0, 0x1000uLL);
    PhysicalAddress = MmGetPhysicalAddress(v5);
    v8 = HvlpAcquireHypercallPage(v14, 1, 0LL, 24LL);
    v9 = HvlpAcquireHypercallPage(v15, 2, 0LL, 8LL);
    *(_DWORD *)(v8 + 4) = 0;
    v10 = (int *)v9;
    *(_DWORD *)v8 = 1;
    *(_QWORD *)(v8 + 8) = PhysicalAddress.QuadPart / 4096;
    *(_QWORD *)(v8 + 16) = 1LL;
    v11 = HvcallCodeVa();
    v12 = *v10;
    LOWORD(PhysicalAddress.LowPart) = v11;
    HvlpReleaseHypercallPage((__int64)v14);
    HvlpReleaseHypercallPage((__int64)v15);
    if ( LOWORD(PhysicalAddress.LowPart) )
    {
      v6 = -1073741823;
    }
    else
    {
      v6 = 0;
      *a1 = v5;
      v5 = 0LL;
      *a2 = v12 << 12;
    }
    if ( v5 )
      MmFreeContiguousMemory(v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
