/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x14082B51C
 * Callers:
 *     IovAllocateIrp @ 0x1408115F0 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x140811D70 (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1408124C0 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14081C7E8 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14081CAB0 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14081CB20 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14081CC4C (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x14081CFD4 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x14081D05C (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x14081D818 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14081DA40 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x14081DCCC (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x14081DD08 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x140820B50 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140820DE8 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14082B39C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1402AB270 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1402AB2B8 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140813EE4 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // rdi
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)a1 + 6) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v9);
    v2 = *a1;
    if ( *a1 )
    {
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64, __int64))a1[6])(a1, *a1, 1LL);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v2 >> 12))),
        v2);
    }
    ViIrpDatabaseReleaseLockExclusive(v9);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v9);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v3 = a1 + 4;
      v4 = (_QWORD *)a1[4];
      if ( (unsigned __int64 *)v4[1] != a1 + 4 || (v5 = (_QWORD *)a1[5], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      a1[5] = (unsigned __int64)(a1 + 4);
      *v3 = v3;
      if ( (_QWORD *)*v4 == v4 )
      {
        v6 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)(((__int64)v4 - ViIrpDatabase) >> 4));
        *v6 = 0LL;
        v6[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v9);
  }
  v7 = *((unsigned __int8 *)a1 + 16);
  v8 = (unsigned __int64 *)a1[4];
  KxReleaseSpinLock(a1 + 1);
  __writecr8(v7);
  if ( v8 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    ((void (__fastcall *)(unsigned __int64 *, unsigned __int64, __int64))a1[6])(a1, *a1, 2LL);
  }
}
