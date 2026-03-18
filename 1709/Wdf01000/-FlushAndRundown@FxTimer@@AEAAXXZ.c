/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C007E95C
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x1C007E920 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0064980 (-Stop@FxTimer@@QEAAEE@Z.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v7; // rdx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    m_ObjectSize = this->m_ObjectSize;
    m_Globals = this->m_Globals;
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v7 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, v7, this->m_CallbackThread);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxTimer::Stop(this, 1u, a3);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 547, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  this->Release(this, this, 553, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}
