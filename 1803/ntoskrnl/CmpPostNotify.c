/*
 * XREFs of CmpPostNotify @ 0x1404E2F90
 * Callers:
 *     CmpNotifyChangeKey @ 0x1404A3080 (CmpNotifyChangeKey.c)
 *     CmpCloseKeyObject @ 0x1404E2000 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x1404E2660 (CmpReportNotifyHelper.c)
 *     CmpFlushNotify @ 0x14054E0F0 (CmpFlushNotify.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x1404E224C (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1404E22A0 (CmpFreeSubordinatePost.c)
 *     CmpCancelSubordinatePost @ 0x1404E230C (CmpCancelSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x1404E2358 (CmpAddToDelayedDeref.c)
 *     CmpDelayedDerefKeys @ 0x1404E2844 (CmpDelayedDerefKeys.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, void **a6, _QWORD *a7)
{
  __int64 v8; // r13
  void **v9; // rbp
  _QWORD *v10; // rdi
  int v11; // eax
  _QWORD **v12; // rsi
  unsigned __int64 v13; // r9
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned __int8 CurrentIrql; // r8
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD v30[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v31[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a4;
  if ( !a6 )
  {
    v30[1] = v30;
    v30[0] = v30;
  }
  v9 = (void **)v30;
  if ( a6 )
    v9 = a6;
  if ( !a7 )
  {
    v31[1] = v31;
    v31[0] = v31;
  }
  v10 = v31;
  if ( a7 )
    v10 = a7;
  if ( !a5 )
    ExAcquireFastMutexUnsafe(&CmpPostLock);
  v11 = *(_DWORD *)(a1 + 48);
  v12 = (_QWORD **)(a1 + 16);
  if ( *v12 == v12 )
  {
    *(_DWORD *)(a1 + 48) = v11 | 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v11 & 0x7FFFFFFF;
LABEL_16:
    v13 = 1LL;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 == v12 )
        break;
      if ( (_QWORD **)v14[1] != v12 || (v15 = (_QWORD *)*v14, *(_QWORD **)(*v14 + 8LL) != v14) )
        __fastfail(3u);
      *v12 = v15;
      v15[1] = v12;
      if ( (_DWORD)v8 == 267 && (v14[7] & 0x10000) == 0 )
      {
        v24 = v14[4];
        if ( *(_QWORD **)(v24 + 8) != v14 + 4 || (v25 = (_QWORD *)v14[5], (_QWORD *)*v25 != v14 + 4) )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v13);
        v27 = v14[2];
        if ( *(_QWORD **)(v27 + 8) != v14 + 2 || (v28 = (_QWORD *)v14[3], (_QWORD *)*v28 != v14 + 2) )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        __writecr8(CurrentIrql);
        if ( *((_DWORD *)v14 + 14) != (_DWORD)v13 )
        {
          CmpAddToDelayedDeref((__int64)v14, (__int64)v9);
          CmpFreePostBlock(v14);
          goto LABEL_16;
        }
      }
      else
      {
        v16 = *((_DWORD *)v14 + 14);
        if ( (v16 & 0x10000) == 0 )
        {
          v22 = v14;
          do
          {
            v23 = v22[4];
            *(_DWORD *)(v23 + 24) &= ~0x10000u;
            v22 = (_QWORD *)(v23 - 32);
          }
          while ( v22 != v14 );
          *((_DWORD *)v14 + 14) |= 0x10000u;
          v16 = *((_DWORD *)v14 + 14);
        }
        if ( (unsigned __int16)v16 != (_DWORD)v13 )
        {
          CmpCancelSubordinatePost((__int64)v14, (__int64)v9);
          CmpAddToDelayedDeref((__int64)v14, v17);
          v16 = *((_DWORD *)v14 + 14);
        }
        if ( (unsigned __int16)v16 == (_DWORD)v13 )
        {
          v29 = v14[8];
          *v14 = 0LL;
          *(_DWORD *)(v29 + 24) = v8;
          KeSetEvent((PRKEVENT)v14[8], 0, 0);
          goto LABEL_16;
        }
        if ( (unsigned __int16)v16 == 2 )
        {
          KeInsertQueueApc(v14[8] + 16LL, v8, (__int64)v14, 0);
          goto LABEL_16;
        }
        if ( (unsigned int)(unsigned __int16)v16 - 3 <= (unsigned int)v13 )
        {
          CmpFreeSubordinatePost((__int64)v14);
          v18 = v14 + 2;
          v19 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          v21 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v21 != v10 )
            __fastfail(3u);
          *v18 = v10;
          v18[1] = v21;
          *v21 = v18;
          v10[1] = v18;
          goto LABEL_16;
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
}
