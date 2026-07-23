/*
 * XREFs of ExDisableHandleTracing @ 0x14025A2AC
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1406DFE10 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExDereferenceHandleDebugInfo @ 0x14071705C (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  struct _KTHREAD *v5; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v7; // r13
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 result; // rax
  int v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  v16 = 0;
  v5 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v5->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v5->SpecialApcDisable;
  v7 = ++v5->AbAllocationRegionCount;
  v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
  v9 = !_BitScanReverse((unsigned int *)&v10, v8);
  v17 = v10;
  if ( v9 )
    goto LABEL_16;
  while ( 1 )
  {
    v11 = (__int64)&v5->LockEntries[v10];
    v8 &= ~(1 << v10);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v11 + 40) == (_DWORD)SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
        break;
    }
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v17 = v10;
    if ( v9 )
      goto LABEL_16;
  }
  if ( !v11 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, (unsigned int)SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v11 + 32) |= 2u;
    if ( *(__int64 *)(v11 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11, SessionId);
    v16 = 0;
    v16 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
    *(_DWORD *)(v11 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v11 + 25) &= ~1u;
    *(_QWORD *)(v11 + 32) = 0LL;
    v12 = (v11 - (__int64)v5 - 800) / 96;
    if ( v7 == 1 )
      v5->AbEntrySummary |= 1 << v12;
    else
      _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v12);
  }
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v5->Header.Lock, v3, (unsigned int *)&v16);
  v14 = v5->SpecialApcDisable + 1;
  v5->SpecialApcDisable = v14;
  if ( !v14 && ($69CD3F157F9F39B6F7113F2231989901 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v13);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
    return ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
