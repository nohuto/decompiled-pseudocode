/*
 * XREFs of ?_Change_array@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAXQEAUComputeScribbleLatencyData@@_K1@Z @ 0x18021CBA4
 * Callers:
 *     std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___ @ 0x18021BD1C (std--vector_ComputeScribbleLatencyData_std--allocator_ComputeScribbleLatencyData___--_Resize__la.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<ComputeScribbleLatencyData>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate(v6, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 5, 0x20uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
}
