/*
 * XREFs of ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0095868
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C00767F0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001A584 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001FC20 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0095BF0 (WPP_IFR_SF_Lqd.c)
 */

__int64 __fastcall FxPkgIo::ConfigureForwarding(FxPkgIo *this, FxIoQueue *TargetQueue, _WDF_REQUEST_TYPE RequestType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 _a3; // r14
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned __int16 v10; // ax
  const void *globals; // rbx
  unsigned int v12; // r8d
  FxIoQueue *m_DefaultQueue; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v15; // rbx
  FxIoQueue *v16; // rdx
  unsigned __int16 v17; // ax
  const void *v18; // rbx
  unsigned __int8 v19; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a3 = RequestType;
  v9 = 0;
  if ( FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, RequestType) )
  {
    FxNonPagedObject::Lock(this, &irql, v8);
    m_DefaultQueue = this->m_DefaultQueue;
    if ( TargetQueue == m_DefaultQueue )
    {
      m_ObjectSize = TargetQueue->m_ObjectSize;
      v15 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v15 = 0LL;
      v9 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x19u, WPP_FxPkgIo_cpp_Traceguids, v15, -1073741808);
    }
    else
    {
      v16 = this->m_DispatchTable[_a3];
      if ( !v16 || v16 == m_DefaultQueue )
      {
        this->m_DispatchTable[_a3] = TargetQueue;
        FxObject::MarkNoDeleteDDI(TargetQueue, ObjectLock);
        goto LABEL_16;
      }
      v17 = TargetQueue->m_ObjectSize;
      v18 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v17 )
        v18 = 0LL;
      v9 = -1071644156;
      WPP_IFR_SF_Lqd(m_Globals, (unsigned __int8)v16, v12, 0x1Au, WPP_FxPkgIo_cpp_Traceguids, _a3, v18, -1071644156);
    }
    FxVerifierDbgBreakPoint(m_Globals);
LABEL_16:
    FxNonPagedObject::Unlock(this, irql, v19);
    return v9;
  }
  v10 = TargetQueue->m_ObjectSize;
  globals = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v10 )
    globals = 0LL;
  v9 = -1073741808;
  WPP_IFR_SF_Lqd(m_Globals, v7, v8, 0x18u, WPP_FxPkgIo_cpp_Traceguids, _a3, globals, -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v9;
}
