/*
 * XREFs of MiDereferenceExtendInfo @ 0x14021EE9C
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  void *v3; // rbp
  unsigned int SessionId; // esi
  struct _KTHREAD *v7; // rbx
  unsigned __int8 v8; // r15
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388110, 0LL);
  SessionId = -1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
  v17 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140388110) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  --v7->SpecialApcDisable;
  v8 = ++v7->AbAllocationRegionCount;
  v9 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v9);
    v18 = v14;
    if ( v13 )
      goto LABEL_14;
    v10 = 1 << v14;
    v11 = v14;
    v12 = &v7->LockEntries[v11];
    v9 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140388110 & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
        break;
    }
  }
  if ( !v12 )
  {
LABEL_14:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140388110, SessionId, 0LL);
    goto LABEL_21;
  }
  v12->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v12->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v7->LockEntries[v11].TreeNode);
  v17 = 0;
  v17 = v12->BoostBitmap.AllFields & 0x1FFFF;
  v12->BoostBitmap.AllFields &= 0xFFFE0000;
  v12->ThreadLocalFlags &= ~1u;
  v12->LockState.0 = 0LL;
  v15 = ((char *)v12 - (char *)v7 - 800) / 96;
  if ( v8 == 1 )
    v7->AbEntrySummary |= 1 << v15;
  else
    _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v15);
LABEL_21:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&qword_140388110, (unsigned int *)&v17);
  v13 = v7->SpecialApcDisable++ == -1;
  if ( v13 && ($B476B70DB57F76B110DA5B9238C3E934 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v16);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
