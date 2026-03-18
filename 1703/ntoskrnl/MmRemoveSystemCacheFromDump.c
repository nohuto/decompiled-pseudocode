/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x14021359C
 * Callers:
 *     MmGetDumpRange @ 0x140213238 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140416ED0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14025C680 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rdi
  LONG *SharedVm; // rbx
  unsigned __int8 v5; // bl
  LONG *v6; // rax
  _QWORD v7[18]; // [rsp+30h] [rbp-A8h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[3] = -1LL;
  v7[15] = MiCrashdumpRemovePte;
  v7[17] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v3 = (__int64)AnyMultiplexedVm;
  v7[1] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_14036C958 == KeGetCurrentThread() )
  {
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( !(unsigned int)ExTryAcquireSpinLockSharedAtDpcLevel(SharedVm) )
      KeBugCheckEx(0x1Au, 0x50000uLL, BugCheckParameter2, 0LL, 0LL);
    if ( SharedVm[1] )
      _InterlockedExchange(SharedVm + 1, 0);
    BYTE4(v7[0]) = 17;
  }
  else
  {
    BYTE4(v7[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  MiWalkPageTables((__int64)v7);
  v5 = BYTE4(v7[0]);
  v6 = MiGetSharedVm(v3);
  ExReleaseSpinLockSharedFromDpcLevel(v6);
  if ( v5 != 17 )
    __writecr8(v5);
}
