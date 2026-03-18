/*
 * XREFs of ?_Change_array@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@AEAAXQEAVCVisualDepthGeometry@@_K1@Z @ 0x18021FB3C
 * Callers:
 *     ??$emplace_back@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAX$$QEAVCVisualDepthGeometry@@@Z @ 0x18021F454 (--$emplace_back@VCVisualDepthGeometry@@@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVisualDep.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

__int64 __fastcall std::vector<CVisualDepthGeometry>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  __int64 result; // rax

  v4 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(char **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        `vector destructor iterator'(
          v4 + 84,
          16LL,
          4LL,
          dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly);
        v4 += 192;
      }
      while ( v4 != v9 );
      v4 = *(char **)a1;
    }
    std::_Deallocate(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 192LL, 0xC0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 192 * a3;
  result = a2 + 192 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
