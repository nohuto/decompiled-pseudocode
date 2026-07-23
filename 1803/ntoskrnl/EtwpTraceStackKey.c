/*
 * XREFs of EtwpTraceStackKey @ 0x1402B4280
 * Callers:
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1400B8074 (KxTryToAcquireSpinLock.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     EtwpDereferenceStackEntry @ 0x1402B4044 (EtwpDereferenceStackEntry.c)
 */

char __fastcall EtwpTraceStackKey(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int **v6; // r12
  char v7; // di
  unsigned __int64 v8; // r8
  _SLIST_ENTRY *v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  int v16; // ebx
  _SLIST_ENTRY *v17; // r14
  unsigned __int8 CurrentIrql; // al
  _SLIST_ENTRY *Next; // rsi
  unsigned int v20; // ecx
  _SLIST_ENTRY *v21; // r15
  unsigned int v22; // edx
  _SLIST_ENTRY *v23; // rcx
  _SLIST_ENTRY **v24; // rax
  _SLIST_ENTRY *v25; // rax
  _SLIST_ENTRY **v26; // rax
  unsigned int v27; // ebx
  _SLIST_HEADER *v28; // rbp
  PSLIST_ENTRY v29; // r14
  PSLIST_ENTRY v30; // r15
  unsigned int v31; // r12d
  _SLIST_ENTRY *v32; // rbx
  _SLIST_ENTRY **v33; // rax
  int v35; // [rsp+34h] [rbp-94h]
  unsigned int ListHead; // [rsp+38h] [rbp-90h]
  _SLIST_HEADER *ListHeada; // [rsp+38h] [rbp-90h]
  unsigned int v38; // [rsp+40h] [rbp-88h]
  unsigned __int8 v39; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *ListEntry; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *SpinLock; // [rsp+58h] [rbp-70h]
  unsigned int **v42; // [rsp+60h] [rbp-68h]
  PSLIST_ENTRY v43; // [rsp+68h] [rbp-60h] BYREF
  _SLIST_ENTRY *v44; // [rsp+70h] [rbp-58h]

  v6 = *(unsigned int ***)(a1 + 992);
  v7 = 0;
  v42 = v6;
  if ( !v6 )
    return v7;
  ListEntry = 0LL;
  v8 = 4LL * a6;
  v9 = 0LL;
  v38 = 0;
  v10 = 0;
  v11 = 0;
  if ( v8 )
  {
    v12 = 0LL;
    do
    {
      v13 = v11 + 1;
      v11 += 2;
      v14 = *(unsigned __int16 *)(a5 + 2 * v12) ^ *(unsigned __int16 *)(a5 + 2 * v13);
      v12 = v11;
      v10 += v14;
    }
    while ( v11 < v8 );
    v38 = v10;
    v9 = 0LL;
  }
  v15 = v10 % *((_DWORD *)v6 + 2);
  v16 = 0;
  v17 = (_SLIST_ENTRY *)&(&v6[2 * v15 + 4])[v15];
  v44 = v17;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    goto LABEL_23;
  }
  if ( CurrentIrql == 2 )
  {
LABEL_23:
    SpinLock = (KSPIN_LOCK *)&v17[1];
    KxAcquireSpinLock((PKSPIN_LOCK)&v17[1]);
    goto LABEL_10;
  }
  SpinLock = (KSPIN_LOCK *)&v17[1];
  if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&v17[1], v15) )
    return v7;
  v16 = 0;
