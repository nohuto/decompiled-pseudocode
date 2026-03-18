/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@IEAAXXZ @ 0x18001DC68
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180025CB4 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
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
