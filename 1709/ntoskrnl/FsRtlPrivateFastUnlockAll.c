/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x1401053A4
 * Callers:
 *     FsRtlFastUnlockAll @ 0x140105380 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1401576D0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x1401E7730 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x140105680 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x140106520 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140106964 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106C24 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x140106C78 (FsRtlSplitLocks.c)
 *     IoGetRequestorProcess @ 0x140109620 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401577FC (FsRtlCompleteLockIrpReal.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  _QWORD *v6; // r13
  PRTL_SPLAY_LINKS v7; // rdi
  int v8; // r12d
  _RTL_SPLAY_LINKS *v9; // r15
  KIRQL v10; // al
  __int64 v11; // r8
  _RTL_SPLAY_LINKS *v12; // rbp
  KIRQL v13; // r14
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v15; // r12
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v18; // rbx
  _RTL_SPLAY_LINKS *v19; // rcx
  PRTL_SPLAY_LINKS v20; // r15
  _RTL_SPLAY_LINKS *v21; // rdx
  PRTL_SPLAY_LINKS v22; // rbx
  void *v23; // rbx
  void **v24; // r14
  _RTL_SPLAY_LINKS *v26; // rax
  _RTL_SPLAY_LINKS *v27; // rax
  _RTL_SPLAY_LINKS *k; // rax
  PVOID v29; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  KIRQL v31; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v33; // rbp
  __int64 v34; // r15
  KIRQL v35; // dl
  char v36; // [rsp+30h] [rbp-78h]
  _RTL_SPLAY_LINKS *v37; // [rsp+38h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v38; // [rsp+40h] [rbp-68h] BYREF
  PRTL_SPLAY_LINKS v39; // [rsp+48h] [rbp-60h] BYREF
  PVOID Entry; // [rsp+50h] [rbp-58h]
  _RTL_SPLAY_LINKS *v41; // [rsp+58h] [rbp-50h]
  KIRQL v42; // [rsp+B0h] [rbp+8h]

  v6 = *(_QWORD **)(a1 + 24);
  v7 = 0LL;
  Entry = 0LL;
  v8 = a4;
  v9 = a2;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v12 = (_RTL_SPLAY_LINKS *)v6[4];
  v13 = v10;
  v42 = v10;
  if ( v12 )
  {
    for ( i = v12->LeftChild; i; i = i->LeftChild )
      v12 = i;
    v36 = 0;
    while ( 1 )
    {
      v15 = v12 - 1;
      v16 = RtlRealSuccessor(v12);
      Parent = v12[-1].Parent;
      v18 = 0LL;
      v39 = 0LL;
      v19 = v12 - 1;
      v37 = v12 - 1;
      v20 = v16;
      v38 = 0LL;
      v21 = 0LL;
      if ( !Parent )
      {
        v7 = 0LL;
        goto LABEL_15;
      }
      while ( 1 )
      {
        Entry = Parent;
        if ( Parent[1].LeftChild == a2
          && (struct _KPROCESS *)Parent[1].RightChild == a3
          && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
        {
          break;
        }
        v19 = Parent;
        v37 = Parent;
LABEL_9:
        if ( !v21 )
        {
          if ( Parent[2].Parent > v18 )
            v18 = Parent[2].Parent;
          v38 = v18;
        }
        Parent = v19->Parent;
        if ( !v19->Parent )
          goto LABEL_14;
      }
      v26 = Parent[2].Parent;
      if ( !v21 )
        v21 = v19;
      v41 = v21;
      if ( v26 > v7 )
        v7 = v26;
      v27 = v15[2].Parent;
      v39 = v7;
      if ( v19->Parent == v27 )
        v15[2].Parent = v19;
      v19->Parent = Parent->Parent;
      if ( !v6[2] )
        break;
      v36 = 1;
LABEL_14:
      v7 = 0LL;
      if ( v21 )
      {
        if ( v15->Parent )
        {
          FsRtlSplitLocks(&v12[-1], v21, &v39, &v38);
        }
        else
        {
          v6[4] = RtlDelete(v12);
          ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v12[-1]);
        }
      }
LABEL_15:
      if ( v36 )
      {
        KxReleaseSpinLock(v6 + 3);
        __writecr8(v42);
        v29 = Entry;
        ((void (__fastcall *)(__int64, char *))v6[2])(a6, (char *)Entry + 8);
        v42 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
        v13 = v42;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v29);
        v20 = (PRTL_SPLAY_LINKS)v6[4];
        v36 = 0;
        if ( v20 )
        {
          for ( j = v20->LeftChild; j; j = j->LeftChild )
            v20 = j;
        }
      }
      else
      {
        v13 = v42;
      }
      v12 = v20;
      if ( !v20 )
      {
        v9 = a2;
        v8 = a4;
        goto LABEL_19;
      }
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
    v19 = v37;
    v21 = v41;
    goto LABEL_9;
  }
  if ( v6[5] )
  {
LABEL_19:
    v22 = (PRTL_SPLAY_LINKS)v6[5];
    if ( v22 )
    {
      for ( k = v22->LeftChild; k; k = k->LeftChild )
        v22 = k;
      do
      {
        v7 = RtlRealSuccessor(v22);
        if ( v22[2].Parent == v9
          && (struct _KPROCESS *)v22[2].LeftChild == a3
          && (!a5 || HIDWORD(v22[1].RightChild) == v8) )
        {
          v6[5] = RtlDelete(v22);
          if ( v6[2] )
          {
            KxReleaseSpinLock(v6 + 3);
            __writecr8(v13);
            ((void (__fastcall *)(__int64, _RTL_SPLAY_LINKS *))v6[2])(a6, &v22[1]);
            v31 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
            v7 = (PRTL_SPLAY_LINKS)v6[5];
            v13 = v31;
            if ( v7 )
            {
              for ( m = v7->LeftChild; m; m = m->LeftChild )
                v7 = m;
            }
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v22);
        }
        v22 = v7;
      }
      while ( v7 );
      v42 = v13;
    }
    v23 = (void *)v6[6];
    v24 = (void **)(v6 + 6);
    if ( v23 )
    {
      do
      {
        v33 = *((_QWORD *)v23 + 3);
        v34 = *(_QWORD *)(v33 + 184);
        if ( a2 != *(_RTL_SPLAY_LINKS **)(v34 + 48)
          || a3 != IoGetRequestorProcess(*((PIRP *)v23 + 3))
          || a5 && a4 != *(_DWORD *)(v34 + 16) )
        {
          goto LABEL_76;
        }
        *(_BYTE *)(v33 + 69) = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)(v33 + 104), 0LL);
        v35 = *(_BYTE *)(v33 + 69);
        if ( *(_BYTE *)(v33 + 68) )
          v33 = 0LL;
        KeReleaseQueuedSpinLock(7uLL, v35);
        if ( v33 )
        {
          *(_QWORD *)(v33 + 56) = 0LL;
          *v24 = *(void **)v23;
          if ( v23 == (void *)v6[7] )
            v6[7] = v24;
          KxReleaseSpinLock(v6 + 3);
          __writecr8(v42);
          FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v23 + 2), v33, 3221225598LL, &v37, 0LL);
          v42 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
          v24 = (void **)(v6 + 6);
          ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v23);
        }
        else
        {
LABEL_76:
          v24 = (void **)v23;
        }
        v23 = *v24;
      }
      while ( *v24 );
      LODWORD(v7) = 0;
    }
    v13 = v42;
    LOBYTE(v11) = v42;
    FsRtlPrivateCheckWaitingLocks(v6, v6 + 3, v11);
    FsRtlPrivateResetLowestLockOffset(v6);
  }
  else
  {
    LODWORD(v7) = -1073741698;
  }
  KxReleaseSpinLock(v6 + 3);
  __writecr8(v13);
  return (unsigned int)v7;
}
