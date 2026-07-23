/*
 * XREFs of FsRtlGetNextFileLock @ 0x140224DE0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1400698E4 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlRealSuccessor @ 0x1400B0BF0 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400BA9B0 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

PFILE_LOCK_INFO __stdcall FsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  _QWORD *LockInformation; // rbx
  PFILE_LOCK_INFO result; // rax
  __int128 v5; // xmm0
  PRTL_SPLAY_LINKS LastReturnedLock; // rdi
  __int128 v7; // xmm1
  char v8; // r14
  __int128 v9; // xmm0
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rax
  _RTL_SPLAY_LINKS *v11; // rcx
  _RTL_SPLAY_LINKS *v12; // r15
  _RTL_SPLAY_LINKS *v13; // r12
  int v14; // r13d
  _RTL_SPLAY_LINKS *v15; // rsi
  __int64 v16; // rcx
  __int64 j; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _RTL_SPLAY_LINKS *FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v21; // rcx
  _RTL_SPLAY_LINKS *Parent; // rbx
  bool v23; // cf
  PRTL_SPLAY_LINKS v24; // rax
  _RTL_SPLAY_LINKS *v25; // rax
  __int64 v26; // rax
  __int64 i; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  PRTL_SPLAY_LINKS Links; // [rsp+30h] [rbp-49h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-41h]
  __int128 v33; // [rsp+40h] [rbp-39h]
  __int128 v34; // [rsp+50h] [rbp-29h]
  __int128 v35; // [rsp+60h] [rbp-19h]
  __int128 v36; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v37[64]; // [rsp+80h] [rbp+7h] BYREF
  char v39; // [rsp+F0h] [rbp+77h] BYREF
  KIRQL v40; // [rsp+F8h] [rbp+7Fh]

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return 0LL;
  v5 = *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart;
  LastReturnedLock = (PRTL_SPLAY_LINKS)FileLock->LastReturnedLock;
  v7 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock;
  v8 = 0;
  SpinLock = LockInformation + 3;
  v34 = v5;
  v36 = v5;
  v9 = *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId;
  v33 = v7;
  v35 = v9;
  *(_OWORD *)&v37[16] = v9;
  *(_OWORD *)v37 = v7;
  v40 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( Restart )
  {
    v25 = (_RTL_SPLAY_LINKS *)LockInformation[5];
    if ( v25 )
    {
      do
      {
        LastReturnedLock = v25;
        v25 = v25->LeftChild;
      }
      while ( v25 );
      v18 = *(_OWORD *)&LastReturnedLock[1].RightChild;
      v34 = *(_OWORD *)&LastReturnedLock[1].Parent;
      v19 = *(_OWORD *)&LastReturnedLock[2].LeftChild;
      goto LABEL_63;
    }
    v26 = LockInformation[4];
    if ( !v26 )
      goto LABEL_64;
    for ( i = *(_QWORD *)(v26 + 8); i; i = *(_QWORD *)(i + 8) )
      v26 = i;
    LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v26 - 24);
    goto LABEL_62;
  }
  if ( (_BYTE)v33 )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        (_QWORD *)LockInformation[5],
                                                        (unsigned __int64 *)&v36,
                                                        (unsigned __int64 *)&v37[24],
                                                        &Links,
                                                        &v39);
    if ( FirstOverlappingExclusiveNode )
    {
      v12 = *(_RTL_SPLAY_LINKS **)&v37[16];
      v13 = *(_RTL_SPLAY_LINKS **)&v37[8];
      v14 = *(_DWORD *)&v37[4];
      v15 = (_RTL_SPLAY_LINKS *)*((_QWORD *)&v36 + 1);
      while ( LastReturnedLock != FirstOverlappingExclusiveNode
           || (_RTL_SPLAY_LINKS *)v36 != FirstOverlappingExclusiveNode[1].Parent
           || v15 != FirstOverlappingExclusiveNode[1].LeftChild
           || v14 != HIDWORD(FirstOverlappingExclusiveNode[1].RightChild)
           || v13 != FirstOverlappingExclusiveNode[2].Parent
           || v12 != FirstOverlappingExclusiveNode[2].LeftChild )
      {
        if ( FirstOverlappingExclusiveNode[1].LeftChild || v15 )
          goto LABEL_23;
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_24;
      }
      v11 = FirstOverlappingExclusiveNode;
    }
    else
    {
      if ( v39 )
      {
        FirstOverlappingExclusiveNode = Links;
LABEL_23:
        if ( !FirstOverlappingExclusiveNode )
          goto LABEL_24;
        LastReturnedLock = FirstOverlappingExclusiveNode;
        v18 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].RightChild;
        v34 = *(_OWORD *)&FirstOverlappingExclusiveNode[1].Parent;
        v19 = *(_OWORD *)&FirstOverlappingExclusiveNode[2].LeftChild;
LABEL_63:
        v33 = v18;
        v8 = 1;
        v35 = v19;
        goto LABEL_64;
      }
      v11 = Links;
      if ( !Links )
      {
LABEL_24:
        v16 = LockInformation[4];
        if ( !v16 )
          goto LABEL_64;
        for ( j = *(_QWORD *)(v16 + 8); j; j = *(_QWORD *)(j + 8) )
          v16 = j;
        LastReturnedLock = *(PRTL_SPLAY_LINKS *)(v16 - 24);
LABEL_62:
        v18 = *(_OWORD *)&LastReturnedLock[1].Parent;
        v34 = *(_OWORD *)&LastReturnedLock->LeftChild;
        v19 = *(_OWORD *)&LastReturnedLock[1].RightChild;
        goto LABEL_63;
      }
    }
    FirstOverlappingExclusiveNode = RtlRealSuccessor(v11);
    goto LABEL_23;
  }
  FirstOverlappingSharedNode = (_RTL_SPLAY_LINKS *)FsRtlFindFirstOverlappingSharedNode(
                                                     LockInformation[4],
                                                     (unsigned __int64 *)&v36,
                                                     (unsigned __int64 *)&v37[24],
                                                     &Links,
                                                     &v39);
  if ( !FirstOverlappingSharedNode )
  {
    if ( !v39 )
    {
      if ( !Links )
        goto LABEL_64;
      FirstOverlappingSharedNode = RtlRealSuccessor(Links);
      v21 = FirstOverlappingSharedNode;
      if ( !FirstOverlappingSharedNode )
        goto LABEL_64;
      goto LABEL_34;
    }
    FirstOverlappingSharedNode = Links;
    if ( !Links )
      goto LABEL_64;
  }
  v21 = FirstOverlappingSharedNode;
LABEL_34:
  if ( v21 == (_RTL_SPLAY_LINKS *)24 )
    goto LABEL_64;
  Parent = v21[-1].Parent;
  if ( !Parent )
    goto LABEL_50;
  while ( 1 )
  {
    if ( LastReturnedLock == Parent )
    {
      v23 = (_RTL_SPLAY_LINKS *)v36 < Parent->LeftChild;
      if ( (_RTL_SPLAY_LINKS *)v36 != Parent->LeftChild )
        goto LABEL_43;
      if ( (_RTL_SPLAY_LINKS *)*((_QWORD *)&v36 + 1) == Parent->RightChild
        && *(_DWORD *)&v37[4] == HIDWORD(Parent[1].Parent)
        && *(_OWORD *)&v37[8] == *(_OWORD *)&Parent[1].LeftChild )
      {
        break;
      }
    }
    v23 = (_RTL_SPLAY_LINKS *)v36 < Parent->LeftChild;
LABEL_43:
    if ( v23 )
      goto LABEL_49;
    Parent = Parent->Parent;
    if ( !Parent )
      goto LABEL_50;
  }
  Parent = Parent->Parent;
LABEL_49:
  if ( Parent )
  {
LABEL_53:
    LastReturnedLock = Parent;
    v18 = *(_OWORD *)&Parent[1].Parent;
    v34 = *(_OWORD *)&Parent->LeftChild;
    v19 = *(_OWORD *)&Parent[1].RightChild;
    goto LABEL_63;
  }
LABEL_50:
  v24 = RtlRealSuccessor(FirstOverlappingSharedNode);
  if ( v24 )
    Parent = v24[-1].Parent;
  if ( Parent )
    goto LABEL_53;
LABEL_64:
  KxReleaseSpinLock(SpinLock);
  __writecr8(v40);
  if ( !v8 )
    return 0LL;
  v28 = v34;
  v29 = v33;
  result = &FileLock->LastReturnedLockInfo;
  FileLock->LastReturnedLock = LastReturnedLock;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.StartingByte.LowPart = v28;
  v30 = v35;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ExclusiveLock = v29;
  *(_OWORD *)&FileLock->LastReturnedLockInfo.ProcessId = v30;
  return result;
}
