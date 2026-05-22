/*
 * XREFs of std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007B684
 * Callers:
 *     std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007AD8C (std--_Sort_unchecked1_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64_SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 i; // rdx
  __int64 v9; // rsi
  unsigned __int16 v10; // ax
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax

  v4 = a2;
  v5 = a2;
  for ( i = (a3 - 1) / 2; v4 < i; *(_DWORD *)(a1 + 4 * v12 + 8) = *(_DWORD *)(a1 + 12 * v4 + 8) )
  {
    v9 = 2 * v4 + 2;
    v10 = *(_WORD *)(a1 + 12 * v9 - 12);
    v11 = *(_WORD *)(a1 + 12 * v9) < v10
       || *(_WORD *)(a1 + 12 * v9) == v10 && *(_WORD *)(a1 + 12 * v9 + 4) < *(_WORD *)(a1 + 12 * v9 - 8);
    v12 = 3 * v5;
    v4 = 2 * v4 + 1;
    if ( !v11 )
      v4 = v9;
    v5 = v4;
    *(_QWORD *)(a1 + 4 * v12) = *(_QWORD *)(a1 + 12 * v4);
  }
  if ( v4 == i && (a3 & 1) == 0 )
  {
    v13 = 3 * v5;
    v5 = a3 - 1;
    *(_QWORD *)(a1 + 4 * v13) = *(_QWORD *)(a1 + 12 * a3 - 12);
    *(_DWORD *)(a1 + 4 * v13 + 8) = *(_DWORD *)(a1 + 12 * a3 - 4);
  }
  if ( a2 < v5 )
  {
    do
    {
      v14 = (v5 - 1) / 2;
      if ( *(_WORD *)(a1 + 12 * v14) >= *(_WORD *)a4
        && (*(_WORD *)(a1 + 12 * v14) != *(_WORD *)a4 || *(_WORD *)(a1 + 12 * v14 + 4) >= *(_WORD *)(a4 + 4)) )
      {
        break;
      }
      v15 = 3 * v5;
      *(_QWORD *)(a1 + 4 * v15) = *(_QWORD *)(a1 + 12 * v14);
      v5 = (v5 - 1) / 2;
      *(_DWORD *)(a1 + 4 * v15 + 8) = *(_DWORD *)(a1 + 12 * v14 + 8);
    }
    while ( a2 < v14 );
  }
  v16 = 3 * v5;
  *(_QWORD *)(a1 + 4 * v16) = *(_QWORD *)a4;
  result = *(unsigned int *)(a4 + 8);
  *(_DWORD *)(a1 + 4 * v16 + 8) = result;
  return result;
}
