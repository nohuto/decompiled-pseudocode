/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180046AC0
 * Callers:
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CD3DDeviceLevel1 **this)
{
  CHwDisplayRenderTarget *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsValid; // al
  int v5; // eax
  unsigned int v6; // ebx

  v2 = (CHwDisplayRenderTarget *)(this - 27);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
  if ( (char *)v3 == (char *)CHwDisplayRenderTarget::IsValid )
    IsValid = CHwDisplayRenderTarget::IsValid(v2);
  else
    IsValid = v3();
  if ( IsValid )
  {
    v5 = CD3DDeviceLevel1::CheckDeviceState(this[1], this[4]);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v5, 0x207u);
  }
  else
  {
    return (unsigned int)-2003304442;
  }
  return v6;
}
