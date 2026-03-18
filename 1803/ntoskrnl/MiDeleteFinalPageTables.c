/*
 * XREFs of MiDeleteFinalPageTables @ 0x140070A70
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MiUnlinkProcessFromSession @ 0x140070684 (MiUnlinkProcessFromSession.c)
 *     KeFlushProcessTb @ 0x140070738 (KeFlushProcessTb.c)
 *     MiDeleteTopLevelPage @ 0x140070754 (MiDeleteTopLevelPage.c)
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     MiDeleteVirtualAddresses @ 0x140072630 (MiDeleteVirtualAddresses.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter1)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  __int64 v5; // rdi
  unsigned __int64 TopPteAddress; // rax
  __int64 v7; // rcx
  bool v8; // zf
  __int64 result; // rax
  _QWORD v10[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[48]; // [rsp+50h] [rbp-58h] BYREF

  memset(v10, 0, sizeof(v10));
  v2 = 48 * (BugCheckParameter1->DirectoryTableBase >> 12);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v11);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v5 = qword_1403CB680;
      if ( !qword_1403CB680 )
        continue;
    }
    else
    {
      v5 = 2147352576LL;
    }
    TopPteAddress = MiGetTopPteAddress(v5);
    if ( MI_READ_PTE_LOCK_FREE(TopPteAddress) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter1[1].Affinity.Bitmap[7], 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v5, v5, 0LL, v10);
      UNLOCK_ADDRESS_SPACE(CurrentThread, BugCheckParameter1);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter1);
  if ( (*(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter1,
      v2 / 48,
      *(_QWORD *)(v2 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow((__int64)BugCheckParameter1, 1);
  KiUnstackDetachProcess((__int64)v11, 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter1->440, 0x1Eu);
  MiUnlinkProcessFromSession((__int64)BugCheckParameter1);
  KeFlushProcessTb(BugCheckParameter1->DirectoryTableBase);
  v8 = (unsigned int)MiDeleteTopLevelPage(v7, BugCheckParameter1->DirectoryTableBase >> 12) == 3;
  result = v10[1];
  if ( v8 )
    return v10[1] + 1LL;
  return result;
}
