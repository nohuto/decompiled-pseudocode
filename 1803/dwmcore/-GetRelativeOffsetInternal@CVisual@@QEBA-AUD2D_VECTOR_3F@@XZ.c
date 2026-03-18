/*
 * XREFs of ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004CDE0
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x18004A970 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18004BEF0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004BF70 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004D47C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004DA70 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801A7EA8 (-GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CVisual::GetRelativeOffsetInternal(
        CVisual *this,
        struct D2D_VECTOR_3F *__return_ptr retstr)
{
  __int64 v2; // rcx
  FLOAT v3; // eax
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v2 + 4) & 0x400000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0xA000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)&retstr->x = *(_QWORD *)(i + 4);
    v3 = *(float *)(i + 12);
  }
  else
  {
    v3 = 0.0;
    *(_QWORD *)&retstr->x = 0LL;
  }
  retstr->z = v3;
  return retstr;
}
