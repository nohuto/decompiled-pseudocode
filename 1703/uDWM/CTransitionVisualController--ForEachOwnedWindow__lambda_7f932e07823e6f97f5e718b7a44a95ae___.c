/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___ @ 0x18000C938
 * Callers:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x18000C904 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___ @ 0x18000C938 (CTransitionVisualController--ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___ @ 0x18000C938 (CTransitionVisualController--ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rsi
  struct CTopLevelWindow *v10; // rcx

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
          v10 = *(struct CTopLevelWindow **)(v9 + 400);
          if ( v10 )
            CTransitionVisualController::_MoveWindowOffscreen(v10, 1);
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_7f932e07823e6f97f5e718b7a44a95ae___(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
