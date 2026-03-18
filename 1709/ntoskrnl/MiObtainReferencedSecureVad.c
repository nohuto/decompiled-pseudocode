/*
 * XREFs of MiObtainReferencedSecureVad @ 0x1400E9550
 * Callers:
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406EA930 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  ULONG_PTR v6; // rsi
  __int64 Address; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    result = 0LL;
    *a2 = -1073741558;
    return result;
  }
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  Address = MiLocateAddress(v6);
  v8 = Address;
  if ( !Address )
    KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
  --CurrentThread->SpecialApcDisable;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  v9 = v6 >> 12;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (*(_DWORD *)(v8 + 48) & 0x80000) != 0 )
  {
    MiWaitForVadDeletion(v8);
LABEL_11:
    MiUnlockAndDereferenceVad((char *)v8);
    result = 0LL;
    *a2 = -1073741664;
    return result;
  }
  if ( v9 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
    || v9 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
  {
    goto LABEL_11;
  }
  return v8;
}
