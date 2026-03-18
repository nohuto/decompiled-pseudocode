/*
 * XREFs of CmpAccountForLogReservation @ 0x1405E1854
 * Callers:
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmpTransInitializeTransaction @ 0x1405E16EC (CmpTransInitializeTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

__int64 __fastcall CmpAccountForLogReservation(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v6; // rcx
  unsigned int appended; // ebx
  LONGLONG rgcbReservation; // [rsp+68h] [rbp+10h] BYREF

  rgcbReservation = 48LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v6 = *(void **)(a1 + 96);
  if ( !a3 )
    rgcbReservation = -rgcbReservation;
  appended = ClfsReserveAndAppendLog(v6, 0LL, 0, 0LL, 0LL, 1u, &rgcbReservation, 0, 0LL);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return appended;
}
