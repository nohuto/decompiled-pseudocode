/*
 * XREFs of ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C009F738
 * Callers:
 *     ?RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C007D090 (-RemoveDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C002E864 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxPkgPnp::RemoveDmaEnabler(FxPkgPnp *this, unsigned __int64 Enabler)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v5; // r8

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v5 = (const void *)(Enabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Enabler + 10) )
      v5 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0xDu, WPP_FxPkgPnpKM_cpp_Traceguids, (const void *)Enabler, v5);
  }
  FxTransactionedList::Remove(this->m_DmaEnablerList, this->m_Globals, (FxTransactionedEntry *)(Enabler + 120));
}
