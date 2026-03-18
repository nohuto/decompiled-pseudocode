/*
 * XREFs of IopPassiveInterruptWorker @ 0x1401F88D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401F86F0 (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x140204C2C (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1406951FC (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v4; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(a2) = 1;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock((PKSPIN_LOCK)P + 7);
    v4 = (KSPIN_LOCK *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KxReleaseSpinLock(v4);
    __writecr8(CurrentIrql);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0, 0LL);
  }
  P[64] = 0;
  KxReleaseSpinLock(v4);
  __writecr8(CurrentIrql);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    ((void (__fastcall *)(_QWORD, __int64))off_14033B488[0])(*((unsigned int *)P + 6), 2LL);
  IopDereferencePassiveInterruptBlock(P);
}
