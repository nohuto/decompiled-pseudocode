/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x1400B0904
 * Callers:
 *     FsRtlProcessFileLock @ 0x140001EC0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAll @ 0x1400B08E0 (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x140224D60 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     FsRtlCompleteLockIrpReal @ 0x140001FE8 (FsRtlCompleteLockIrpReal.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDelete @ 0x140069CC0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140069D58 (FsRtlPrivateResetLowestLockOffset.c)
 *     IoGetRequestorProcess @ 0x1400AA380 (IoGetRequestorProcess.c)
 *     RtlRealSuccessor @ 0x1400B0BF0 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400B0C34 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1400B1024 (FsRtlSplitLocks.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // r13
  int v7; // r12d
  _RTL_SPLAY_LINKS *v8; // r15
  KSPIN_LOCK *v9; // rsi
  KIRQL v10; // al
  _RTL_SPLAY_LINKS *v11; // rbp
  KIRQL v12; // r14
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v14; // r13
  PRTL_SPLAY_LINKS v15; // rax
  __int64 v16; // r8
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v18; // rdi
  _RTL_SPLAY_LINKS *v19; // rbx
  _RTL_SPLAY_LINKS *v20; // r12
  _RTL_SPLAY_LINKS *v21; // rcx
  PRTL_SPLAY_LINKS v22; // r15
  PRTL_SPLAY_LINKS v23; // rbx
  void *v24; // rbx
  void **v25; // r14
  unsigned int v26; // edi
  _RTL_SPLAY_LINKS *v28; // rax
  _RTL_SPLAY_LINKS *v29; // rax
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v31; // rdi
  PVOID v32; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  KIRQL v34; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v36; // rbp
  __int64 v37; // r15
  IRP *v38; // r15
  char v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+38h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v41; // [rsp+40h] [rbp-68h]
  _RTL_SPLAY_LINKS *v42; // [rsp+48h] [rbp-60h] BYREF
  _RTL_SPLAY_LINKS *v43; // [rsp+50h] [rbp-58h] BYREF
  PVOID Entry; // [rsp+58h] [rbp-50h]
  KIRQL v45; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = a4;
  Entry = 0LL;
  v8 = a2;
  v40 = v6;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v9 = (KSPIN_LOCK *)(v6 + 24);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 24));
  v11 = *(_RTL_SPLAY_LINKS **)(v6 + 32);
  v12 = v10;
  v45 = v10;
  if ( v11 )
  {
    for ( i = v11->LeftChild; i; i = i->LeftChild )
      v11 = i;
    v39 = 0;
    while ( 1 )
    {
      v14 = v11 - 1;
      v15 = RtlRealSuccessor(v11);
      Parent = v11[-1].Parent;
      v18 = 0LL;
      v19 = 0LL;
      v43 = 0LL;
      v20 = 0LL;
      v42 = 0LL;
      v21 = v11 - 1;
      v22 = v15;
      v41 = v11 - 1;
      if ( !Parent )
        goto LABEL_15;
      while ( 1 )
      {
        Entry = Parent;
        if ( Parent[1].LeftChild == a2
          && (struct _KPROCESS *)Parent[1].RightChild == a3
          && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
        {
          break;
        }
        v21 = Parent;
        v41 = Parent;
LABEL_9:
        if ( !v20 )
        {
          if ( Parent[2].Parent > v19 )
            v19 = Parent[2].Parent;
          v42 = v19;
        }
        Parent = v21->Parent;
        if ( !v21->Parent )
          goto LABEL_14;
      }
      v28 = v21;
      if ( v20 )
        v28 = v20;
      v20 = v28;
      if ( Parent[2].Parent > v18 )
        v18 = Parent[2].Parent;
      v29 = v14[2].Parent;
      v43 = v18;
      if ( v21->Parent == v29 )
        v14[2].Parent = v21;
      v21->Parent = Parent->Parent;
      if ( !*(_QWORD *)(v40 + 16) )
        break;
      v39 = 1;
LABEL_14:
      if ( v20 )
      {
        if ( v14->Parent )
        {
          FsRtlSplitLocks(&v11[-1], v20, &v43, &v42);
        }
        else
        {
          v9[1] = (KSPIN_LOCK)RtlDelete(v11);
          ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v11[-1]);
        }
      }
LABEL_15:
      if ( v39 )
      {
        KxReleaseSpinLock(v9);
        __writecr8(v45);
        v32 = Entry;
        v6 = v40;
        (*(void (__fastcall **)(__int64, char *))(v40 + 16))(a6, (char *)Entry + 8);
        v45 = KeAcquireSpinLockRaiseToDpc(v9);
        v12 = v45;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v32);
        v22 = (PRTL_SPLAY_LINKS)v9[1];
        v39 = 0;
        if ( v22 )
        {
          for ( j = v22->LeftChild; j; j = j->LeftChild )
            v22 = j;
        }
      }
      else
      {
        v6 = v40;
        v12 = v45;
      }
      v11 = v22;
      if ( !v22 )
      {
        v23 = (PRTL_SPLAY_LINKS)v9[2];
        v8 = a2;
        v7 = a4;
        if ( !v23 )
          goto LABEL_19;
        goto LABEL_36;
      }
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
    v21 = v41;
    goto LABEL_9;
  }
  v23 = *(PRTL_SPLAY_LINKS *)(v6 + 40);
  if ( v23 )
  {
LABEL_36:
    for ( k = v23->LeftChild; k; k = k->LeftChild )
      v23 = k;
    do
    {
      v31 = RtlRealSuccessor(v23);
      if ( v23[2].Parent == v8
        && (struct _KPROCESS *)v23[2].LeftChild == a3
        && (!a5 || HIDWORD(v23[1].RightChild) == v7) )
      {
        v9[2] = (KSPIN_LOCK)RtlDelete(v23);
        if ( *(_QWORD *)(v6 + 16) )
        {
          KxReleaseSpinLock(v9);
          __writecr8(v12);
          (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(v6 + 16))(a6, v23 + 1);
          v34 = KeAcquireSpinLockRaiseToDpc(v9);
          v31 = (PRTL_SPLAY_LINKS)v9[2];
          v12 = v34;
          if ( v31 )
          {
            for ( m = v31->LeftChild; m; m = m->LeftChild )
              v31 = m;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v23);
      }
      v23 = v31;
    }
    while ( v31 );
    v45 = v12;
LABEL_19:
    v24 = (void *)v9[3];
    v25 = (void **)(v9 + 3);
    if ( v24 )
    {
      do
      {
        v36 = *((_QWORD *)v24 + 3);
        v37 = *(_QWORD *)(v36 + 184);
        if ( a2 != *(_RTL_SPLAY_LINKS **)(v37 + 48)
          || a3 != IoGetRequestorProcess(*((PIRP *)v24 + 3))
          || a5 && a4 != *(_DWORD *)(v37 + 16) )
        {
          goto LABEL_74;
        }
        *(_BYTE *)(v36 + 69) = KeAcquireQueuedSpinLock(7uLL);
        v38 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v36 + 104), 0LL);
        if ( !*(_BYTE *)(v36 + 68) )
          v38 = (IRP *)v36;
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v36 + 69));
        if ( v38 )
        {
          v38->IoStatus.Information = 0LL;
          *v25 = *(void **)v24;
          if ( v24 == (void *)v9[4] )
            v9[4] = (KSPIN_LOCK)v25;
          KxReleaseSpinLock(v9);
          __writecr8(v45);
          FsRtlCompleteLockIrpReal(
            *(__int64 (__fastcall **)(__int64, IRP *))(v6 + 8),
            *((_QWORD *)v24 + 2),
            v38,
            -1073741698,
            (NTSTATUS *)&v40,
            0LL);
          v45 = KeAcquireSpinLockRaiseToDpc(v9);
          v25 = (void **)(v9 + 3);
          ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v24);
        }
        else
        {
LABEL_74:
          v25 = (void **)v24;
        }
        v24 = *v25;
      }
      while ( *v25 );
    }
    v12 = v45;
    LOBYTE(v16) = v45;
    FsRtlPrivateCheckWaitingLocks(v6, v9, v16);
    FsRtlPrivateResetLowestLockOffset((__int64 *)v6);
    v26 = 0;
  }
  else
  {
    v26 = -1073741698;
  }
  KxReleaseSpinLock(v9);
  __writecr8(v12);
  return v26;
}
