/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@IEAAXXZ @ 0x180006454
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180034960 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  BOOL result; // eax

  if ( *(_QWORD *)a1 )
  {
    result = HeapFree(WPF::g_processHeap, 0, *(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
