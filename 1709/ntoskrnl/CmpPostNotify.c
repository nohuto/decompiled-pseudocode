/*
 * XREFs of CmpPostNotify @ 0x14047BFBC
 * Callers:
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x14046F8B0 (CmpCloseKeyObject.c)
 *     CmpNotifyChangeKey @ 0x140479920 (CmpNotifyChangeKey.c)
 *     CmpReportNotifyHelper @ 0x14047C340 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeInsertQueueApc @ 0x1400AB220 (KeInsertQueueApc.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x14046FB14 (CmpFreeSubordinatePost.c)
 *     CmpDelayedDerefKeys @ 0x14047D8A8 (CmpDelayedDerefKeys.c)
 *     CmpCancelSubordinatePost @ 0x140580414 (CmpCancelSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x140580460 (CmpAddToDelayedDeref.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v8; // r13
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  _DWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int8 CurrentIrql; // r8
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v30[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v9 = a6;
  }
  else
  {
    v29[1] = v29;
    v9 = v29;
    v29[0] = v29;
  }
  if ( a7 )
  {
    v10 = a7;
  }
  else
  {
    v30[1] = v30;
    v10 = v30;
    v30[0] = v30;
  }
  if ( !a5 )
    ExAcquireFastMutexUnsafe(&CmpPostLock);
  v11 = a1 + 16;
  if ( *(_QWORD *)v11 == v11 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
    return;
  }
  *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_12:
  v12 = 1LL;
  while ( *(_QWORD *)v11 != v11 )
  {
    v13 = *(_DWORD **)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v14 = *(_QWORD *)v13, *(_DWORD **)(*(_QWORD *)v13 + 8LL) != v13) )
      __fastfail(3u);
    *(_QWORD *)v11 = v14;
    *(_QWORD *)(v14 + 8) = v11;
    if ( (_DWORD)v8 != 267 )
    {
      if ( (v13[14] & 0x10000) == 0 )
      {
        v21 = v13;
        do
        {
          v22 = *((_QWORD *)v21 + 4);
          *(_DWORD *)(v22 + 24) &= ~0x10000u;
          v21 = (_DWORD *)(v22 - 32);
        }
        while ( v21 != v13 );
        v13[14] |= 0x10000u;
      }
      goto LABEL_18;
    }
    if ( (v13[14] & 0x10000) != 0 )
    {
LABEL_18:
      if ( (unsigned __int16)v13[14] != (_DWORD)v12 )
      {
        CmpCancelSubordinatePost(v13, v9);
        CmpAddToDelayedDeref(v13, v15);
      }
      v16 = (unsigned __int16)v13[14];
      if ( v16 == (_DWORD)v12 )
      {
        v28 = *((_QWORD *)v13 + 8);
        *(_QWORD *)v13 = 0LL;
        *(_DWORD *)(v28 + 24) = v8;
        KeSetEvent(*((PRKEVENT *)v13 + 8), 0, 0);
        goto LABEL_12;
      }
      if ( v16 == 2 )
      {
        KeInsertQueueApc(*((_QWORD *)v13 + 8) + 16LL, v8, (__int64)v13, 0);
        goto LABEL_12;
      }
      if ( v16 - 3 <= (unsigned int)v12 )
      {
        CmpFreeSubordinatePost((__int64)v13);
        v17 = v13 + 4;
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v19 = (_QWORD *)v17[1], (_QWORD *)*v19 != v17) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = (_QWORD *)v10[1];
        if ( (_QWORD *)*v20 != v10 )
          __fastfail(3u);
        *v17 = v10;
        v17[1] = v20;
        *v20 = v17;
        v10[1] = v17;
        goto LABEL_12;
      }
    }
    else
    {
      v23 = *((_QWORD *)v13 + 4);
      if ( *(_DWORD **)(v23 + 8) != v13 + 8 || (v24 = (_QWORD *)*((_QWORD *)v13 + 5), (_DWORD *)*v24 != v13 + 8) )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v12);
      v26 = *((_QWORD *)v13 + 2);
      if ( *(_DWORD **)(v26 + 8) != v13 + 4 || (v27 = (_QWORD *)*((_QWORD *)v13 + 3), (_DWORD *)*v27 != v13 + 4) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      __writecr8(CurrentIrql);
      if ( v13[14] != (_DWORD)v12 )
      {
        CmpAddToDelayedDeref(v13, v9);
        CmpFreePostBlock(v13);
        goto LABEL_12;
      }
    }
  }
  if ( !a5 )
    ExReleaseFastMutexUnsafe(&CmpPostLock);
  if ( !a6 )
    CmpDelayedDerefKeys(v9);
  if ( !a7 )
    CmpSignalDeferredPosts((_QWORD **)v10);
}
