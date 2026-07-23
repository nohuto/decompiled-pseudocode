/*
 * XREFs of FsRtlDeleteKeyFromTunnelCache @ 0x140426DA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x14000CC10 (RtlRealSuccessor.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x14000CCB0 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlEmptyFreePoolList @ 0x14000CD8C (FsRtlEmptyFreePoolList.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlDeleteKeyFromTunnelCache(TUNNEL *Cache, ULONGLONG DirectoryKey)
{
  _RTL_SPLAY_LINKS *v2; // rbx
  PRTL_SPLAY_LINKS v5; // rax
  ULONGLONG Parent; // rcx
  PRTL_SPLAY_LINKS v7; // rbp
  _QWORD *v8[3]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v9 = 1;
  if ( !TunnelMaxEntries )
    return;
  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&Cache->Mutex);
  v5 = Cache->Cache;
  while ( v5 )
  {
    Parent = (ULONGLONG)v5[2].Parent;
    if ( Parent > DirectoryKey )
    {
LABEL_4:
      v5 = v5->LeftChild;
    }
    else
    {
      if ( Parent >= DirectoryKey )
      {
        v2 = v5;
        goto LABEL_4;
      }
      if ( v2 )
        goto LABEL_11;
      v5 = v5->RightChild;
    }
  }
  if ( !v2 )
    goto LABEL_13;
  do
  {
LABEL_11:
    v7 = RtlRealSuccessor(v2);
    if ( v2[2].Parent != (_RTL_SPLAY_LINKS *)DirectoryKey )
      break;
    FsRtlRemoveNodeFromTunnel((__int64)Cache, v2, (__int64)v8, &v9);
    v2 = v7;
  }
  while ( v7 );
LABEL_13:
  KeReleaseGuardedMutex(&Cache->Mutex);
  FsRtlEmptyFreePoolList(v8);
}
