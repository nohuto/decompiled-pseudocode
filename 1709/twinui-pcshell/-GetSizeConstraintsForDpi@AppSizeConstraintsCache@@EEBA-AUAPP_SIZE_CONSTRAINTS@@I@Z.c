/*
 * XREFs of ?GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA?AUAPP_SIZE_CONSTRAINTS@@I@Z @ 0x180085740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__fastcall AppSizeConstraintsCache::GetSizeConstraintsForDpi(__int64 a1, int *a2, int a3)
{
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rax
  _DWORD *i; // rcx

  *(_QWORD *)a2 = AppSizeConstraintsCache::s_defaultMinSize;
  *((_QWORD *)a2 + 1) = AppSizeConstraintsCache::s_defaultMaxSize;
  v6 = MulDiv(a2[1], a3, 96);
  *(_QWORD *)a2 = __PAIR64__(v6, MulDiv(*a2, a3, 96));
  v7 = MulDiv(a2[3], a3, 96);
  *((_QWORD *)a2 + 1) = __PAIR64__(v7, MulDiv(a2[2], a3, 96));
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = *(_DWORD **)(a1 + 16); a3 != *i; i += 5 )
    {
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 24) )
        return a2;
    }
    *(_OWORD *)a2 = *(_OWORD *)(*(_QWORD *)(a1 + 16) + 20 * v8 + 4);
  }
  return a2;
}
