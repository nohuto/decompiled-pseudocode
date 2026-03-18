/*
 * XREFs of CmpPostNotify @ 0x14048C118
 * Callers:
 *     CmpReportNotifyHelper @ 0x14048D130 (CmpReportNotifyHelper.c)
 *     CmpNotifyChangeKey @ 0x140491AD8 (CmpNotifyChangeKey.c)
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     CmpCancelSubordinatePost @ 0x140447A88 (CmpCancelSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x140447ACC (CmpAddToDelayedDeref.c)
 *     CmpDelayedDerefKeys @ 0x14048D3E4 (CmpDelayedDerefKeys.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1404CE104 (CmpFreeSubordinatePost.c)
 */

void __fastcall CmpPostNotify(
        __int64 a1,
        __int64 a2,
        __int64 CurrentIrql,
        unsigned int a4,
        char a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v8; // r13
  __int64 *v9; // rbp
  __int64 *v10; // rsi
  __int64 *v11; // rdi
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 ***v17; // rax
  __int64 **v18; // rbx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v28; // [rsp+28h] [rbp-20h]
  __int64 v29; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v30; // [rsp+38h] [rbp-10h]

  v8 = a4;
  if ( a6 )
  {
    v9 = a6;
  }
  else
  {
    v28 = &v27;
    v9 = &v27;
    v27 = (__int64)&v27;
  }
  if ( a7 )
  {
    v10 = a7;
  }
  else
  {
    v30 = &v29;
    v10 = &v29;
    v29 = (__int64)&v29;
  }
  if ( !a5 )
    ExAcquireFastMutexUnsafe(&CmpPostLock);
  v11 = (__int64 *)(a1 + 16);
  if ( (__int64 *)*v11 == v11 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
    return;
  }
  *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_12:
  v12 = 1LL;
  while ( (__int64 *)*v11 != v11 )
  {
    v13 = *v11;
    v14 = *(_QWORD **)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 || v14[1] != v13 )
      __fastfail(3u);
    *v11 = (__int64)v14;
    v14[1] = v11;
    if ( (_DWORD)v8 != 267 )
    {
      if ( (*(_DWORD *)(v13 + 56) & 0x10000) == 0 )
      {
        v21 = v13;
        do
        {
          v22 = *(_QWORD *)(v21 + 32);
          *(_DWORD *)(v22 + 24) &= ~0x10000u;
          v21 = v22 - 32;
        }
        while ( v21 != v13 );
        *(_DWORD *)(v13 + 56) |= 0x10000u;
      }
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(v13 + 56) & 0x10000) != 0 )
    {
LABEL_18:
      if ( (unsigned __int16)*(_DWORD *)(v13 + 56) != (_DWORD)v12 )
      {
        CmpCancelSubordinatePost(v13, (__int64)v9);
        CmpAddToDelayedDeref(v13, v15);
      }
      v16 = (unsigned __int16)*(_DWORD *)(v13 + 56);
      if ( v16 == (_DWORD)v12 )
      {
        v26 = *(_QWORD *)(v13 + 64);
        *(_QWORD *)v13 = 0LL;
        *(_DWORD *)(v26 + 24) = v8;
        KeSetEvent(*(PRKEVENT *)(v13 + 64), 0, 0);
        goto LABEL_12;
      }
      if ( v16 == 2 )
      {
        KeInsertQueueApc(*(_QWORD *)(v13 + 64) + 16LL, v8, v13, 0);
        goto LABEL_12;
      }
      if ( v16 - 3 <= (unsigned int)v12 )
      {
        CmpFreeSubordinatePost(v13);
        v17 = *(__int64 ****)(v13 + 24);
        v18 = (__int64 **)(v13 + 16);
        v19 = *v18;
        if ( (__int64 **)(*v18)[1] != v18 || *v17 != v18 )
          __fastfail(3u);
        *v17 = (__int64 **)v19;
        v19[1] = (__int64)v17;
        v20 = (__int64 **)v10[1];
        if ( *v20 != v10 )
          __fastfail(3u);
        *v18 = v10;
        v18[1] = (__int64 *)v20;
        *v20 = (__int64 *)v18;
        v10[1] = (__int64)v18;
        goto LABEL_12;
      }
    }
    else
    {
      v23 = *(_QWORD *)(v13 + 32);
      v24 = *(_QWORD **)(v13 + 40);
      if ( *(_QWORD *)(v23 + 8) != v13 + 32 || *v24 != v13 + 32 )
        __fastfail(3u);
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v12);
      a2 = *(_QWORD *)(v13 + 16);
      v25 = *(_QWORD **)(v13 + 24);
      if ( *(_QWORD *)(a2 + 8) != v13 + 16 || *v25 != v13 + 16 )
        __fastfail(3u);
      *v25 = a2;
      *(_QWORD *)(a2 + 8) = v25;
      __writecr8((unsigned __int8)CurrentIrql);
      if ( *(_DWORD *)(v13 + 56) != (_DWORD)v12 )
      {
        CmpAddToDelayedDeref(v13, (__int64)v9);
        CmpFreePostBlock(v13);
        goto LABEL_12;
      }
    }
  }
  if ( !a5 )
    ExReleaseFastMutexUnsafe(&CmpPostLock);
  if ( !a6 )
    CmpDelayedDerefKeys(v9, a2, CurrentIrql, v12, v27, v28, v29, v30);
  if ( !a7 )
    CmpSignalDeferredPosts(v10);
}
