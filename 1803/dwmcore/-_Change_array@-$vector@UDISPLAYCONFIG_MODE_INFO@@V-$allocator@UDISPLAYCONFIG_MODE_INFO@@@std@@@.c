/*
 * XREFs of ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x18021E574
 * Callers:
 *     std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___ @ 0x18021CF50 (std--vector_DISPLAYCONFIG_MODE_INFO_std--allocator_DISPLAYCONFIG_MODE_INFO___--_Resize__lambda_e.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate(v6, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 6, 0x40uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 6);
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 6);
}
