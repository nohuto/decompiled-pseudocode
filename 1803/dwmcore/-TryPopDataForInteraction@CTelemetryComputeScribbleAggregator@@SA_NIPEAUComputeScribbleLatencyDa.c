/*
 * XREFs of ?TryPopDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@@Z @ 0x180151BE4
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180014418 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 * Callees:
 *     ?erase@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@@Z @ 0x180151CC8 (-erase@-$list@UComputeScribbleLatencyData@@V-$allocator@UComputeScribbleLatencyData@@@std@@@std@.c)
 *     McTemplateU0qqxxx @ 0x180151D18 (McTemplateU0qqxxx.c)
 */

char __fastcall CTelemetryComputeScribbleAggregator::TryPopDataForInteraction(
        unsigned int a1,
        struct ComputeScribbleLatencyData *a2)
{
  int v4; // edx
  _DWORD *v5; // rcx
  char v6; // di
  _DWORD *v7; // rbx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  void **v10; // rax
  __int128 v11; // xmm1
  char v13; // [rsp+60h] [rbp+18h] BYREF

  AcquireSRWLockExclusive(&stru_1802D5F58);
  v5 = xmmword_1802D63F0;
  v6 = 0;
  v7 = *(_DWORD **)xmmword_1802D63F0;
  while ( v7 != v5 )
  {
    v8 = v7[4];
    if ( a1 >= v8 && a1 <= v7[5] )
    {
      v11 = *((_OWORD *)v7 + 2);
      *(_OWORD *)a2 = *((_OWORD *)v7 + 1);
      *((_OWORD *)a2 + 1) = v11;
      std::list<ComputeScribbleLatencyData>::erase(v5, &v13, v7);
      v6 = 1;
      break;
    }
    v9 = v7[5];
    if ( a1 <= v9 )
    {
      v7 = *(_DWORD **)v7;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqxxx((_DWORD)v5, v4, v8, v9, *((_QWORD *)v7 + 3), *((_QWORD *)v7 + 4), *((_QWORD *)v7 + 5));
      v10 = (void **)std::list<ComputeScribbleLatencyData>::erase(v5, &v13, v7);
      v5 = xmmword_1802D63F0;
      v7 = *v10;
    }
  }
  ReleaseSRWLockExclusive(&stru_1802D5F58);
  return v6;
}
