/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x140256A90
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x140080770 (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x14026CD6C (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR NumberOfFreeSystemPtes; // r9
  ULONG_PTR v3; // r11
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  MiGetHighestPteConsumer(&BugCheckParameter2a);
  NumberOfFreeSystemPtes = (unsigned int)MmGetNumberOfFreeSystemPtes();
  if ( v3 )
    KeBugCheckEx(0xD8u, v3, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  KeBugCheckEx(0x3Fu, 0LL, v1, NumberOfFreeSystemPtes, 0LL);
}
