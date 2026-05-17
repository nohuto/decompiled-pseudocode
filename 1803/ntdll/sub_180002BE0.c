/*
 * XREFs of sub_180002BE0 @ 0x180002BE0
 * Callers:
 *     sub_18005FB9C @ 0x18005FB9C (sub_18005FB9C.c)
 * Callees:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 */

__int64 *__fastcall sub_180002BE0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 v5; // rbp
  __int64 *result; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 **v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  __int64 v13; // rcx

  v2 = (__int64 *)(a2 + 40);
  v5 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 1) + 224);
  result = *(__int64 **)(a2 + 40);
  if ( result != (__int64 *)(a2 + 40) )
  {
    if ( (__int64 *)result[1] != v2 || (v10 = *(__int64 ***)(a2 + 48), *v10 != v2) )
      __fastfail(3u);
    *v10 = result;
    v11 = (_QWORD *)(a2 + 24);
    result[1] = (__int64)v10;
    v12 = (_QWORD *)v11[1];
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v12 != v11 )
      __fastfail(3u);
    v13 = *v2;
    if ( *(_QWORD *)(*(_QWORD *)*v2 + 8LL) != *v2 || **(_QWORD **)(v13 + 8) != v13 )
      __fastfail(3u);
    *v12 = v13;
    v11[1] = *(_QWORD *)(v13 + 8);
    result = *(__int64 **)(v13 + 8);
    *result = (__int64)v11;
    *(_QWORD *)(v13 + 8) = v12;
  }
  v7 = (_QWORD *)(a2 + 24);
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    if ( (_QWORD *)v8[1] != v7 || (v9 = *v8, *(_QWORD **)(*v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( *((_WORD *)v8 + 16) )
      --*(_QWORD *)(a2 + 8);
    *((_WORD *)v8 + 16) = *((_WORD *)v8 + 17);
    *((_BYTE *)v8 + 38) = 2;
    result = (__int64 *)sub_18005FECC(a1, v8, v5, 1LL);
  }
  return result;
}
