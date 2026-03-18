/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x14029A6FC
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x14029A4F8 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x14029C1A0 (RtlpHpLfhSubsegmentFree.c)
 */

__int64 *__fastcall RtlpHpLfhOwnerCleanup(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 v5; // rbp
  __int64 *result; // rax
  __int64 **v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax

  v2 = (__int64 *)(a2 + 40);
  v5 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 1) + 224);
  result = *(__int64 **)(a2 + 40);
  if ( result != (__int64 *)(a2 + 40) )
  {
    if ( (__int64 *)result[1] != v2 || (v7 = *(__int64 ***)(a2 + 48), *v7 != v2) )
      __fastfail(3u);
    *v7 = result;
    v8 = (_QWORD *)(a2 + 24);
    result[1] = (__int64)v7;
    v9 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v9 != v8 )
      __fastfail(3u);
    v10 = *v2;
    if ( *(_QWORD *)(*(_QWORD *)*v2 + 8LL) != *v2 || **(_QWORD **)(v10 + 8) != v10 )
      __fastfail(3u);
    *v9 = v10;
    v8[1] = *(_QWORD *)(v10 + 8);
    result = *(__int64 **)(v10 + 8);
    *result = (__int64)v8;
    *(_QWORD *)(v10 + 8) = v9;
  }
  v11 = (_QWORD *)(a2 + 24);
  while ( 1 )
  {
    v12 = (_QWORD *)*v11;
    if ( (_QWORD *)*v11 == v11 )
      break;
    if ( (_QWORD *)v12[1] != v11 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
      __fastfail(3u);
    *v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( *((_WORD *)v12 + 16) )
      --*(_QWORD *)(a2 + 8);
    *((_WORD *)v12 + 16) = *((_WORD *)v12 + 17);
    *((_BYTE *)v12 + 38) = 2;
    result = (__int64 *)RtlpHpLfhSubsegmentFree(a1, v12, v5, 1LL);
  }
  return result;
}
