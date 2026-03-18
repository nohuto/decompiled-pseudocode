/*
 * XREFs of vAdvanceAETEdges @ 0x1C009FC00
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00449B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall vAdvanceAETEdges(__int64 **a1)
{
  int v1; // r9d
  __int64 **v2; // r8
  __int64 **v3; // rdx
  int v5; // eax
  bool v6; // sf
  __int64 *result; // rax

  v1 = *((_DWORD *)a1 + 4);
  v2 = a1;
  v3 = (__int64 **)*a1;
  do
  {
    if ( (*((_DWORD *)v3 + 2))-- == 1 )
    {
      result = *v3;
      --v1;
      *a1 = *v3;
    }
    else
    {
      *((_DWORD *)v3 + 3) += *((_DWORD *)v3 + 8);
      v5 = *((_DWORD *)v3 + 6);
      v6 = v5 + *((_DWORD *)v3 + 5) < 0;
      *((_DWORD *)v3 + 5) += v5;
      result = (__int64 *)*((unsigned int *)v3 + 5);
      if ( !v6 )
      {
        *((_DWORD *)v3 + 5) = (_DWORD)result - *((_DWORD *)v3 + 7);
        result = (__int64 *)*((unsigned int *)v3 + 9);
        *((_DWORD *)v3 + 3) += (_DWORD)result;
      }
      a1 = v3;
    }
    v3 = (__int64 **)*a1;
  }
  while ( *a1 != (__int64 *)v2 );
  *((_DWORD *)v2 + 4) = v1;
  return result;
}
