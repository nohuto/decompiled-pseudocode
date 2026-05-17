/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x18006C5B0
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800EE220 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int i; // r11d
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r8
  _QWORD *v8; // r8
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *result; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r11
  _QWORD *v14; // rax
  _QWORD *v15; // rax

  v2 = *(_DWORD *)(a2 + 32);
  if ( v2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  for ( i = v2 + 128; ; ++i )
  {
    if ( v2 == *(_DWORD *)(a2 + 32) )
    {
      v8 = *(_QWORD **)(a2 + 24);
      v9 = (_QWORD **)a2;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 8) <= 0x80u )
      {
        v7 = v2;
      }
      else
      {
        _BitScanReverse(&v6, i);
        v7 = i ^ (1 << v6);
        v5 = *(_QWORD *)(v5 + 8LL * (v6 - 7));
      }
      v8 = (_QWORD *)(v5 + 16 * v7);
      v9 = (_QWORD **)v8;
    }
    v10 = *v9;
    if ( v10 != v8 )
      break;
LABEL_8:
    if ( ++v2 >= *(_DWORD *)(a1 + 8) )
      return 0LL;
  }
  while ( !v10[2] )
  {
    v10 = (_QWORD *)*v10;
    if ( v10 == v8 )
      goto LABEL_8;
  }
  v12 = *(_QWORD **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v13 = *(_QWORD **)(a2 + 8), *v13 != a2) )
    __fastfail(3u);
  *v13 = v12;
  v12[1] = v13;
  v14 = *(_QWORD **)(a2 + 24);
  if ( v14 != v8 )
  {
    if ( (_QWORD *)*v14 == v14 )
      --*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v8 == v8 )
      ++*(_DWORD *)(a1 + 24);
  }
  *(_DWORD *)(a2 + 32) = v2;
  *(_QWORD *)(a2 + 24) = v8;
  v15 = (_QWORD *)*v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 )
    __fastfail(3u);
  *(_QWORD *)a2 = v15;
  *(_QWORD *)(a2 + 8) = v10;
  v15[1] = a2;
  result = v10;
  *v10 = a2;
  return result;
}
