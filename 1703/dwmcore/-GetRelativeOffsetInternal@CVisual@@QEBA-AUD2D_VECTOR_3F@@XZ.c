/*
 * XREFs of ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x180085F64
 * Callers:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800865A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800867A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180087F00 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180088104 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CVisual::GetRelativeOffsetInternal(
        CVisual *this,
        struct D2D_VECTOR_3F *__return_ptr retstr)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v2 + 4) & 0x400000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xA000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *retstr = *(struct D2D_VECTOR_3F *)(i + 4);
  }
  else
  {
    retstr->x = 0.0;
    *(_QWORD *)&retstr->y = 0LL;
  }
  return retstr;
}
