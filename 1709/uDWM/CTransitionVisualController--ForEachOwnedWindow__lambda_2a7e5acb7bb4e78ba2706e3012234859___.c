/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x180002668
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x180002668 (CTransitionVisualController--ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___ @ 0x180002668 (CTransitionVisualController--ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___(
        __int64 a1,
        CTransitionVisualController **a2,
        char a3)
{
  int v3; // r9d
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 600) & 0x10000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 400);
    if ( !v7 || (*(_BYTE *)(v7 + 240) & 0x30) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 576); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i);
        if ( (*(_DWORD *)(v9 + 600) & 0xFFF) == 0xFFF )
        {
          CTransitionVisualController::RestoreWindow(*a2, *(struct CWindowData **)(*(_QWORD *)(a1 + 552) + 8 * i), 0);
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_2a7e5acb7bb4e78ba2706e3012234859___(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
