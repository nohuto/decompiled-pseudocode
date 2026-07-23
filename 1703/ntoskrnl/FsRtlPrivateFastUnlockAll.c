/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x14000C934
 * Callers:
 *     FsRtlFastUnlockAll @ 0x14000C910 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x14014A0C0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x1401E3470 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14000CC10 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x14000CF00 (FsRtlSplitLocks.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     IoGetRequestorProcess @ 0x14004D4E0 (IoGetRequestorProcess.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14004DB2C (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x14004DBB0 (RtlDelete.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     FsRtlCompleteLockIrpReal @ 0x14014A1E8 (FsRtlCompleteLockIrpReal.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
  _RTL_SPLAY_LINKS *v16; // r12
  PRTL_SPLAY_LINKS v17; // rax
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v19; // rbx
  _RTL_SPLAY_LINKS *v20; // rcx
  PRTL_SPLAY_LINKS v21; // r15
  _RTL_SPLAY_LINKS *v22; // rdx
  PRTL_SPLAY_LINKS v23; // rbx
  void *v24; // rbx
  void **v25; // r14
  _RTL_SPLAY_LINKS *k; // rax
  _RTL_SPLAY_LINKS *v27; // rax
  bool v28; // cc
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
      v16 = v12 - 1;
      v17 = RtlRealSuccessor(v12);
      Parent = v12[-1].Parent;
      v19 = 0LL;
      v39 = 0LL;
      v20 = v12 - 1;
      v37 = v12 - 1;
      v21 = v17;
      v38 = 0LL;
      v22 = 0LL;
      if ( !Parent )
      {
        v7 = 0LL;
        goto LABEL_18;
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
        v20 = Parent;
        v37 = Parent;
LABEL_12:
        if ( !v22 )
        {
          if ( Parent[2].Parent > v19 )
            v19 = Parent[2].Parent;
          v38 = v19;
        }
        Parent = v20->Parent;
        if ( !v20->Parent )
          goto LABEL_17;
      }
      v27 = v16[2].Parent;
      if ( !v22 )
        v22 = v20;
      v28 = Parent[2].Parent <= v7;
      v41 = v22;
      if ( !v28 )
        v7 = Parent[2].Parent;
      v39 = v7;
      if ( v20->Parent == v27 )
        v16[2].Parent = v20;
      v20->Parent = Parent->Parent;
      if ( !v6[2] )
        break;
      v36 = 1;
LABEL_17:
      v7 = 0LL;
      if ( v22 )
      {
        if ( v16->Parent )
        {
          FsRtlSplitLocks(&v12[-1], v22, &v39, &v38);
        }
        else
        {
          v6[4] = RtlDelete(v12);
          ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v12[-1]);
        }
      }
LABEL_18:
      if ( v36 )
      {
        KxReleaseSpinLock(v6 + 3);
        __writecr8(v42);
        v29 = Entry;
        ((void (__fastcall *)(__int64, char *))v6[2])(a6, (char *)Entry + 8);
        v42 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
        v13 = v42;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v29);
        v21 = (PRTL_SPLAY_LINKS)v6[4];
        v36 = 0;
        if ( v21 )
        {
          for ( j = v21->LeftChild; j; j = j->LeftChild )
            v21 = j;
        }
      }
      else
      {
        v13 = v42;
      }
      v12 = v21;
      if ( !v21 )
      {
        v9 = a2;
        v8 = a4;
        goto LABEL_22;
      }
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
    v20 = v37;
    v22 = v41;
    goto LABEL_12;
  }
  if ( v6[5] )
  {
LABEL_22:
    v23 = (PRTL_SPLAY_LINKS)v6[5];
    if ( v23 )
    {
      for ( k = v23->LeftChild; k; k = k->LeftChild )
        v23 = k;
      do
      {
        v7 = RtlRealSuccessor(v23);
        if ( v23[2].Parent == v9
          && (struct _KPROCESS *)v23[2].LeftChild == a3
          && (!a5 || HIDWORD(v23[1].RightChild) == v8) )
        {
          v6[5] = RtlDelete(v23);
          if ( v6[2] )
          {
            KxReleaseSpinLock(v6 + 3);
            __writecr8(v13);
            ((void (__fastcall *)(__int64, _RTL_SPLAY_LINKS *))v6[2])(a6, &v23[1]);
            v31 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
            v7 = (PRTL_SPLAY_LINKS)v6[5];
            v13 = v31;
            if ( v7 )
            {
              for ( m = v7->LeftChild; m; m = m->LeftChild )
                v7 = m;
            }
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v23);
        }
        v23 = v7;
      }
      while ( v7 );
      v42 = v13;
    }
    v24 = (void *)v6[6];
    v25 = (void **)(v6 + 6);
    if ( v24 )
    {
      do
      {
        v33 = *((_QWORD *)v24 + 3);
        v34 = *(_QWORD *)(v33 + 184);
        if ( a2 != *(_RTL_SPLAY_LINKS **)(v34 + 48)
          || a3 != IoGetRequestorProcess(*((PIRP *)v24 + 3))
          || a5 && a4 != *(_DWORD *)(v34 + 16) )
        {
          goto LABEL_77;
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
          *v25 = *(void **)v24;
          if ( v24 == (void *)v6[7] )
            v6[7] = v25;
          KxReleaseSpinLock(v6 + 3);
          __writecr8(v42);
          FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v24 + 2), v33, 3221225598LL, &v37, 0LL);
          v42 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
          v25 = (void **)(v6 + 6);
          ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v24);
        }
        else
        {
LABEL_77:
          v25 = (void **)v24;
        }
        v24 = *v25;
      }
      while ( *v25 );
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
