/*
 * XREFs of ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C00A3E30
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C00767F0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001A584 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureForwarding(FxPkgGeneral *this, FxIoQueue *TargetQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v5; // esi
  unsigned __int8 v6; // r8
  unsigned __int16 v7; // ax
  const void *_a1; // rdi
  unsigned __int8 v10; // r8
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v13; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, WdfRequestTypeCreate) )
  {
    FxNonPagedObject::Lock(this, &irql, v6);
    m_DriverCreatedQueue = this->m_DriverCreatedQueue;
    if ( m_DriverCreatedQueue )
    {
      v5 = -1073741811;
      m_ObjectSize = m_DriverCreatedQueue->m_ObjectSize;
      v13 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgGeneral_cpp_Traceguids, v13, -1073741811);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    else
    {
      this->m_DriverCreatedQueue = TargetQueue;
    }
    FxNonPagedObject::Unlock(this, irql, v10);
    return v5;
  }
  else
  {
    v7 = TargetQueue->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x12u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
}
