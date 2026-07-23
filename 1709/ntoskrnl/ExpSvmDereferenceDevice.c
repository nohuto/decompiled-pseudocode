/*
 * XREFs of ExpSvmDereferenceDevice @ 0x140288050
 * Callers:
 *     ExFreeSvmAsid @ 0x1401288A8 (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402874A0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // r14d
  PRTL_BALANCED_NODE v4; // rax
  signed __int8 v5; // cf
  PRTL_BALANCED_NODE v6; // rdi
  unsigned int SessionId; // esi
  bool v8; // zf
  void (__fastcall *v9)(__int64, int *); // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  PVOID *v12; // rcx
  struct _KTHREAD *v13; // rbx
  unsigned __int8 v14; // r15
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v23[2]; // [rsp+30h] [rbp-48h] BYREF
  int v24[4]; // [rsp+38h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (__int64)v4, (__int16 *)&ExpSvmDeviceListLock);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  SessionId = -1;
  v8 = P[6]-- == 1;
  if ( v8 )
  {
    v9 = (void (__fastcall *)(__int64, int *))*((_QWORD *)P + 10);
    v10 = *((_QWORD *)P + 5);
    v24[0] = 7;
    v9(v10, v24);
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[7])(ExpSvmIommuSystemContext, *((_QWORD *)P + 15));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v11 = *(_QWORD **)P;
    if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    (*((void (__fastcall **)(_QWORD))P + 7))(*((_QWORD *)P + 5));
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  v23[0] = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  --v13->SpecialApcDisable;
  v14 = ++v13->AbAllocationRegionCount;
  v15 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v19, v15);
    v23[1] = v19;
    if ( v8 )
      goto LABEL_21;
    v16 = 1 << v19;
    v17 = v19;
    v18 = &v13->LockEntries[v17];
    v15 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
        break;
    }
  }
  if ( !v18 )
  {
LABEL_21:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&ExpSvmDeviceListLock, SessionId, 0LL);
    goto LABEL_28;
  }
  v18->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v18->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v13->LockEntries[v17].TreeNode);
  v23[0] = 0;
  v23[0] = v18->BoostBitmap.AllFields & 0x1FFFF;
  v18->BoostBitmap.AllFields &= 0xFFFE0000;
  v18->ThreadLocalFlags &= ~1u;
  v18->LockState.0 = 0LL;
  v20 = ((char *)v18 - (char *)v13 - 800) / 96;
  if ( v14 == 1 )
    v13->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v20);
LABEL_28:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v13, (__int64)&ExpSvmDeviceListLock, v23);
  v8 = v13->SpecialApcDisable++ == -1;
  if ( v8 && ($B476B70DB57F76B110DA5B9238C3E934 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v21);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v2;
}
