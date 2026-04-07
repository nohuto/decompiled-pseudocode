/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___ @ 0x180096A34
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___ @ 0x180096A34 (CTransitionVisualController--ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x18009EE48 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___ @ 0x180096A34 (CTransitionVisualController--ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x180098380 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 600) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 392);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x30) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 576); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i);
        if ( (*(_DWORD *)(v8 + 600) & 0xFFF) == 0xFFF )
        {
          CTransitionVisualController::_RestoreWindowVisual(
            (CTransitionVisualController *)a1,
            *(struct CWindowData **)(*(_QWORD *)(a1 + 552) + 8 * i));
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
