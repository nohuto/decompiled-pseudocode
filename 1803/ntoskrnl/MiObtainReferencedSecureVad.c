/*
 * XREFs of MiObtainReferencedSecureVad @ 0x1400E45B0
 * Callers:
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405749A8 (MmStoreAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 */

unsigned __int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, int *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 Address; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v11; // eax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    *a2 = -1073741558;
    return 0LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  Address = MiLocateAddress(v6);
  v8 = Address;
  if ( !Address )
    KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
  --CurrentThread->SpecialApcDisable;
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  v9 = v6 >> 12;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( (*(_DWORD *)(v8 + 48) & 0x20000000) != 0 )
  {
    MiWaitForVadDeletion(v8);
    MiUnlockAndDereferenceVad((PVOID)v8);
    v11 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v11 = -1073741664;
    *a2 = v11;
    return 0LL;
  }
  if ( v9 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
    || v9 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((PVOID)v8);
    *a2 = -1073741664;
    return 0LL;
  }
  return v8;
}
