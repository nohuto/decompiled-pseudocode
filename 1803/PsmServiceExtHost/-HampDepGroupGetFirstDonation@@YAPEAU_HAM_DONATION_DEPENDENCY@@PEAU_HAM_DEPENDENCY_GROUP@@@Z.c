/*
 * XREFs of ?HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CD70
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CC40 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_DONATION_DEPENDENCY *__fastcall HampDepGroupGetFirstDonation(struct _HAM_DEPENDENCY_GROUP *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  _QWORD *j; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // r9
  _QWORD **v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *i; // rdx

  v1 = (unsigned __int64)a1 + 72;
  v2 = *((_QWORD *)a1 + 10);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      j = 0LL;
    else
      j = (_QWORD *)(v2 ^ (v1 | 1));
  }
  else
  {
    j = (_QWORD *)v2;
  }
  if ( !j )
    return 0LL;
  while ( 1 )
  {
    v4 = (_QWORD *)j[10];
    v5 = 0LL;
    if ( v4 != j + 10 )
      v5 = v4 - 2;
    if ( v5 )
      break;
    v6 = (_QWORD **)j[1];
    v7 = j;
    if ( v6 )
    {
      j = (_QWORD *)j[1];
      for ( i = *v6; i; i = (_QWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*j == v7 )
          break;
        v7 = j;
      }
    }
    if ( !j )
      return 0LL;
  }
  return (struct _HAM_DONATION_DEPENDENCY *)v5;
}
