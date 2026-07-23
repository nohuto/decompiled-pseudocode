/*
 * XREFs of MiCloneReserveVadCommit @ 0x140003268
 * Callers:
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCloneReserveVadCommit(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v3; // ebp
  unsigned __int64 v4; // r8
  unsigned __int16 *v6; // r12
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  KIRQL v12; // di
  int v13; // r9d
  __int64 NextPageTable; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // rsi
  struct _KTHREAD *v18; // rbx
  unsigned int v19; // edx
  unsigned __int8 v20; // r12
  unsigned int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int16 v26; // ax
  _DWORD v28[2]; // [rsp+30h] [rbp-A8h] BYREF
  char v29[8]; // [rsp+38h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-98h]
  _KPROCESS *Process; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  unsigned __int16 *v34; // [rsp+60h] [rbp-78h]
  char v35[48]; // [rsp+68h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  BugCheckParameter1 = a2;
  Process = CurrentThread->ApcState.Process;
  v6 = &Process[1].IdealNode[12];
  v7 = *(unsigned int *)(a1 + 24) | v4;
  v34 = &Process[1].IdealNode[12];
  v8 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v9 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  if ( v8 <= v9 )
  {
    while ( 1 )
    {
      SharedVm = MiGetSharedVm(v6);
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v12 = v11;
      LOBYTE(v13) = v11;
      NextPageTable = MiGetNextPageTable(v8, v9, 0, v13, 4, (__int64)v29);
      LOBYTE(v15) = v12;
      v16 = NextPageTable;
      MiUnlockWorkingSetExclusive(v6, v15);
      if ( !v16 )
        break;
      v32 = (v16 >> 9) & 0x7FFFFFFFF8LL;
      v33 = 0LL;
      KiStackAttachProcess(BugCheckParameter1);
      --CurrentThread->SpecialApcDisable;
      v17 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
      v3 = MiCommitPageTablesForVad(a1, (__int64)(v16 << 25) >> 16, (__int64)(v16 << 25) >> 16);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v17);
      v28[0] = 0;
      v18 = KeGetCurrentThread();
      v19 = (unsigned int)MiGetSystemRegionType(v17) == 1 ? MmGetSessionIdEx(v18->ApcState.Process) : -1;
      --v18->SpecialApcDisable;
      v20 = ++v18->AbAllocationRegionCount;
      v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v22 = !_BitScanReverse((unsigned int *)&v23, v21);
        v28[1] = v23;
        if ( v22 )
          break;
        v24 = (__int64)&v18->LockEntries[v23];
        v21 &= ~(1 << v23);
        if ( (*(_BYTE *)(v24 + 26) & 1) != 0
          && (*(_DWORD *)(v24 + 32) & 1) == 0
          && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v24 + 40) == v19 )
        {
          *(_BYTE *)(v24 + 26) &= ~1u;
          if ( *(_QWORD *)(v24 + 32) )
          {
            if ( v24 )
            {
              *(_BYTE *)(v24 + 32) |= 2u;
              if ( *(__int64 *)(v24 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
              v28[0] = 0;
              v28[0] = *(_DWORD *)(v24 + 88) & 0x1FFFF;
              *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v24 + 25) &= ~1u;
              *(_QWORD *)(v24 + 32) = 0LL;
              v25 = (v24 - (__int64)v18 - 800) / 96;
              if ( v20 == 1 )
                v18->AbEntrySummary |= 1 << v25;
              else
                _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
              goto LABEL_19;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v18->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, v19, 0LL);
LABEL_19:
      --v18->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v18, v17, v28);
      v26 = v18->SpecialApcDisable + 1;
      v18->SpecialApcDisable = v26;
      if ( !v26 && ($69CD3F157F9F39B6F7113F2231989901 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      KiUnstackDetachProcess(v35, 0LL);
      if ( v3 < 0 )
        break;
      v8 = (((v32 - 0x97FFFFFFFF8LL) << 25) - v33) >> 16;
      if ( v8 > v9 )
        break;
      v6 = v34;
    }
  }
  return (unsigned int)v3;
}
