/*
 * XREFs of ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x1C000E940
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0028DC0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0063414 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C00688C0 (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerDown(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v5; // rsi
  int level; // edi
  WDFDMAENABLER__ *_a1; // rbp
  int globals; // r14d
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v11)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v12)(WDFDMAENABLER__ *); // rax

  m_Globals = this->m_Globals;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  level = 0;
  _a1 = (WDFDMAENABLER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  globals = 0;
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  if ( this->m_EvtDmaEnablerSelfManagedIoStop.m_Method )
  {
    m_Method = this->m_EvtDmaEnablerSelfManagedIoStop.m_Method;
    this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = m_Method ? m_Method(_a1) : 0;
    if ( this->m_EvtDmaEnablerSelfManagedIoStop.m_Status < 0 )
    {
      globals = 6;
      level = this->m_EvtDmaEnablerSelfManagedIoStop.m_Status;
    }
  }
  if ( this->m_EvtDmaEnablerDisable.m_Method && !this->m_DmaEnablerFillFailed )
  {
    v11 = this->m_EvtDmaEnablerDisable.m_Method;
    this->m_EvtDmaEnablerDisable.m_Status = v11 ? v11(_a1) : 0;
    if ( this->m_EvtDmaEnablerDisable.m_Status < 0 )
    {
      globals = 4;
      if ( level >= 0 )
        level = this->m_EvtDmaEnablerDisable.m_Status;
    }
  }
  if ( !this->m_EvtDmaEnablerFlush.m_Method
    || this->m_DmaEnablerFillFailed
    || this->m_DmaEnablerEnableFailed
    || ((v12 = this->m_EvtDmaEnablerFlush.m_Method) == 0LL
      ? (this->m_EvtDmaEnablerFlush.m_Status = 0)
      : (this->m_EvtDmaEnablerFlush.m_Status = v12(_a1)),
        this->m_EvtDmaEnablerFlush.m_Status >= 0) )
  {
LABEL_8:
    if ( level >= 0 )
      return (unsigned int)level;
    goto LABEL_31;
  }
  globals = 2;
  if ( level >= 0 )
  {
    level = this->m_EvtDmaEnablerFlush.m_Status;
    goto LABEL_8;
  }
LABEL_31:
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_qld(m_Globals, a2, a3, 0x1Bu, WPP_FxDmaEnabler_cpp_Traceguids, v5, globals, level);
  return (unsigned int)level;
}
