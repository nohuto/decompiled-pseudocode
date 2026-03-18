/*
 * XREFs of IopPassiveInterruptWorker @ 0x1401FE9E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1401FE7E0 (IopAcquirePassiveInterruptBlockLock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401FE808 (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1406C0FCC (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  KSPIN_LOCK *v3; // rcx
  unsigned __int8 v4[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  LOBYTE(a2) = 1;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  while ( 1 )
  {
    IopAcquirePassiveInterruptBlockLock((__int64)P, v4);
    v3 = (KSPIN_LOCK *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KxReleaseSpinLock(v3);
    __writecr8(v4[0]);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0, 0LL);
  }
  P[64] = 0;
  KxReleaseSpinLock(v3);
  __writecr8(v4[0]);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    ((void (__fastcall *)(_QWORD, __int64))off_1403534B8[0])(*((unsigned int *)P + 6), 2LL);
  IopDereferencePassiveInterruptBlock((PVOID **)P);
}
