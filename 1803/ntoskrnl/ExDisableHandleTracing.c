/*
 * XREFs of ExDisableHandleTracing @ 0x1402B7DA4
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14077A4B8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExDereferenceHandleDebugInfo @ 0x1407BD294 (ExDereferenceHandleDebugInfo.c)
 */

_QWORD *__fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  struct _KTHREAD *v8; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v10; // r12
  unsigned int v11; // r8d
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *result; // rax
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v7 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v7 && (*(_DWORD *)(v7 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3, v4, v5, v6);
  v19 = 0;
  v8 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v8->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v8->SpecialApcDisable;
  v10 = ++v8->AbAllocationRegionCount;
  v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v11);
    v20 = v16;
    if ( v15 )
      goto LABEL_16;
    v12 = 1 << v16;
    v13 = v16;
    v14 = &v8->LockEntries[v13];
    v11 &= ~v12;
    if ( (v14->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v14->LockState.0 & 1) == 0
      && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && v14->LockState.SessionId == (_DWORD)SessionId )
    {
      v14->AcquiredByte &= ~1u;
      if ( v14->LockState.0 )
        break;
    }
  }
  if ( !v14 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v3, (unsigned int)SessionId, 0LL);
    goto LABEL_23;
  }
  v14->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v14->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v8->LockEntries[v13].TreeNode, SessionId);
  v19 = 0;
  v19 = v14->BoostBitmap.AllFields & 0x1FFFF;
  v14->BoostBitmap.AllFields &= 0xFFFE0000;
  v14->ThreadLocalFlags &= ~1u;
  v14->LockState.0 = 0LL;
  v17 = ((char *)v14 - (char *)v8 - 800) / 96;
  if ( v10 == 1 )
    v8->AbEntrySummary |= 1 << v17;
  else
    _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v17);
LABEL_23:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, v3, (__int64)&v19);
  v15 = v8->SpecialApcDisable++ == -1;
  if ( v15 && ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery();
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v7 )
    return (_QWORD *)ExDereferenceHandleDebugInfo(a1, v7);
  return result;
}
