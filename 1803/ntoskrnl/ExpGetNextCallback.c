/*
 * XREFs of ExpGetNextCallback @ 0x14057EE90
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  int v2; // edi
  __int64 *v3; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v7 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v7 = (__int64 *)Object[5];
  while ( v7 != &ExpCallbackListHead )
  {
    v3 = v7 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 5)) )
    {
      v2 = 1;
      break;
    }
    v7 = (__int64 *)*v7;
  }
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL, v5, v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v3 & -(__int64)(v2 != 0);
}
