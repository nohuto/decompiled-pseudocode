/*
 * XREFs of EtwpTraceStackKey @ 0x1402821CC
 * Callers:
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     KxTryToAcquireSpinLock @ 0x1402050F8 (KxTryToAcquireSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x140281F90 (EtwpDereferenceStackEntry.c)
 */

char __fastcall EtwpTraceStackKey(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int **v6; // r15
  char v7; // di
  unsigned __int64 v8; // r8
  PSLIST_ENTRY v9; // rbp
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // edx
  int v15; // ebx
  _SLIST_ENTRY *v16; // r14
  unsigned __int8 CurrentIrql; // al
  KSPIN_LOCK *v18; // r12
  _SLIST_ENTRY *Next; // rsi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _SLIST_ENTRY *v22; // r15
  unsigned int v23; // edx
  _SLIST_ENTRY *v24; // rax
  _SLIST_ENTRY **v25; // rcx
  _SLIST_ENTRY *v26; // rax
  PSLIST_ENTRY *v27; // rax
  unsigned int v28; // ebx
  _SLIST_HEADER *v29; // rbp
  PSLIST_ENTRY v30; // r14
  PSLIST_ENTRY v31; // r15
  unsigned int v32; // r12d
  _SLIST_ENTRY *v33; // rbx
  _SLIST_ENTRY **v34; // rax
  int v36; // [rsp+30h] [rbp-98h]
  unsigned int v37; // [rsp+38h] [rbp-90h]
  unsigned int **v38; // [rsp+40h] [rbp-88h]
  unsigned int v39; // [rsp+48h] [rbp-80h]
  _SLIST_HEADER *ListHead; // [rsp+50h] [rbp-78h]
  unsigned __int8 v41; // [rsp+58h] [rbp-70h]
  PSLIST_ENTRY v42; // [rsp+60h] [rbp-68h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+68h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-58h]
  _SLIST_ENTRY *v45; // [rsp+78h] [rbp-50h]

  v6 = *(unsigned int ***)(a1 + 2144);
  v7 = 0;
  v38 = v6;
  if ( !v6 )
    return v7;
  ListEntry = 0LL;
  v8 = 4LL * a6;
  v9 = 0LL;
  v37 = 0;
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
    v37 = v10;
    v9 = 0LL;
  }
  v15 = 0;
  v16 = (_SLIST_ENTRY *)&(&v6[2 * (v10 % *((_DWORD *)v6 + 2)) + 4])[v10 % *((_DWORD *)v6 + 2)];
  v45 = v16;
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  else if ( CurrentIrql != 2 )
  {
    v18 = (KSPIN_LOCK *)&v16[1];
    SpinLock = (PKSPIN_LOCK)&v16[1];
    if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&v16[1]) )
      return v7;
    goto LABEL_12;
  }
  v18 = (KSPIN_LOCK *)&v16[1];
  SpinLock = (PKSPIN_LOCK)&v16[1];
  KxAcquireSpinLock((PKSPIN_LOCK)&v16[1]);
LABEL_12:
  Next = v16->Next;
  if ( v16->Next != v16 )
  {
    v20 = v37;
    while ( 1 )
    {
      ++v15;
      if ( *((_DWORD *)&Next[1].Next + 3) == v20 && LODWORD(Next[2].Next) == a6 )
        break;
LABEL_26:
      Next = Next->Next;
      if ( Next == v16 )
      {
        if ( v15 == 4 )
        {
          v9 = (PSLIST_ENTRY)*((_QWORD *)&v16->Next + 1);
          ListEntry = v9;
          if ( v9->Next != v16 || (v27 = (PSLIST_ENTRY *)*((_QWORD *)&v9->Next + 1), *v27 != v9) )
            __fastfail(3u);
          *((_QWORD *)&v16->Next + 1) = v27;
          *v27 = v16;
        }
        v6 = v38;
        goto LABEL_32;
      }
    }
    v21 = 0;
    v22 = Next;
    v36 = 0;
    do
    {
      v23 = 32;
      if ( LODWORD(v22[2].Next) < 0x20 )
        v23 = (unsigned int)v22[2].Next;
      v39 = v23;
      if ( RtlCompareMemory(&v22[2].Next + 1, (const void *)(a5 + 8LL * v21), 8LL * v23) != 8LL * v23 )
      {
        v20 = v37;
        goto LABEL_26;
      }
      v21 = v39 + v36;
      v22 = v22[1].Next;
      v36 += v39;
    }
    while ( v22 );
    _InterlockedIncrement((volatile signed __int32 *)&Next[1].Next + 2);
    v24 = Next->Next;
    if ( *(&Next->Next->Next + 1) != Next || (v25 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1), *v25 != Next) )
      __fastfail(3u);
    *v25 = v24;
    *((_QWORD *)&v24->Next + 1) = v25;
    v26 = v16->Next;
    if ( *(&v16->Next->Next + 1) != v16 )
      __fastfail(3u);
    Next->Next = v26;
    *((_QWORD *)&Next->Next + 1) = v16;
    *((_QWORD *)&v26->Next + 1) = Next;
    v16->Next = Next;
    KxReleaseSpinLock(v18);
    __writecr8(v41);
    goto LABEL_56;
  }
LABEL_32:
  Next = 0LL;
  v28 = 0;
  if ( !a6 )
    goto LABEL_52;
  v29 = (_SLIST_HEADER *)(v6 + 2);
  v30 = 0LL;
  ListHead = (_SLIST_HEADER *)(v6 + 2);
  do
  {
    v31 = RtlpInterlockedPopEntrySList(v29);
    if ( !v31 )
      break;
    if ( v28 + 32 >= a6 )
      v32 = a6 - v28;
    else
      v32 = 32;
    memmove(&v31[2].Next + 1, (const void *)(a5 + 8LL * v28), 8LL * v32);
    if ( v28 )
      LODWORD(v31[2].Next) = v32;
    else
      Next = v31;
    if ( v30 )
      v30[1].Next = v31;
    v28 += v32;
    v31[1].Next = 0LL;
    v30 = v31;
  }
  while ( v28 < a6 );
  v16 = v45;
  v9 = ListEntry;
  if ( v28 >= a6 )
  {
LABEL_52:
    *((_DWORD *)&Next[1].Next + 3) = v37;
    LODWORD(Next[2].Next) = a6;
    *((_DWORD *)&Next[1].Next + 2) = 2;
    v34 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
    if ( *v34 != v16 )
      __fastfail(3u);
    Next->Next = v16;
    *((_QWORD *)&Next->Next + 1) = v34;
    *v34 = Next;
    *((_QWORD *)&v16->Next + 1) = Next;
    KxReleaseSpinLock((PKSPIN_LOCK)&v16[1]);
    __writecr8(v41);
    if ( v9 )
      EtwpDereferenceStackEntry(v9, v38);
LABEL_56:
    v42 = Next;
    *(_QWORD *)(a4 + 16) = &v42;
    *(_QWORD *)(a4 + 24) = 8LL;
    EtwpLogKernelEvent(a4, *(_QWORD *)(a1 + 2256), *(_DWORD *)a1, 2u, a3, a2);
    EtwpDereferenceStackEntry(v42, *(unsigned int ***)(a1 + 2144));
    return 1;
  }
  KxReleaseSpinLock(SpinLock);
  __writecr8(v41);
  if ( Next )
  {
    do
    {
      v33 = Next[1].Next;
      RtlpInterlockedPushEntrySList(ListHead, Next);
      Next = v33;
    }
    while ( v33 );
  }
  if ( ListEntry )
    EtwpDereferenceStackEntry(ListEntry, v38);
  return v7;
}
