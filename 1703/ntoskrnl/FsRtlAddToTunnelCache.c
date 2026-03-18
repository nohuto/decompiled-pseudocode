/*
 * XREFs of FsRtlAddToTunnelCache @ 0x140427060
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlCompareNodeAndKey @ 0x14000CD4C (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x14000CD8C (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14000CDE4 (FsRtlFreeTunnelNode.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     FsRtlPruneTunnelCache @ 0x1404274D8 (FsRtlPruneTunnelCache.c)
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
  UNICODE_STRING *v8; // r14
  __int64 v10; // rbp
  ULONG v11; // edi
  int v12; // r8d
  unsigned int v13; // edi
  char *PoolWithTag; // rbx
  UNICODE_STRING *v15; // r15
  PRTL_SPLAY_LINKS *p_Cache; // r13
  __int64 *v17; // rdi
  LONG v18; // eax
  __int64 v19; // rax
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int16 Length; // ax
  unsigned __int16 v23; // ax
  char *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  char v31; // [rsp+20h] [rbp-58h]
  __int64 v32[10]; // [rsp+28h] [rbp-50h] BYREF

  v8 = ShortName;
  v31 = 0;
  v10 = 0LL;
  if ( TunnelMaxEntries )
  {
    v11 = DataLength + ShortName->Length;
    v12 = LongName->Length + 112;
    v32[1] = (__int64)v32;
    v13 = v12 + v11;
    v32[0] = (__int64)v32;
    if ( v13 > 0xB0
      || (PoolWithTag = (char *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)&TunnelLookasideList)) == 0LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x506E7554u);
      if ( !PoolWithTag )
        return;
      v31 = 1;
    }
    v15 = v8;
    if ( !KeyByShortName )
      v15 = LongName;
    ExAcquireFastMutex(&Cache->Mutex);
    p_Cache = &Cache->Cache;
    v17 = (__int64 *)&Cache->Cache;
    if ( Cache->Cache )
    {
      do
      {
        v10 = *v17;
        v18 = FsRtlCompareNodeAndKey(*v17, DirectoryKey, v15);
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
        v17 = (__int64 *)(v19 + v10);
      }
      while ( *(_QWORD *)(v19 + v10) );
      v8 = ShortName;
      p_Cache = &Cache->Cache;
    }
    *(_QWORD *)PoolWithTag = PoolWithTag;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    if ( v10 )
    {
      if ( *v17 )
      {
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(*v17 + 16);
        *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(*v17 + 8);
        v25 = *(_QWORD **)(*v17 + 16);
        if ( v25 )
          *v25 = PoolWithTag;
        v26 = *(_QWORD **)(*v17 + 8);
        if ( v26 )
          *v26 = PoolWithTag;
        v27 = *(_QWORD *)*v17;
        if ( v27 == *v17 )
        {
          *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
        }
        else
        {
          *(_QWORD *)PoolWithTag = v27;
          v28 = *(_QWORD *)*v17;
          if ( *(_QWORD *)(v28 + 8) == *v17 )
            *(_QWORD *)(v28 + 8) = PoolWithTag;
          else
            *(_QWORD *)(v28 + 16) = PoolWithTag;
        }
        v29 = *(_QWORD *)(v10 + 24);
        v30 = *(_QWORD **)(v10 + 32);
        if ( *(_QWORD *)(v29 + 8) != v10 + 24 || *v30 != v10 + 24 )
          __fastfail(3u);
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        FsRtlFreeTunnelNode((char *)v10, v32);
        --Cache->NumEntries;
      }
      else
      {
        *(_QWORD *)PoolWithTag = v10;
        *v17 = (__int64)PoolWithTag;
      }
    }
    else
    {
      *p_Cache = (PRTL_SPLAY_LINKS)PoolWithTag;
    }
    *((_QWORD *)PoolWithTag + 5) = MEMORY[0xFFFFF78000000014];
    v20 = (struct _LIST_ENTRY *)(PoolWithTag + 24);
    Blink = Cache->TimerQueue.Blink;
    if ( Blink->Flink != &Cache->TimerQueue )
      __fastfail(3u);
    v20->Flink = &Cache->TimerQueue;
    *((_QWORD *)PoolWithTag + 4) = Blink;
    Blink->Flink = v20;
    Cache->TimerQueue.Blink = v20;
    ++Cache->NumEntries;
    *((_QWORD *)PoolWithTag + 6) = DirectoryKey;
    if ( KeyByShortName )
      *((_DWORD *)PoolWithTag + 14) = 2;
    else
      *((_DWORD *)PoolWithTag + 14) = 0;
    *((_QWORD *)PoolWithTag + 11) = PoolWithTag + 112;
    *((_QWORD *)PoolWithTag + 9) = &PoolWithTag[v8->Length + 112];
    Length = v8->Length;
    *((_WORD *)PoolWithTag + 41) = v8->Length;
    *((_WORD *)PoolWithTag + 40) = Length;
    v23 = LongName->Length;
    *((_WORD *)PoolWithTag + 33) = LongName->Length;
    *((_WORD *)PoolWithTag + 32) = v23;
    if ( v8->Length )
      memmove(PoolWithTag + 112, v8->Buffer, v8->Length);
    if ( LongName->Length )
      memmove(*((void **)PoolWithTag + 9), LongName->Buffer, LongName->Length);
    v24 = &PoolWithTag[v8->Length + 112 + LongName->Length];
    *((_QWORD *)PoolWithTag + 12) = v24;
    *((_DWORD *)PoolWithTag + 26) = DataLength;
    memmove(v24, Data, DataLength);
    if ( v31 )
      *((_DWORD *)PoolWithTag + 14) |= 1u;
    FsRtlPruneTunnelCache(Cache, v32);
    KeReleaseGuardedMutex(&Cache->Mutex);
    FsRtlEmptyFreePoolList((_QWORD **)v32);
  }
}
