/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x1407BE144
 * Callers:
 *     IovAllocateIrp @ 0x1407A4620 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x1407A4DA4 (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1407A54F0 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1407AF668 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1407AF928 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x1407AF990 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1407AFABC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x1407AFE34 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x1407AFEBC (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x1407B0668 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x1407B06EC (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1407B0894 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1407B0B20 (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1407B0B5C (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1407B39A0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1407B3C38 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1407BDFC4 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140278160 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1402781A8 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1407A6D64 (VfUtilAddressRangeRemoveCheckEmpty.c)
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
