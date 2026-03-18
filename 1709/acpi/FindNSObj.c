/*
 * XREFs of FindNSObj @ 0x1C00198E0
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C00161AC (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x1C00198E0 (FindNSObj.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C000C0B0 (GetObjectPathNoLock.c)
 *     FindNSObj @ 0x1C00198E0 (FindNSObj.c)
 *     HeapInsertFreeList @ 0x1C0019BF0 (HeapInsertFreeList.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  _QWORD *ObjectPathNoLock; // rax
  size_t v13; // rbx
  _BYTE *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  _QWORD *v23; // rdi
  _QWORD *v24; // rbx
  unsigned int NSObj; // eax
  unsigned int Size; // [rsp+30h] [rbp-48h]
  unsigned int Size_4; // [rsp+34h] [rbp-44h]
  void *v29; // [rsp+38h] [rbp-40h]
  char *v30; // [rsp+40h] [rbp-38h]
  int v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a6;
  v9 = a2;
  v10 = -1073741772;
  if ( (a6 & 1) != 0 && (!a2 || a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3) || !a2 )
    return v10;
  if ( v6 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_28:
    v23 = (_QWORD *)(v9 + 24);
    v24 = *(_QWORD **)(v9 + 24);
    if ( v23 != v24 )
    {
      while ( 1 )
      {
        NSObj = FindNSObj(v6, (_DWORD)v24, a3, v7, a5, v8);
        v10 = NSObj;
        if ( NSObj != -1073741772 )
        {
          if ( NSObj )
            break;
        }
        v24 = (_QWORD *)*v24;
        v7 = v34;
        v8 = a6;
        LODWORD(a3) = v33;
        v6 = a1;
        if ( v23 == v24 )
          return v10;
      }
    }
    return v10;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  Size_4 = v11 + 1;
  if ( v11 + 1 < v11 )
    return 3221225621LL;
  v29 = (void *)HeapAlloc(gpheapGlobal, 1381258056, v11 + 1);
  ObjectPathNoLock = GetObjectPathNoLock(v9);
  v13 = -1LL;
  v14 = ObjectPathNoLock;
  v15 = -1LL;
  do
    ++v15;
  while ( *((_BYTE *)ObjectPathNoLock + v15) );
  Size = v15 + *(_DWORD *)(a5 + 24) + 1;
  v30 = (char *)HeapAlloc(gpheapGlobal, 1381258056, Size);
  if ( v30 && v29 )
  {
    memset(v29, 0, Size_4);
    memset(v30, 0, Size);
    v16 = *(_DWORD *)(a5 + 24);
    if ( v16 )
      memmove(v30, *(const void **)(a5 + 32), v16);
    v17 = *(_QWORD *)(a5 + 8);
    v18 = *(_DWORD *)(v17 + 24);
    if ( v18 )
      memmove(v29, *(const void **)(v17 + 32), v18);
    do
      ++v13;
    while ( v14[v13] );
    memmove(&v30[*(unsigned int *)(a5 + 24)], v14, v13);
    v19 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      *((_BYTE *)v29 + v19) = 48;
    else
      *((_BYTE *)v29 + v19) = 49;
    v10 = 0;
    if ( *(_DWORD *)(a5 + 24) )
    {
      v20 = *(_QWORD *)(a5 + 32);
      *(_DWORD *)(v20 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v20 - 8), v20 - 16);
      KeReleaseSpinLock(&gmutHeap, NewIrql);
    }
    v21 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v21 + 24) )
    {
      v22 = *(_QWORD *)(v21 + 32);
      *(_DWORD *)(v22 - 16) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v22 - 8), v22 - 16);
      KeReleaseSpinLock(&gmutHeap, NewIrql);
    }
    ++*(_QWORD *)(a5 + 16);
    *(_QWORD *)(a5 + 32) = v30;
    *(_DWORD *)(a5 + 24) = Size;
    *(_QWORD *)(*(_QWORD *)(a5 + 8) + 32LL) = v29;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = Size_4;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v6 = a1;
    LODWORD(a3) = v33;
    v8 = a6;
    v7 = v34;
    v9 = a2;
    goto LABEL_28;
  }
  return 3221225626LL;
}
