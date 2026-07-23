/*
 * XREFs of ExpSvmDereferenceDevice @ 0x1402BC3A0
 * Callers:
 *     ExFreeSvmAsid @ 0x1400C8CA8 (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1402BB7A0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // r14d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  unsigned int SessionId; // esi
  bool v11; // zf
  void (__fastcall *v12)(__int64, int *); // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  PVOID *v15; // rcx
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // r15
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  _DWORD v25[2]; // [rsp+30h] [rbp-48h] BYREF
  int v26[4]; // [rsp+38h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v9 = v4;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v4, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  SessionId = -1;
  v11 = P[6]-- == 1;
  if ( v11 )
  {
    v12 = (void (__fastcall *)(__int64, int *))*((_QWORD *)P + 10);
    v13 = *((_QWORD *)P + 5);
    v26[0] = 7;
    v12(v13, v26);
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[7])(ExpSvmIommuSystemContext, *((_QWORD *)P + 14));
    _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
    v14 = *(_QWORD **)P;
    if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v15 = (PVOID *)*((_QWORD *)P + 1), *v15 != P) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    (*((void (__fastcall **)(_QWORD))P + 7))(*((_QWORD *)P + 5));
    ExFreePoolWithTag(P, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock, v5, v6, v7);
  v25[0] = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  LODWORD(v18) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v22, v18);
    v25[1] = v22;
    if ( v11 )
      goto LABEL_21;
    v19 = 1 << v22;
    v20 = v22;
    v21 = &v16->LockEntries[v20];
    v18 = ~v19 & (unsigned int)v18;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_21:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&ExpSvmDeviceListLock, SessionId, 0LL);
    goto LABEL_28;
  }
  v21->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v21->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v20].TreeNode, v18);
  v25[0] = 0;
  v25[0] = v21->BoostBitmap.AllFields & 0x1FFFF;
  v21->BoostBitmap.AllFields &= 0xFFFE0000;
  v21->ThreadLocalFlags &= ~1u;
  v21->LockState.0 = 0LL;
  v23 = ((char *)v21 - (char *)v16 - 800) / 96;
  if ( v17 == 1 )
    v16->AbEntrySummary |= 1 << v23;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
LABEL_28:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&ExpSvmDeviceListLock, (__int64)v25);
  v11 = v16->SpecialApcDisable++ == -1;
  if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v2;
}
