/*
 * XREFs of WmipCopyFromEventQueues @ 0x14057A6A8
 * Callers:
 *     WmipReceiveNotifications @ 0x14011FCA4 (WmipReceiveNotifications.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

LONG __fastcall WmipCopyFromEventQueues(
        struct _KEVENT **a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        char a7)
{
  __int64 v7; // rbp
  struct _KEVENT **v8; // rsi
  struct _KEVENT **v9; // r9
  __int64 i; // r10
  __int64 v11; // rdx
  __int64 v12; // rax
  int v14; // r15d
  _DWORD *v15; // r12
  unsigned int v16; // r8d
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 *v19; // rdx
  __int64 v20; // r9
  LONG result; // eax
  struct _KEVENT *v22; // rdi
  unsigned __int64 v23; // rbx
  void *v24; // rcx
  __int64 v25; // r14
  unsigned int *v26; // rdi
  size_t v27; // r8
  unsigned int v28; // ebx
  __int64 v29; // rax
  struct _KEVENT *v30; // rdi
  __int64 v31; // rax

  v7 = a2;
  v8 = a1;
  if ( a2 )
  {
    v9 = a1 + 1;
    for ( i = a2; i; --i )
    {
      v11 = (__int64)*(v9 - 1);
      if ( a7 )
      {
        v31 = *(_QWORD *)(v11 + 96);
        if ( v31 && *(_DWORD *)(v11 + 116) )
        {
          *v9 = (struct _KEVENT *)v31;
          *(_WORD *)(v31 + 10) = 0;
          LODWORD((*v9)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v11 + 120) << 16;
          *(_DWORD *)(v11 + 120) = 0;
          goto LABEL_6;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 128);
        if ( v12 && *(_DWORD *)(v11 + 148) )
        {
          *v9 = (struct _KEVENT *)v12;
          *(_WORD *)(v12 + 10) = 0;
          LODWORD((*v9)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v11 + 152) << 16;
          *(_DWORD *)(v11 + 152) = 0;
          goto LABEL_6;
        }
      }
      *v9 = 0LL;
LABEL_6:
      v9 += 2;
    }
  }
  v14 = 0;
  v15 = 0LL;
  while ( 1 )
  {
    v16 = -1;
    v17 = 0x7FFFFFFFFFFFFFFFLL;
    v18 = 0;
    if ( !(_DWORD)v7 )
      break;
    v19 = (__int64 *)(v8 + 1);
    do
    {
      v20 = *v19;
      if ( *v19 && *(_QWORD *)(v20 + 16) < v17 )
      {
        v17 = *(_QWORD *)(v20 + 16);
        v16 = v18;
      }
      ++v18;
      v19 += 2;
    }
    while ( v18 < (unsigned int)v7 );
    if ( v16 == -1 )
      break;
    v25 = 2LL * v16;
    v15 = a3;
    v26 = (unsigned int *)v8[2 * v16 + 1];
    v27 = *v26;
    v28 = (v27 + 7) & 0xFFFFFFF8;
    memmove(a3, v26, v27);
    v14 += v28;
    a3[3] = v28;
    a3 = (_DWORD *)((char *)a3 + v28);
    v29 = v26[3];
    if ( (_DWORD)v29 )
      v30 = (struct _KEVENT *)((char *)v26 + v29);
    else
      v30 = 0LL;
    v8[v25 + 1] = v30;
  }
  *a6 = v15;
  result = (int)a5;
  *a5 = v14;
  if ( (_DWORD)v7 )
  {
    do
    {
      v22 = *v8;
      v23 = -(__int64)(a7 != 0) & 0xFFFFFFFFFFFFFFE0uLL;
      v24 = *(struct _LIST_ENTRY **)((char *)&(*v8)[5].Header.WaitListHead.Flink + v23);
      if ( v24 )
      {
        ExFreePoolWithTag(v24, 0);
        *(struct _LIST_ENTRY **)((char *)&v22[5].Header.WaitListHead.Flink + v23) = 0LL;
        *(LONG *)((char *)&v22[6].Header.SignalState + v23) = 0;
        *(struct _LIST_ENTRY **)((char *)&v22[5].Header.WaitListHead.Blink + v23) = 0LL;
      }
      result = KeResetEvent(v22);
      v8 += 2;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
