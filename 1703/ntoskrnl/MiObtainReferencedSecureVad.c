/*
 * XREFs of MiObtainReferencedSecureVad @ 0x140099160
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  ULONG_PTR v6; // rsi
  __int64 Address; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int16 v10; // ax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
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
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  v9 = v6 >> 12;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v8 + 48) & 0x80000) != 0 )
  {
    MiWaitForVadDeletion(v8);
LABEL_9:
    MiUnlockAndDereferenceVad((PVOID)v8);
    result = 0LL;
    *a2 = -1073741664;
    return result;
  }
  if ( v9 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
    || v9 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
  {
    goto LABEL_9;
  }
  return v8;
}
