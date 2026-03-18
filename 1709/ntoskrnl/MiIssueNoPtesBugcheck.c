/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x14021A4D4
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1400F0904 (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x1402344B0 (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  unsigned int NumberOfFreeSystemPtes; // eax
  ULONG_PTR v3; // r11
  unsigned int v4; // eax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  if ( MiGetHighestPteConsumer(&BugCheckParameter2a) )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
    KeBugCheckEx(0xD8u, v3, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  }
  v4 = MmGetNumberOfFreeSystemPtes();
  KeBugCheckEx(0x3Fu, 0LL, v1, v4, 0LL);
}
