/*
 * XREFs of ?Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D841C
 * Callers:
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8338 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsAllocatedFromIo(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx

  if ( this->m_IrpAllocation )
  {
    v3 = -1073741811;
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x3Bu, WPP_FxRequest_cpp_Traceguids, _a1, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    return 0;
  }
  return v3;
}
