/*
 * XREFs of ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180151B44
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??$_Insert_range@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@U_Iterator_base0@2@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180151AAC (--$_Insert_range@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@UComputeScribbleLaten.c)
 *     McTemplateU0qqxxx @ 0x180151D18 (McTemplateU0qqxxx.c)
 */

void __fastcall CTelemetryComputeScribbleAggregator::AddLatencyData(char **a1)
{
  int v2; // edx
  __int64 v3; // rcx
  char *v4; // rdi
  char *v5; // rbx

  AcquireSRWLockExclusive(&stru_1802D5F58);
  v4 = a1[1];
  v5 = *a1;
  if ( (unsigned __int64)*(&xmmword_1802D63F0 + 1) + ((v4 - v5) >> 5) > 0xA )
  {
    while ( v5 != v4 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqxxx(
          v3,
          v2,
          *(_DWORD *)v5,
          *((_DWORD *)v5 + 1),
          *((_QWORD *)v5 + 1),
          *((_QWORD *)v5 + 2),
          *((_QWORD *)v5 + 3));
      v5 += 32;
    }
  }
  else
  {
    std::list<ComputeScribbleLatencyData>::_Insert_range<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>>(
      v3,
      xmmword_1802D63F0,
      v5,
      v4);
  }
  ReleaseSRWLockExclusive(&stru_1802D5F58);
}
