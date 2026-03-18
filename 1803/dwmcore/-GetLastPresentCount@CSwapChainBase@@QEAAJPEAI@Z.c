/*
 * XREFs of ?GetLastPresentCount@CSwapChainBase@@QEAAJPEAI@Z @ 0x18013DBEC
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x180218EA4 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1802190B0 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLastPresentCount(CSwapChainBase *this, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(CSwapChainBase *, unsigned int *))(*(_QWORD *)this + 320LL))(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xF6u);
  return v3;
}
