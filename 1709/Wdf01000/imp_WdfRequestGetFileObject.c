/*
 * XREFs of imp_WdfRequestGetFileObject @ 0x1C0001340
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D85D4 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  FxRequest *v2; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDevice *m_Device; // rbp
  _FX_DRIVER_GLOBALS *v6; // rdi
  _FILE_OBJECT *FileObject; // r8
  int _a1; // edi
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp+18h] BYREF
  FxFileObject *ppFxFileObject; // [rsp+78h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v2 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxRequest *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4104 )
  {
    pRequest = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v2 = pRequest;
  }
  m_Globals = v2->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v2->m_Globals, Request, 9u) || m_Globals->FxVerifyDownlevel) )
  {
    FxNonPagedObject::Lock(v2, &irql);
    if ( m_Globals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
    else
      IsDriverOwned = 0;
    FxNonPagedObject::Unlock(pRequest, irql);
    if ( IsDriverOwned < 0 )
      return 0LL;
    v2 = pRequest;
  }
  m_Device = v2->m_Device;
  v6 = v2->m_Globals;
  ppFxFileObject = 0LL;
  if ( v6->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v2, &irql);
    _a1 = v6->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(v2, v6) : 0;
    FxNonPagedObject::Unlock(v2, irql);
    if ( _a1 < 0 )
      goto LABEL_34;
  }
  FileObject = v2->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject && v2->m_IrpAllocation == 2 )
    return 0LL;
  if ( FxFileObject::_GetFileObjectFromWdm(m_Device, m_Device->m_FileObjectClass, FileObject, &ppFxFileObject) < 0 )
  {
LABEL_19:
    _a1 = -1073741808;
LABEL_34:
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x3Fu, WPP_FxRequestApi_cpp_Traceguids, _a1);
    return 0LL;
  }
  if ( !ppFxFileObject )
  {
    if ( m_Device->m_FileObjectClass < WdfFileObjectInvalid )
      return 0LL;
    goto LABEL_19;
  }
  if ( ppFxFileObject->m_ObjectSize )
    return (WDFFILEOBJECT__ *)((unsigned __int64)ppFxFileObject ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
