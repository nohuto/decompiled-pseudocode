/*
 * XREFs of RtlInitEnumerationHashTable @ 0x180074400
 * Callers:
 *     RtlInitWeakEnumerationHashTable @ 0x1800EE190 (RtlInitWeakEnumerationHashTable.c)
 * Callees:
 *     sub_180074558 @ 0x180074558 (sub_180074558.c)
 */

char __fastcall RtlInitEnumerationHashTable(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180074558(a1, v7, 0LL);
  v4 = (__int64 *)v7[0];
  ++*(_DWORD *)(a1 + 28);
  if ( (__int64 *)*v4 == v4 )
    ++*(_DWORD *)(a1 + 24);
  v5 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v4;
  *(_QWORD *)a2 = v5;
  v5[1] = a2;
  *v4 = a2;
  *(_DWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = v4;
  return 1;
}
