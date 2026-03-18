/*
 * XREFs of ?erase@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@@Z @ 0x180151CC8
 * Callers:
 *     ?TryPopDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@@Z @ 0x180151BE4 (-TryPopDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

_QWORD *__fastcall std::list<ComputeScribbleLatencyData>::erase(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  *(&xmmword_1802D63F0 + 1) = (char *)*(&xmmword_1802D63F0 + 1) - 1;
  std::_Deallocate(a3, 1uLL, 0x30uLL);
  *a2 = v3;
  return a2;
}
