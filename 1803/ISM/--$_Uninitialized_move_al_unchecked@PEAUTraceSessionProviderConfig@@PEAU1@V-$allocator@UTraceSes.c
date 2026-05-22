/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUTraceSessionProviderConfig@@PEAU1@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@PEAU1@00AEAV?$allocator@UTraceSessionProviderConfig@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800724F0
 * Callers:
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180070AAC (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<TraceSessionProviderConfig *,TraceSessionProviderConfig *,std::allocator<TraceSessionProviderConfig>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  try
  {
    while ( a1 != a2 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 32);
      a3 += 40LL;
      a1 += 40LL;
    }
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}
