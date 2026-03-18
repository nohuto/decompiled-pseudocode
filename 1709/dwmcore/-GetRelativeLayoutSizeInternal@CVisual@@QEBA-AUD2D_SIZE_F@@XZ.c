/*
 * XREFs of ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004ED60
 * Callers:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004F460 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004FA64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180053A20 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180053A70 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z @ 0x180054090 (-NotifyCurrentPropertyValues@CVisual@@MEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_F __fastcall CVisual::GetRelativeLayoutSizeInternal(CVisual *this, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v2 + 4) & 0x800000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x9000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return (struct D2D_SIZE_F)a2;
}
