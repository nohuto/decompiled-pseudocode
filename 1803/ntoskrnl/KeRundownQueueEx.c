/*
 * XREFs of KeRundownQueueEx @ 0x14013E1A4
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14013E050 (IopDeleteIoCompletionInternal.c)
 *     KeRundownQueue @ 0x14013FEF0 (KeRundownQueue.c)
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x140742CE8 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x14013E274 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14013E754 (KiAcquireReleaseObjectRundownLockExclusive.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v8; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v5 = (_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == a1 + 24 )
  {
    v6 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v8 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v6;
    *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v5 = v5;
  }
  KeRundownQueueCommon(a1, a1 + 48, a1 + 40, 1, a2);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, 1u, 0, CurrentIrql);
  return v6;
}
