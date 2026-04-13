/*
 * XREFs of ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180033F9C
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18002DF14 (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180042104 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find_first_not_of(_QWORD *a1, _WORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rbx
  char *v7; // rax
  __int64 v8; // r9
  _WORD *v9; // rdx

  if ( *a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a2[v3] );
  }
  else
  {
    v3 = 0LL;
  }
  v4 = a1[2];
  if ( v4 )
  {
    if ( a1[3] < 8uLL )
      v5 = a1;
    else
      v5 = (_QWORD *)*a1;
    v6 = (unsigned __int64)v5 + 2 * v4;
    if ( a1[3] < 8uLL )
      v7 = (char *)a1;
    else
      v7 = (char *)*a1;
    while ( (unsigned __int64)v7 < v6 )
    {
      if ( !v3 )
        goto LABEL_20;
      v8 = v3;
      v9 = a2;
      while ( *v9 != *(_WORD *)v7 )
      {
        ++v9;
        if ( !--v8 )
        {
          v9 = 0LL;
          break;
        }
      }
      if ( !v9 )
      {
LABEL_20:
        if ( a1[3] >= 8uLL )
          a1 = (_QWORD *)*a1;
        return (v7 - (char *)a1) >> 1;
      }
      v7 += 2;
    }
  }
  return -1LL;
}
