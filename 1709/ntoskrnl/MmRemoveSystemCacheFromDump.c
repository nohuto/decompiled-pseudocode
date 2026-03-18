/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x14021B580
 * Callers:
 *     MmGetDumpRange @ 0x14021AFE8 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x14042BF00 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140285F90 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rdi
  LONG *SharedVm; // rbx
  unsigned __int8 v5; // bl
  LONG *v6; // rax
  _QWORD v7[20]; // [rsp+30h] [rbp-B8h] BYREF

  memset(v7, 0, 0x98uLL);
  v7[3] = -1LL;
  v7[16] = MiCrashdumpRemovePte;
  v7[18] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v3 = (__int64)AnyMultiplexedVm;
  v7[1] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_140388B50 == KeGetCurrentThread() )
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
