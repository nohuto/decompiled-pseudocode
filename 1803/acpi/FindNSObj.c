/*
 * XREFs of FindNSObj @ 0x1C0046440
 * Callers:
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C00466AC (FindNSObjMainNoLock.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C00037FC (GetObjectPathNoLock.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     FindNSObj @ 0x1C0046440 (FindNSObj.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // r10d
  int v8; // ecx
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  void *v14; // rsi
  char *ObjectPathNoLock; // rax
  char *v16; // rbp
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  size_t v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rbp
  _QWORD *v25; // rdi
  unsigned int NSObj; // eax
  unsigned int Size; // [rsp+30h] [rbp-28h]
  unsigned int Size_4; // [rsp+34h] [rbp-24h]
  char *v29; // [rsp+38h] [rbp-20h]
  int v31; // [rsp+70h] [rbp+18h]
  int v32; // [rsp+78h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v7 = a1;
  v8 = a6;
  v9 = -1073741772;
  v10 = a4;
  if ( (a6 & 1) != 0 )
  {
    if ( !a2 )
      return v9;
    if ( a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3 )
      return 3221225524LL;
  }
  if ( !a2 )
    return v9;
  if ( v7 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_34:
    v24 = (_QWORD *)(a2 + 24);
    v25 = *(_QWORD **)(a2 + 24);
    while ( v24 != v25 )
    {
      NSObj = FindNSObj(v7, (_DWORD)v25, a3, v10, a5, v8);
      v9 = NSObj;
      if ( NSObj != -1073741772 )
      {
        if ( NSObj )
          break;
      }
      v25 = (_QWORD *)*v25;
      v10 = v32;
      v8 = a6;
      LODWORD(a3) = v31;
      v7 = a1;
    }
    return v9;
  }
  v12 = -1;
  v13 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  if ( v13 + 1 >= v13 )
    v12 = v13 + 1;
  Size_4 = v12;
  if ( v13 + 1 < v13 )
    return 3221225621LL;
  v14 = (void *)HeapAlloc(gpheapGlobal, 1381258056, v12);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v16 = ObjectPathNoLock;
  v17 = -1LL;
  do
    ++v17;
  while ( ObjectPathNoLock[v17] );
  Size = v17 + *(_DWORD *)(a5 + 24) + 1;
  v29 = (char *)HeapAlloc(gpheapGlobal, 1381258056, Size);
  if ( v29 && v14 )
  {
    memset(v14, 0, Size_4);
    memset(v29, 0, Size);
    v18 = *(_DWORD *)(a5 + 24);
    if ( v18 )
      memmove(v29, *(const void **)(a5 + 32), v18);
    v19 = *(_QWORD *)(a5 + 8);
    v20 = *(_DWORD *)(v19 + 24);
    if ( v20 )
      memmove(v14, *(const void **)(v19 + 32), v20);
    v21 = -1LL;
    do
      ++v21;
    while ( v16[v21] );
    memmove(&v29[*(unsigned int *)(a5 + 24)], v16, v21);
    v22 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      *((_BYTE *)v14 + v22) = 48;
    else
      *((_BYTE *)v14 + v22) = 49;
    if ( *(_DWORD *)(a5 + 24) )
      HeapFree(*(_QWORD *)(a5 + 32));
    v23 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v23 + 24) )
    {
      HeapFree(*(_QWORD *)(v23 + 32));
      v23 = *(_QWORD *)(a5 + 8);
    }
    ++*(_QWORD *)(a5 + 16);
    *(_QWORD *)(a5 + 32) = v29;
    *(_DWORD *)(a5 + 24) = Size;
    *(_QWORD *)(v23 + 32) = v14;
    v9 = 0;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = Size_4;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v7 = a1;
    LODWORD(a3) = v31;
    v8 = a6;
    v10 = v32;
    goto LABEL_34;
  }
  return 3221225626LL;
}