LABEL_10:
  Next = v17->Next;
  if ( v17->Next != v17 )
  {
    while ( 1 )
    {
      ++v16;
      if ( *((_DWORD *)&Next[1].Next + 3) == v10 && LODWORD(Next[2].Next) == a6 )
        break;
LABEL_25:
      Next = Next->Next;
      if ( Next == v17 )
      {
        if ( v16 == 4 )
        {
          v9 = (_SLIST_ENTRY *)*((_QWORD *)&v17->Next + 1);
          ListEntry = v9;
          if ( v9->Next != v17 || (v26 = (_SLIST_ENTRY **)*((_QWORD *)&v9->Next + 1), *v26 != v9) )
            __fastfail(3u);
          *((_QWORD *)&v17->Next + 1) = v26;
          *v26 = v17;
        }
        goto LABEL_30;
      }
    }
    v20 = 0;
    v21 = Next;
    v35 = 0;
    do
    {
      v22 = 32;
      if ( LODWORD(v21[2].Next) < 0x20 )
        v22 = (unsigned int)v21[2].Next;
      ListHead = v22;
      if ( RtlCompareMemory(&v21[2].Next + 1, (const void *)(a5 + 8LL * v20), 8LL * v22) != 8LL * v22 )
      {
        v10 = v38;
        goto LABEL_25;
      }
      v20 = ListHead + v35;
      v21 = v21[1].Next;
      v35 += ListHead;
    }
    while ( v21 );
    _InterlockedIncrement((volatile signed __int32 *)&Next[1].Next + 2);
    v23 = Next->Next;
    if ( *(&Next->Next->Next + 1) != Next || (v24 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1), *v24 != Next) )
      __fastfail(3u);
    *v24 = v23;
    *((_QWORD *)&v23->Next + 1) = v24;
    v25 = v17->Next;
    if ( *(&v17->Next->Next + 1) != v17 )
      __fastfail(3u);
    Next->Next = v25;
    *((_QWORD *)&Next->Next + 1) = v17;
    *((_QWORD *)&v25->Next + 1) = Next;
    v17->Next = Next;
    KxReleaseSpinLock((PKSPIN_LOCK)&v17[1]);
    __writecr8(v39);
    goto LABEL_55;
  }
LABEL_30:
  Next = 0LL;
  v27 = 0;
  if ( !a6 )
  {
LABEL_51:
    *((_DWORD *)&Next[1].Next + 3) = v38;
    LODWORD(Next[2].Next) = a6;
    *((_DWORD *)&Next[1].Next + 2) = 2;
    v33 = (_SLIST_ENTRY **)*((_QWORD *)&v17->Next + 1);
    if ( *v33 != v17 )
      __fastfail(3u);
    Next->Next = v17;
    *((_QWORD *)&Next->Next + 1) = v33;
    *v33 = Next;
    *((_QWORD *)&v17->Next + 1) = Next;
    KxReleaseSpinLock((PKSPIN_LOCK)&v17[1]);
    __writecr8(v39);
    if ( v9 )
      EtwpDereferenceStackEntry(v9, v6);
LABEL_55:
    v43 = Next;
    *(_QWORD *)(a4 + 16) = &v43;
    *(_QWORD *)(a4 + 24) = 8LL;
    EtwpLogKernelEvent(a4, *(_QWORD *)(a1 + 1112), *(_DWORD *)a1, 2u, a3, a2);
    EtwpDereferenceStackEntry(v43, *(unsigned int ***)(a1 + 992));
    return 1;
  }
  v28 = (_SLIST_HEADER *)(v6 + 2);
  v29 = 0LL;
  ListHeada = (_SLIST_HEADER *)(v6 + 2);
  do
  {
    v30 = RtlpInterlockedPopEntrySList(v28);
    if ( !v30 )
      break;
    if ( v27 + 32 >= a6 )
      v31 = a6 - v27;
    else
      v31 = 32;
    memmove(&v30[2].Next + 1, (const void *)(a5 + 8LL * v27), 8LL * v31);
    if ( v27 )
      LODWORD(v30[2].Next) = v31;
    else
      Next = v30;
    if ( v29 )
      v29[1].Next = v30;
    v27 += v31;
    v30[1].Next = 0LL;
    v29 = v30;
  }
  while ( v27 < a6 );
  v17 = v44;
  v9 = ListEntry;
  if ( v27 >= a6 )
  {
    v6 = v42;
    goto LABEL_51;
  }
  KxReleaseSpinLock(SpinLock);
  __writecr8(v39);
  if ( Next )
  {
    do
    {
      v32 = Next[1].Next;
      RtlpInterlockedPushEntrySList(ListHeada, Next);
      Next = v32;
    }
    while ( v32 );
  }
  if ( ListEntry )
    EtwpDereferenceStackEntry(ListEntry, v42);
  return v7;
}
