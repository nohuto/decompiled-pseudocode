/*
 * XREFs of MmResourcesAvailable @ 0x1400815F0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r13
  int v4; // esi
  ULONG_PTR v8; // r11
  unsigned __int64 v9; // r12
  int v10; // edi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  int v23; // r14d
  struct _KEVENT *v24; // rcx
  struct _KEVENT *v25; // rcx
  struct _KTHREAD *v26; // r13
  unsigned int SessionId; // edx
  unsigned int v28; // r8d
  bool v29; // zf
  __int64 v30; // rcx
  _KLOCK_ENTRY *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v37; // [rsp+B0h] [rbp+18h] BYREF
  _KLOCK_ENTRY *v38; // [rsp+B8h] [rbp+20h]

  v3 = &MiSystemPartition;
  v4 = 0;
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v10 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v11 = MiState[0] - qword_140388018;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v11 = qword_140389358 - qword_140389348;
LABEL_4:
    v12 = v11 << 12;
    goto LABEL_5;
  }
  v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v20 = (unsigned __int64)*(unsigned int *)(v19 + 7996) << 21;
  v21 = *(_QWORD *)(v19 + 208) << 12;
  v22 = v20 - v21;
  if ( v20 <= v21 )
    v22 = 0LL;
  v12 = ((0x10000LL - *(unsigned int *)(v19 + 8004)) << 21) + v22;
  v3 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v9 + 3180));
LABEL_5:
  v13 = 0;
  if ( a3 == 16 )
    v14 = a2 + 0x80000;
  else
    v14 = a2 + 0x200000;
  if ( v14 <= v12 )
  {
    if ( v10 && ((v15 = v3[633], v16 = v3[790], v16 > v15) ? (v17 = 0LL) : (v17 = v15 - v16), v8 > v17) )
    {
      MiIssuePageExtendRequest(v3, v8, 2LL, 0LL);
    }
    else
    {
      if ( a2 + 10485760 < v12 || v3[722] < 0x40000 )
        return 1LL;
      v13 = 1;
    }
  }
  v23 = a1 & 0x20;
  if ( !v23 )
  {
    if ( v10 )
    {
      ++dword_1403880A0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140389318, 0LL);
      v25 = (struct _KEVENT *)v3[30];
      if ( !v25->Header.SignalState )
        KePulseEvent(v25, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140389318, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140389318);
      v37 = 0;
      v26 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_140389318) == 1 )
        SessionId = MmGetSessionIdEx(v26->ApcState.Process);
      else
        SessionId = -1;
      --v26->SpecialApcDisable;
      ++v26->AbAllocationRegionCount;
      v28 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v26->AbAllocationRegionCount;
      v29 = !_BitScanReverse((unsigned int *)&v30, v28);
      if ( v29 )
        goto LABEL_55;
      while ( 1 )
      {
        v28 &= ~(1 << v30);
        v31 = &v26->LockEntries[v30];
        v38 = v31;
        if ( (v31->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v31->LockState.0 & 1) == 0
          && (*(_QWORD *)&v31->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140389318 & 0x7FFFFFFFFFFFFFFCLL)
          && v31->LockState.SessionId == SessionId )
        {
          v31->AcquiredByte &= ~1u;
          if ( v31->LockState.0 )
            break;
        }
        v29 = !_BitScanReverse((unsigned int *)&v30, v28);
        if ( v29 )
          goto LABEL_55;
      }
      if ( !v31 )
      {
LABEL_55:
        if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v26, (ULONG_PTR)&qword_140389318, SessionId, 0LL);
      }
      else
      {
        v31->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v31->LockState.LockState < 0 )
        {
          KiAbEntryRemoveFromTree(&v31->TreeNode);
          v31 = v38;
        }
        v37 = 0;
        v37 = v31->BoostBitmap.AllFields & 0x1FFFF;
        v31->BoostBitmap.AllFields &= 0xFFFE0000;
        v31->ThreadLocalFlags &= ~1u;
        v31->LockState.0 = 0LL;
        v32 = ((char *)v31 - (char *)v26 - 800) / 96;
        if ( AbAllocationRegionCount == 1 )
          v26->AbEntrySummary |= 1 << v32;
        else
          _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v32);
      }
      --v26->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v26, &qword_140389318, &v37);
      v29 = v26->SpecialApcDisable++ == -1;
      if ( v29 && ($B476B70DB57F76B110DA5B9238C3E934 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    else
    {
      ++dword_14038809C;
      KeAcquireInStackQueuedSpinLock(v3 + 600, &LockHandle);
      v24 = (struct _KEVENT *)v3[32];
      if ( !v24->Header.SignalState )
        KePulseEvent(v24, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    MiFreeExcessSegments();
  }
  if ( !v13 )
  {
    LOBYTE(v4) = a3 != 16;
    v33 = (unsigned int)(v4 + 1);
    if ( v10 )
    {
      if ( v23 )
      {
        ++*((_DWORD *)&MiState[9] + v33);
        ++*(_DWORD *)(v9 + 88);
      }
      else
      {
        ++*((_DWORD *)&MiState[7] + v33 + 1);
      }
    }
    else
    {
      ++*((_DWORD *)&MiState[6] + v33);
    }
    ++dword_140388058;
  }
  return v13;
}
