/*
 * XREFs of CcSetLogHandleForFileEx @ 0x1400277E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CcSetLogHandleForFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rdi
  KSPIN_LOCK **v10; // rax
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK **v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v28[10]; // [rsp+50h] [rbp-A8h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v8 + 4) )
    KeBugCheckEx(0x34u, 0x2F4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v9 = *(KSPIN_LOCK **)(v8 + 528);
  if ( (*(_DWORD *)(v8 + 152) & 0x2000000) != 0 )
    KeBugCheckEx(0x34u, 0x2FCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(v9 + 8, &LockHandle);
  if ( *(_QWORD *)(v8 + 240) )
  {
    v16 = *(_QWORD *)(v8 + 120);
    v17 = *(_QWORD **)(v8 + 128);
    if ( *(_QWORD *)(v16 + 8) != v8 + 120 || *v17 != v8 + 120 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
  }
  if ( a2 )
  {
    v10 = (KSPIN_LOCK **)(v8 + 120);
    if ( *(_DWORD *)(v8 + 112) )
    {
      v11 = v9 + 30;
      v12 = (KSPIN_LOCK **)v9[31];
      if ( *v12 != v9 + 30 )
        __fastfail(3u);
    }
    else
    {
      v11 = v9 + 22;
      v12 = (KSPIN_LOCK **)v9[23];
      if ( *v12 != v9 + 22 )
        __fastfail(3u);
    }
    *v10 = v11;
    *(_QWORD *)(v8 + 128) = v12;
    *v12 = (KSPIN_LOCK *)v10;
    v11[1] = (KSPIN_LOCK)v10;
    if ( !*(_QWORD *)(*(_QWORD *)(v8 + 504) + 40LL) )
    {
      memset(v28, 0, 0x98uLL);
      *((_QWORD *)&v28[8] + 1) = -1LL;
      *(_QWORD *)&v28[1] = a4;
      *((_QWORD *)&v28[0] + 1) = a3;
      *(_QWORD *)&v28[0] = a2;
      if ( Object )
      {
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        *((_QWORD *)&v28[7] + 1) = Object;
      }
      v18 = *(_QWORD *)(v8 + 504);
      v19 = v28[1];
      *(_OWORD *)(v18 + 40) = v28[0];
      v20 = v28[2];
      *(_OWORD *)(v18 + 56) = v19;
      v21 = v28[3];
      *(_OWORD *)(v18 + 72) = v20;
      v22 = v28[4];
      *(_OWORD *)(v18 + 88) = v21;
      v23 = v28[5];
      *(_OWORD *)(v18 + 104) = v22;
      v24 = v28[6];
      *(_OWORD *)(v18 + 120) = v23;
      v25 = v28[8];
      *(_OWORD *)(v18 + 136) = v24;
      v26 = *(_QWORD *)&v28[9];
      *(_OWORD *)(v18 + 152) = v28[7];
      *(_OWORD *)(v18 + 168) = v25;
      *(_QWORD *)(v18 + 184) = v26;
    }
    v13 = *(_QWORD *)(v8 + 504) + 40LL;
    *(_QWORD *)(v8 + 240) = v13;
    if ( (*(_DWORD *)(v8 + 152) & 0x1000000) == 0 )
    {
      v14 = *(unsigned int *)(v8 + 112);
      if ( (_DWORD)v14 )
        *(_QWORD *)(v13 + 24) += v14;
    }
    *(_DWORD *)(v8 + 152) |= 0x1000000u;
  }
  else
  {
    *(_QWORD *)(v8 + 240) = 0LL;
    *(_DWORD *)(v8 + 152) &= ~0x1000000u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
