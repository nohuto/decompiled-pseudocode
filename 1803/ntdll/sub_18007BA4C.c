/*
 * XREFs of sub_18007BA4C @ 0x18007BA4C
 * Callers:
 *     sub_18002CFE4 @ 0x18002CFE4 (sub_18002CFE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007BA4C(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v7; // r10d
  unsigned __int16 *v8; // rcx
  unsigned __int16 v9; // dx
  bool v10; // cf

  v3 = -1LL;
  v4 = 0LL;
  v7 = 1;
  if ( !a3 )
    return 0;
  v8 = (unsigned __int16 *)&unk_1801101D6;
  while ( 1 )
  {
    v9 = *(v8 - 1);
    v10 = a1 < v9;
    if ( a1 <= v9 )
    {
      if ( a1 != v9 )
        goto LABEL_10;
      if ( a2 < *v8 )
        break;
    }
    v3 = v4;
LABEL_7:
    ++v4;
    v8 += 16;
    if ( v4 >= 5 )
      goto LABEL_11;
  }
  v10 = a1 < v9;
LABEL_10:
  if ( !v10 && (a1 != v9 || a2 >= *v8) )
    goto LABEL_7;
LABEL_11:
  if ( v3 == -1 )
    *a3 = &unk_1801101C0;
  else
    *a3 = (char *)&unk_1801101C0 + 32 * v3;
  return v7;
}
