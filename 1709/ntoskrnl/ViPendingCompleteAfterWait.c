/*
 * XREFs of ViPendingCompleteAfterWait @ 0x1407B3C38
 * Callers:
 *     ViPendingCompleteAtDPC @ 0x1407B3D70 (ViPendingCompleteAtDPC.c)
 *     ViPendingWorkerThread @ 0x1407B3FB0 (ViPendingWorkerThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140278160 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1402781A8 (ViIrpDatabaseReleaseLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1407A6D64 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1407BE144 (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall ViPendingCompleteAfterWait(char *P)
{
  _QWORD *v2; // rdi
  KIRQL v3; // al
  IRP *v4; // r15
  __int64 v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *v7; // rbp
  unsigned __int64 v9; // rbx
  unsigned int (__fastcall *CompletionRoutine)(_QWORD, _QWORD, _QWORD); // rax
  KIRQL v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)P + 42) == 1 )
    KeWaitForSingleObject(P + 104, Executive, 0, 0, 0LL);
  v2 = *(_QWORD **)P;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)P + 8LL));
  v4 = (IRP *)*v2;
  v5 = v2[27];
  *((_BYTE *)v2 + 16) = v3;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  *((_DWORD *)v2 + 14) &= ~0x10u;
  if ( !v5 || (v7 = *(void **)(v5 + 40)) == 0LL )
    v7 = 0LL;
  if ( (*((_DWORD *)v2 + 6))-- == 1 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v11);
    v9 = *v2;
    ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v2[6])(v2, *v2, 1LL);
    *v2 = 0LL;
    VfUtilAddressRangeRemoveCheckEmpty(
      (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v9 >> 12))),
      v9);
    ViIrpDatabaseReleaseLockExclusive(v11);
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 5);
  VfIrpDatabaseEntryReleaseLock(v2);
  CompletionRoutine = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))CurrentStackLocation[-1].CompletionRoutine;
  if ( !CompletionRoutine || CompletionRoutine(*((_QWORD *)P + 1), v4, CurrentStackLocation[-1].Context) != -1073741802 )
    IofCompleteRequest(v4, P[172]);
  if ( v7 )
    ObfDereferenceObject(v7);
  ExFreePoolWithTag(P, 0);
}
