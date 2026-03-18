/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x14077C21C
 * Callers:
 *     IovAllocateIrp @ 0x140762990 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x1407630DC (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1407637D0 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14076D9A8 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14076DC5C (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x14076DCC4 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14076DDF0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x14076E168 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x14076E1F4 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x14076E848 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14076EA74 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x14076ED00 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x14076ED3C (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x140771C00 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140771E98 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14077C09C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1402518F0 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140251938 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140765038 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
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
      v5 = (_QWORD *)a1[5];
      if ( (unsigned __int64 *)v4[1] != a1 + 4 || (_QWORD *)*v5 != v3 )
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
