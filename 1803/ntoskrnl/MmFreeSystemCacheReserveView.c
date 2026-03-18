/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x14074D06C
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x1402211E0 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall MmFreeSystemCacheReserveView(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v3; // rsi
  ULONG_PTR SystemCacheReverseMap; // rax
  __int16 v5; // ax
  __int64 v6; // rdx
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v8; // r10

  PteAddress = MiGetPteAddress(BugCheckParameter3);
  v3 = PteAddress + 512;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3);
  if ( *(_QWORD *)(SystemCacheReverseMap + 16) )
    KeBugCheckEx(0x1Au, 0x784uLL, SystemCacheReverseMap, BugCheckParameter3, 0LL);
  do
  {
    v5 = MI_READ_PTE_LOCK_FREE(PteAddress);
    if ( (v5 & 1) != 0 || (v5 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v8, BugCheckParameter3, BugCheckParameter4);
    PteAddress += 8LL;
  }
  while ( PteAddress < v3 );
  MiReleaseSystemCacheView(PteAddress - 512, v6);
}
