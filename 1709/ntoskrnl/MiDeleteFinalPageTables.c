/*
 * XREFs of MiDeleteFinalPageTables @ 0x1400B7F8C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     KeFlushProcessTb @ 0x1400B8188 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x1400B81BC (MiUnlinkProcessFromSession.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiDeleteTopLevelPage @ 0x14017BDD4 (MiDeleteTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x14017BF70 (MiDeleteProcessShadow.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDeleteVadBitmap @ 0x1404FB8C4 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter1)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 *TopPteAddress; // rcx
  __int64 PteShadow; // rax
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  KIRQL v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = 48 * (BugCheckParameter1->DirectoryTableBase >> 12);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v14);
  TopPteAddress = (__int64 *)MiGetTopPteAddress(0x7FFE0000uLL);
  PteShadow = *TopPteAddress;
  if ( (unsigned __int64)TopPteAddress >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)TopPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
  {
    PteShadow = MiReadPteShadow(TopPteAddress, PteShadow);
  }
  if ( PteShadow )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter1[1].Affinity.Bitmap[7], 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[12]);
    v7 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v8 = v7;
    MiDeleteVirtualAddresses(0x7FFE0000uLL, 0x7FFE0000uLL, 0, v7, (__int64)v13);
    LOBYTE(v9) = v8;
    MiUnlockWorkingSetExclusive((__int64)&BugCheckParameter1[1].IdealNode[12], v9);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter1);
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter1);
  if ( (*(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter1,
      v2 / 48,
      *(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter1, 1LL);
  KiUnstackDetachProcess(v14, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter1->440, 0x1Du);
  MiUnlinkProcessFromSession(BugCheckParameter1);
  KeFlushProcessTb(BugCheckParameter1->DirectoryTableBase);
  v11 = (unsigned int)MiDeleteTopLevelPage(v10, BugCheckParameter1->DirectoryTableBase >> 12) == 3;
  result = v13[1];
  if ( v11 )
    return v13[1] + 1LL;
  return result;
}
