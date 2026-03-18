/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x14014D6D8
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     CcReEngageWorkerThreads @ 0x14014CBA0 (CcReEngageWorkerThreads.c)
 */

void __fastcall CcAdjustWriteBehindThreadPool(__int64 a1, char a2)
{
  if ( a2 )
  {
    *(_DWORD *)(a1 + 896) = 1;
    if ( *(_BYTE *)(a1 + 736) )
      *(_BYTE *)(a1 + 736) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 896) = -1;
    if ( *(_QWORD *)(a1 + 256) != a1 + 256 && !*(_BYTE *)(a1 + 312) )
      CcReEngageWorkerThreads(a1, *(_DWORD *)(a1 + 200), 0);
  }
}
