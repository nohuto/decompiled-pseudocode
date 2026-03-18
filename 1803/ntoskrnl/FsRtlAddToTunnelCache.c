/*
 * XREFs of FsRtlAddToTunnelCache @ 0x140506A20
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlCompareNodeAndKey @ 0x14006DDE4 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x1400B0D24 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400B0D7C (FsRtlFreeTunnelNode.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x140554E1C (FsRtlPruneTunnelCache.c)
 */

void __stdcall FsRtlAddToTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        BOOLEAN KeyByShortName,
        ULONG DataLength,
        void *Data)
{
  UNICODE_STRING *v7; // r15
  UNICODE_STRING *v8; // r12
  PRTL_SPLAY_LINKS v10; // rbp
  ULONG v11; // edi
  int v12; // r8d
  unsigned int v13; // edi
  char *PoolWithTag; // rbx
  PRTL_SPLAY_LINKS *p_Cache; // r13
  PRTL_SPLAY_LINKS v16; // r14
  PRTL_SPLAY_LINKS *v17; // rdi
  LONG v18; // eax
  __int64 v19; // rax
  struct _LIST_ENTRY *v20; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  char *v25; // rcx
  _QWORD *v26; // rax
  _RTL_SPLAY_LINKS *RightChild; // rcx
  _QWORD *v28; // rcx
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *v30; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  char v32; // [rsp+20h] [rbp-58h]
  __int64 v33[10]; // [rsp+28h] [rbp-50h] BYREF

  v7 = LongName;
  v8 = ShortName;
  v32 = 0;
  v10 = 0LL;
  if ( TunnelMaxEntries )
  {
    v11 = DataLength + ShortName->Length;
    v12 = LongName->Length + 112;
    v33[1] = (__int64)v33;
    v13 = v12 + v11;
    v33[0] = (__int64)v33;
    if ( v13 > 0xB0 || (PoolWithTag = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x506E7554u);
      if ( !PoolWithTag )
        return;
      v32 = 1;
    }
    if ( !KeyByShortName )
      v8 = v7;
    ExAcquireFastMutex(&Cache->Mutex);
    p_Cache = &Cache->Cache;
    v16 = Cache->Cache;
    v17 = &Cache->Cache;
    if ( v16 )
    {
      do
      {
        v10 = v16;
        v18 = FsRtlCompareNodeAndKey((__int64)v16, DirectoryKey, v8);
        if ( v18 > 0 )
        {
          v19 = 8LL;
        }
        else
        {
          if ( v18 >= 0 )
            break;
          v19 = 16LL;
        }
        v17 = (_RTL_SPLAY_LINKS **)((char *)&v16->Parent + v19);
        v16 = *(_RTL_SPLAY_LINKS **)((char *)&v16->Parent + v19);
      }
      while ( v16 );
      v7 = LongName;
      p_Cache = &Cache->Cache;
    }
    *(_QWORD *)PoolWithTag = PoolWithTag;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    if ( v10 )
    {
      if ( *v17 )
      {
        *((_QWORD *)PoolWithTag + 2) = (*v17)->RightChild;
        *((_QWORD *)PoolWithTag + 1) = (*v17)->LeftChild;
        v26 = *v17;
        RightChild = (*v17)->RightChild;
        if ( RightChild )
        {
          RightChild->Parent = (_RTL_SPLAY_LINKS *)PoolWithTag;
          v26 = *v17;
        }
        v28 = (_QWORD *)v26[1];
        if ( v28 )
        {
          *v28 = PoolWithTag;
          v26 = *v17;
        }
        if ( (_QWORD *)*v26 == v26 )
        {
          *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
        }
        else
        {
          *(_QWORD *)PoolWithTag = *v26;
          Parent = (*v17)->Parent;
          if ( Parent->LeftChild == *v17 )
            Parent->LeftChild = (_RTL_SPLAY_LINKS *)PoolWithTag;
          else
            Parent->RightChild = (_RTL_SPLAY_LINKS *)PoolWithTag;
        }
        v30 = v10[1].Parent;
        if ( v30->LeftChild != &v10[1] || (LeftChild = v10[1].LeftChild, LeftChild->Parent != &v10[1]) )
          __fastfail(3u);
        LeftChild->Parent = v30;
        v30->LeftChild = LeftChild;
        FsRtlFreeTunnelNode((char *)v10, v33);
        --Cache->NumEntries;
      }
      else
      {
        *(_QWORD *)PoolWithTag = v10;
        *v17 = (PRTL_SPLAY_LINKS)PoolWithTag;
      }
    }
    else
    {
      *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
    }
    v20 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    *((_QWORD *)PoolWithTag + 5) = MEMORY[0xFFFFF78000000014];
    Blink = Cache->TimerQueue.Blink;
    if ( Blink->Flink != &Cache->TimerQueue )
      __fastfail(3u);
    v20->Flink = &Cache->TimerQueue;
    *((_QWORD *)PoolWithTag + 4) = Blink;
    Blink->Flink = v20;
    Cache->TimerQueue.Blink = v20;
    ++Cache->NumEntries;
    *((_QWORD *)PoolWithTag + 6) = DirectoryKey;
    *((_DWORD *)PoolWithTag + 14) = KeyByShortName != 0 ? 2 : 0;
    *((_QWORD *)PoolWithTag + 11) = PoolWithTag + 112;
    *((_QWORD *)PoolWithTag + 9) = &PoolWithTag[ShortName->Length + 112];
    Length = ShortName->Length;
    *((_WORD *)PoolWithTag + 41) = ShortName->Length;
    *((_WORD *)PoolWithTag + 40) = Length;
    v23 = v7->Length;
    *((_WORD *)PoolWithTag + 33) = v7->Length;
    *((_WORD *)PoolWithTag + 32) = v23;
    if ( ShortName->Length )
      memmove(PoolWithTag + 112, ShortName->Buffer, ShortName->Length);
    v24 = v7->Length;
    if ( v7->Length )
    {
      memmove(*((void **)PoolWithTag + 9), v7->Buffer, v24);
      v24 = v7->Length;
    }
    v25 = &PoolWithTag[ShortName->Length + 112 + v24];
    *((_QWORD *)PoolWithTag + 12) = v25;
    *((_DWORD *)PoolWithTag + 26) = DataLength;
    memmove(v25, Data, DataLength);
    if ( v32 )
      *((_DWORD *)PoolWithTag + 14) |= 1u;
    FsRtlPruneTunnelCache(Cache, v33);
    KeReleaseGuardedMutex(&Cache->Mutex);
    FsRtlEmptyFreePoolList((_QWORD **)v33);
  }
}
