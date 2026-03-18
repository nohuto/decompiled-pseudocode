/*
 * XREFs of PspGetNextJob @ 0x1405352AC
 * Callers:
 *     PspGetNextSilo @ 0x140535274 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x140536480 (PspEnforceLimits.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockJobListShared @ 0x14053535C (PspUnlockJobListShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v2; // rbp
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  v4 = (__int64 *)PspJobList;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v2 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  PspUnlockJobListShared(CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
