/*
 * XREFs of imp_WdfRequestWdmGetIrp @ 0x1C0034CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

_IRP *__fastcall imp_WdfRequestWdmGetIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  __int64 Offset; // rcx
  FxRequest *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _IRP *m_Irp; // rsi
  int _a2; // edi
  unsigned __int8 v10; // r8
  _FX_DRIVER_GLOBALS *v11; // rdx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v5, &PreviousIrql, a3);
    v11 = v5->m_Globals;
    if ( v11->FxVerifierOn )
      _a2 = FxRequest::Vf_VerifyRequestIsNotCompleted(v5, v11);
    else
      _a2 = 0;
    if ( _a2 >= 0 )
    {
      m_Irp = v5->m_Irp.m_Irp;
    }
    else
    {
      m_Irp = 0LL;
      _a2 = -1073741808;
    }
    FxNonPagedObject::Unlock(v5, PreviousIrql, v10);
  }
  else
  {
    m_Irp = v5->m_Irp.m_Irp;
    _a2 = 0;
  }
  if ( _a2 >= 0 )
    return m_Irp;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x3Du, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, _a2);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
