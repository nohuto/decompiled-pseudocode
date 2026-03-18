/*
 * XREFs of ExpSvmDereferenceDevice @ 0x14025E500
 * Callers:
 *     ExFreeSvmAsid @ 0x140033488 (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v3; // r15d
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  unsigned int SessionId; // ebp
  bool v8; // zf
  void (__fastcall *v9)(__int64, int *); // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  PVOID *v12; // rcx
  struct _KTHREAD *v13; // rbx
  ULONG_PTR BugCheckParameter4; // r10
  unsigned __int8 v15; // r12
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  unsigned int v26[2]; // [rsp+30h] [rbp-48h] BYREF
  int v27[4]; // [rsp+38h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v4, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v6 )
    v6[26] |= 1u;
  SessionId = -1;
  v8 = P[6]-- == 1;
  if ( v8 )
  {
    v9 = (void (__fastcall *)(__int64, int *))*((_QWORD *)P + 10);
    v10 = *((_QWORD *)P + 5);
    v27[0] = 7;
    v9(v10, v27);
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[7])(ExpSvmIommuSystemContext, *((_QWORD *)P + 13));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v11 = *(_QWORD **)P;
    v12 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || *v12 != P )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    (*((void (__fastcall **)(_QWORD))P + 7))(*((_QWORD *)P + 5));
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v26[0] = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
  {
    SessionId = MmGetSessionIdEx(v13->ApcState.Process);
    BugCheckParameter4 = 0LL;
  }
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v17) = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v21, v17);
    v26[1] = v21;
    if ( v8 )
      goto LABEL_21;
    v18 = 1 << v21;
    v19 = v21;
    v20 = &v13->LockEntries[v19];
    v17 = ~v18 & (unsigned int)v17;
    if ( (v20->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v20->LockState.0 & 1) == 0
      && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v16
      && v20->LockState.SessionId == SessionId )
    {
      v20->AcquiredByte &= ~1u;
      if ( v20->LockState.0 )
        break;
    }
  }
  if ( !v20 )
  {
LABEL_21:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&ExpSvmDeviceListLock, SessionId, BugCheckParameter4);
    goto LABEL_28;
  }
  v20->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v20->LockState.LockState < 0 )
  {
    KiAbEntryRemoveFromTree((__int64)&v13->LockEntries[v19], v17, v16);
    BugCheckParameter4 = 0LL;
  }
  v26[0] = BugCheckParameter4;
  v26[0] = v20->BoostBitmap.AllFields & 0x1FFFF;
  v20->BoostBitmap.AllFields &= 0xFFFE0000;
  v20->ThreadLocalFlags &= ~1u;
  v20->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)BugCheckParameter4;
  v22 = ((char *)v20 - (char *)v13 - 800) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_28:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v13->Header.Lock, (__int64)&ExpSvmDeviceListLock, v26);
  v24 = v13->SpecialApcDisable + 1;
  v13->SpecialApcDisable = v24;
  if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v23);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v3;
}
