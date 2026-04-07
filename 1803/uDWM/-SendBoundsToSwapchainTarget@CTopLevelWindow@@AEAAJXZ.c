/*
 * XREFs of ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18006C270
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x180082274 (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001FA0C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SendBoundsToSwapchainTarget(CTopLevelWindow *this)
{
  __int64 v1; // r10
  unsigned int v2; // ebx
  unsigned int cxLeftWidth; // r11d
  int v5; // eax
  struct _MARGINS v7; // [rsp+40h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 97);
  v2 = 0;
  if ( v1 )
  {
    cxLeftWidth = 0;
    if ( *((_BYTE *)this + 768) )
    {
      CTopLevelWindow::GetOutsideMargins(this, &v7);
      cxLeftWidth = v7.cxLeftWidth;
      v1 = *((_QWORD *)this + 97);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 16) + 832LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           cxLeftWidth);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1621u);
  }
  return v2;
}
