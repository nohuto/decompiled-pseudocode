/*
 * XREFs of MiDeleteFinalPageTables @ 0x140063178
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkProcessFromSession @ 0x1400630A0 (MiUnlinkProcessFromSession.c)
 *     KeFlushProcessTb @ 0x140063154 (KeFlushProcessTb.c)
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiDeleteTopLevelPage @ 0x14017C69C (MiDeleteTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 TopPteAddress; // rax
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  KIRQL v7; // di
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = 48LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 12);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2);
  TopPteAddress = MiGetTopPteAddress(2147352576LL);
  if ( MI_READ_PTE_LOCK_FREE(TopPteAddress) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 872, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    SharedVm = MiGetSharedVm(BugCheckParameter2 + 1280);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v7 = v6;
    LOBYTE(v8) = v6;
    MiDeleteVirtualAddresses(2147352576, 2147352576, 0, v8, (__int64)v13);
    LOBYTE(v9) = v7;
    MiUnlockWorkingSetExclusive(BugCheckParameter2 + 1280, v9);
    UNLOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter2);
  }
  MiDeleteVadBitmap(BugCheckParameter2);
  if ( (*(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      BugCheckParameter2,
      v2 / 48,
      *(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter2, 1LL);
  KiUnstackDetachProcess(v14, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 440), 0x1Cu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter2 + 40));
  v11 = (unsigned int)MiDeleteTopLevelPage(v10, *(_QWORD *)(BugCheckParameter2 + 40) >> 12) == 3;
  result = v13[1];
  if ( v11 )
    return v13[1] + 1LL;
  return result;
}
