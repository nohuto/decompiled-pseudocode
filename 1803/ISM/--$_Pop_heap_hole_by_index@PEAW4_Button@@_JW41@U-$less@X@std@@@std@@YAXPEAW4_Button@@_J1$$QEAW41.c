/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAW4_Button@@_JW41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1800B8FD4
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@_JU?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800B8790 (--$_Sort_unchecked@PEAW4_Button@@_JU-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<enum _Button *,__int64,enum _Button,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 i; // r10
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r8d
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; a2 = i )
  {
    v8 = 2 * i + 2;
    i = 2 * i + 1;
    if ( *(_DWORD *)(a1 + 4 * v8) >= *(_DWORD *)(a1 + 4 * v8 - 4) )
      i = v8;
    *(_DWORD *)(a1 + 4 * a2) = *(_DWORD *)(a1 + 4 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4 * a2) = *(_DWORD *)(a1 + 4 * a3 - 4);
    a2 = a3 - 1;
  }
  if ( v6 < a2 )
  {
    do
    {
      v9 = (a2 - 1) >> 1;
      v10 = *(_DWORD *)(a1 + 4 * v9);
      if ( v10 >= *a4 )
        break;
      *(_DWORD *)(a1 + 4 * a2) = v10;
      a2 = (a2 - 1) >> 1;
    }
    while ( v6 < v9 );
  }
  result = (unsigned int)*a4;
  *(_DWORD *)(a1 + 4 * a2) = result;
  return result;
}
