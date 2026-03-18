/*
 * XREFs of PfTTraceListTrim @ 0x1406C48E8
 * Callers:
 *     PfTTraceListAdd @ 0x140498398 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall PfTTraceListTrim(int a1, unsigned int a2, __int64 a3)
{
  _QWORD *v4; // rcx
  int *v5; // r9
  int *v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  _QWORD *v10; // rdx

  if ( a1 == 1 )
  {
    v4 = &unk_14036DB08;
    v5 = &dword_14036DB20;
    v6 = &dword_14036DC24;
  }
  else
  {
    v4 = &unk_14036DAF8;
    v5 = &dword_14036DB18;
    v6 = (int *)&unk_14036DC20;
  }
  while ( *v5 > a2 )
  {
    v7 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v8 = *v7;
    if ( (_QWORD *)v7[1] != v4 || *(_QWORD **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v4 = v8;
    *(_QWORD *)(v8 + 8) = v4;
    if ( *((_DWORD *)v7 + 7) )
      v9 = *((_DWORD *)v7 + 12);
    else
      v9 = *((_DWORD *)v7 + 9);
    --*v5;
    *v6 += v9;
    v10 = *(_QWORD **)(a3 + 8);
    if ( *v10 != a3 )
      __fastfail(3u);
    *v7 = a3;
    v7[1] = v10;
    *v10 = v7;
    *(_QWORD *)(a3 + 8) = v7;
  }
}
