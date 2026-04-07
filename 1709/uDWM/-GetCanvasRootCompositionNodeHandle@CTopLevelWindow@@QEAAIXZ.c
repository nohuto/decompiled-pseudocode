/*
 * XREFs of ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180078624
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180078EA4 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 *     ?GetRootVisualForWindow@CWindowList@@UEAAJ_NPEAUIDwmWindow@@PEAPEAUIDwmChannel@@PEAI@Z @ 0x18007B740 (-GetRootVisualForWindow@CWindowList@@UEAAJ_NPEAUIDwmWindow@@PEAPEAUIDwmChannel@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::GetCanvasRootCompositionNodeHandle(CTopLevelWindow *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 32);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( v3 )
      return *(unsigned int *)(v3 + 24);
  }
  return result;
}
