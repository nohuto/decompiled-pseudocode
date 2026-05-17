/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x18006246C
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x180061780 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x18005EFC0 (RtlpHpLfhSubsegmentFree.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCleanup(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r8
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 **v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // rcx

  result = *(unsigned __int8 *)(a2 + 1);
  v3 = (__int64 *)(a2 + 40);
  v6 = *(_QWORD *)(a1 + 8 * result + 208);
  if ( (__int64 *)*v3 != v3 )
  {
    v10 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || (v11 = *(__int64 ***)(a2 + 48), *v11 != v3) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    v12 = a2 + 24;
    v13 = *(_QWORD **)(a2 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != a2 + 24 || *v13 != v12 )
      __fastfail(3u);
    v14 = *v3;
    if ( *(_QWORD *)(*(_QWORD *)*v3 + 8LL) != *v3 || **(_QWORD **)(v14 + 8) != v14 )
      __fastfail(3u);
    *v13 = v14;
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 8);
    result = *(_QWORD *)(v14 + 8);
    *(_QWORD *)result = v12;
    *(_QWORD *)(v14 + 8) = v13;
  }
  v7 = (__int64 *)(a2 + 24);
  while ( (__int64 *)*v7 != v7 )
  {
    v8 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 || (v9 = *(_QWORD *)v8, *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( *(_WORD *)(v8 + 32) )
      --*(_QWORD *)(a2 + 8);
    *(_WORD *)(v8 + 32) = *(_WORD *)(v8 + 34);
    *(_BYTE *)(v8 + 38) = 2;
    result = RtlpHpLfhSubsegmentFree(a1, v8, v6, 1u);
  }
  return result;
}
