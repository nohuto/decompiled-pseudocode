/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___ @ 0x18008DBE8
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___ @ 0x18008DBE8 (CTransitionVisualController--ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18008EF6C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000ACFC (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___ @ 0x18008DBE8 (CTransitionVisualController--ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___(
        __int64 a1,
        _DWORD **a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 600) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 400);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x30) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 576); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * i);
        if ( (*(_DWORD *)(v8 + 600) & 0xFFF) == 0xFFF )
        {
          if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            ++**a2;
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_ccaea7de34ba34ea3a568d9728ee50f3___(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
