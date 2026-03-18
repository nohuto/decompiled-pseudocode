/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1402577EC
 * Callers:
 *     MmGetDumpRange @ 0x140257488 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140482A34 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  LONG *v5; // rax
  LONG *SharedVm; // rax
  _QWORD v7[22]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[5] = -1LL;
  v7[19] = MiCrashdumpRemovePte;
  v7[21] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v3 = (__int64)AnyMultiplexedVm;
  v7[3] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_1403CBDE8 == KeGetCurrentThread() )
  {
    BYTE4(v7[0]) = 17;
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(SharedVm) )
      KeBugCheckEx(0x1Au, 0x50000uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    LODWORD(v7[0]) = 6;
    BYTE4(v7[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  MiWalkPageTables((int *)v7);
  if ( BYTE4(v7[0]) == 17 )
  {
    MiCheckProcessShadow(v3, 2);
    v5 = MiGetSharedVm(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  }
  else
  {
    MiUnlockWorkingSetShared(v3, BYTE4(v7[0]), v4);
  }
}
