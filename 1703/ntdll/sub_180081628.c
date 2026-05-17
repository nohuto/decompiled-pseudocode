/*
 * XREFs of sub_180081628 @ 0x180081628
 * Callers:
 *     sub_180038624 @ 0x180038624 (sub_180038624.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180081628(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
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
  v8 = (unsigned __int16 *)&unk_180110286;
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
    *a3 = &unk_180110270;
  else
    *a3 = (char *)&unk_180110270 + 32 * v3;
  return v7;
}
