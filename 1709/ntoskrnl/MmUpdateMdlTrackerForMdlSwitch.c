/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x140216690
 * Callers:
 *     VmProbeAndLockPages @ 0x1402785E0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x140278680 (VmUnlockPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MiValidateMdlTracker @ 0x1402162C4 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // r14
  bool v6; // di
  __int64 v7; // rsi
  _QWORD *i; // rbx
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r13
  unsigned __int64 *v11; // r15
  __int64 (__fastcall *v12)(unsigned __int64, __int64); // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r14
  int v16; // eax
  _QWORD *v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  v6 = 0;
  if ( !v5 )
    v5 = PsInitialSystemProcess;
  v7 = *(_QWORD *)&v5[1].ThreadSeed[6];
  if ( !v7 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 24), &LockHandle);
  if ( !a2 )
  {
    i = *(_QWORD **)(v7 + 8);
    if ( !i )
    {
LABEL_22:
      if ( *(_DWORD *)(v7 + 32) )
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter3, v5[1].Affinity.Bitmap[14], *(_QWORD *)&v5[1].ThreadSeed[6]);
      goto LABEL_30;
    }
    v13 = *(_QWORD *)(BugCheckParameter3 + 48);
    while ( 1 )
    {
      v14 = i[8];
      if ( v13 < v14 )
      {
        i = (_QWORD *)*i;
      }
      else
      {
        if ( v13 <= v14 )
        {
          i[3] = BugCheckParameter3;
          MiValidateMdlTracker((ULONG_PTR)i, 1);
          RtlAvlRemoveNode((unsigned __int64 *)(v7 + 8), (__int64)i);
          v11 = (unsigned __int64 *)v7;
          v12 = (__int64 (__fastcall *)(unsigned __int64, __int64))MiLockTrackerCompare;
          v10 = BugCheckParameter3;
          goto LABEL_25;
        }
        i = (_QWORD *)i[1];
      }
      if ( !i )
        goto LABEL_22;
    }
  }
  for ( i = *(_QWORD **)v7; ; i = (_QWORD *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        if ( *(_DWORD *)(v7 + 32) )
          KeBugCheckEx(0x76u, 8uLL, BugCheckParameter3, v5[1].Affinity.Bitmap[14], *(_QWORD *)&v5[1].ThreadSeed[6]);
        goto LABEL_30;
      }
      v9 = i[3];
      if ( BugCheckParameter3 >= v9 )
        break;
      i = (_QWORD *)*i;
    }
    if ( BugCheckParameter3 <= v9 )
      break;
  }
  MiValidateMdlTracker((ULONG_PTR)i, 1);
  i[3] &= ~0x8000000000000000uLL;
  RtlAvlRemoveNode((unsigned __int64 *)v7, (__int64)i);
  v10 = *(_QWORD *)(BugCheckParameter3 + 48);
  v11 = (unsigned __int64 *)(v7 + 8);
  v12 = MiLockSwitchedMdlTrackerCompare;
LABEL_25:
  v15 = (_QWORD *)*v11;
  if ( !*v11 )
    goto LABEL_29;
  while ( 1 )
  {
    v16 = v12(v10, (__int64)v15);
    if ( v16 > 0 )
      break;
    if ( v16 >= 0 )
      KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v15, BugCheckParameter3, *(_QWORD *)(v7 + 16));
    v17 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_29;
LABEL_34:
    v15 = v17;
  }
  v17 = (_QWORD *)v15[1];
  if ( v17 )
    goto LABEL_34;
  v6 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(v11, (unsigned __int64)v15, v6, (unsigned __int64)i);
LABEL_30:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
