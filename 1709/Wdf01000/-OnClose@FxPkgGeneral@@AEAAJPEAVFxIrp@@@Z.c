/*
 * XREFs of ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00263F0
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001450 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnClose(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // r13
  char v3; // r15
  unsigned __int64 v4; // rbp
  _FILE_OBJECT *FileObject; // r8
  int FileObjectFromWdm; // eax
  unsigned __int8 v9; // r8
  unsigned int v10; // r12d
  _LIST_ENTRY *m_PkgContext; // rdi
  _LIST_ENTRY *i; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v14; // rcx
  _IRP *v15; // rax
  FxDeviceBase *m_DeviceBase; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int v18; // eax
  _FILE_OBJECT *_a1; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v21; // eax
  FxFileObject *FsContext; // r14
  KIRQL v23; // r9
  _LIST_ENTRY *v24; // r8
  _LIST_ENTRY *Blink; // rdx
  char v26; // di
  FxDeviceBase *v27; // rcx
  _DEVICE_OBJECT *v28; // r10
  NTSTATUS _a2; // eax
  _IRP *v31; // rax
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v33; // rcx
  _FX_DRIVER_GLOBALS *v34; // rdi
  unsigned int v35; // edx
  FxDeviceBase *v36; // rcx
  FxFileObject *ppFxFileObject; // [rsp+40h] [rbp-48h] BYREF
  FxFileObject *pFxFO; // [rsp+48h] [rbp-40h] BYREF
  char v39; // [rsp+98h] [rbp+10h]
  unsigned __int8 v40; // [rsp+A0h] [rbp+18h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+A8h] [rbp+20h] BYREF

  m_Irp = FxIrp->m_Irp;
  v3 = 0;
  pFxFO = 0LL;
  v4 = 0LL;
  v39 = 0;
  FileObject = m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( !FileObject || (FileObject->Flags & 0x100) == 0 )
  {
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          FileObject,
                          &pFxFO);
    v10 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 && pFxFO->m_ObjectSize )
        v4 = (unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL;
      m_PkgContext = (_LIST_ENTRY *)pFxFO->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
      if ( m_PkgContext != &this->m_FileObjectInfoHeadList )
      {
        while ( LODWORD(m_PkgContext[9].Flink) || !m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          if ( m_PkgContext == &this->m_FileObjectInfoHeadList )
            goto LABEL_9;
        }
        m_PkgContext = m_PkgContext->Blink;
      }
    }
LABEL_9:
    for ( i = m_PkgContext->Flink; i != &this->m_FileObjectInfoHeadList; i = i->Flink )
    {
      if ( i[4].Blink )
      {
        Flink = i[4].Flink;
        v40 = 0;
        if ( Flink )
          ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &v40);
        ((void (__fastcall *)(unsigned __int64))i[4].Blink)(v4);
        v14 = i[4].Flink;
        if ( v14 )
          ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v14->Flink[1].Blink)(v14, v40);
      }
    }
    v15 = FxIrp->m_Irp;
    m_DeviceBase = this->m_DeviceBase;
    ppFxFileObject = 0LL;
    CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
    v18 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
    _a1 = CurrentStackLocation->FileObject;
    m_Globals = m_DeviceBase->m_Globals;
    globals = m_Globals;
    if ( v18 == 1 )
      goto LABEL_43;
    if ( !_a1 && v18 != 4 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0xBu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
LABEL_43:
      v26 = 0;
      goto $Passthru;
    }
    if ( v18 == 2 )
    {
      FsContext = (FxFileObject *)_a1->FsContext;
      ppFxFileObject = FsContext;
      _a1->FsContext = 0LL;
    }
    else if ( v18 == 3 )
    {
      FsContext = (FxFileObject *)_a1->FsContext2;
      ppFxFileObject = FsContext;
      _a1->FsContext2 = 0LL;
    }
    else
    {
      v21 = FxFileObject::_GetFileObjectFromWdm(
              (FxDevice *)m_DeviceBase,
              WdfFileObjectWdfCannotUseFsContexts,
              _a1,
              &ppFxFileObject);
      FsContext = ppFxFileObject;
      if ( v21 >= 0 && ppFxFileObject )
        goto LABEL_22;
      WPP_IFR_SF_q(globals, 2u, 0x12u, 0xCu, WPP_FxFileObject_cpp_Traceguids, _a1);
      WPP_IFR_SF_(globals, 2u, 0x12u, 0xDu, WPP_FxFileObject_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    }
    if ( !FsContext )
    {
LABEL_29:
      v26 = 0;
      goto $Passthru;
    }
LABEL_22:
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Lock(m_DeviceObject, (unsigned __int8 *)&globals, v9);
      v23 = (unsigned __int8)globals;
    }
    else
    {
      v23 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
      LOBYTE(globals) = v23;
    }
    v24 = FsContext->m_Link.Flink;
    if ( v24->Blink != &FsContext->m_Link || (Blink = FsContext->m_Link.Blink, Blink->Flink != &FsContext->m_Link) )
      __fastfail(3u);
    Blink->Flink = v24;
    v24->Blink = Blink;
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
      && (v33 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
    {
      FxVerifierLock::Unlock(v33, v23, (unsigned __int8)v24);
    }
    else
    {
      KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v23);
    }
    FsContext->DeleteObject(FsContext);
    goto LABEL_29;
  }
  v26 = 1;
  v10 = 0;
  v39 = 1;
$Passthru:
  v27 = this->m_DeviceBase;
  if ( BYTE1(v27[1].m_ChildEntry.Blink) )
  {
    v31 = FxIrp->m_Irp;
    ++v31->CurrentLocation;
    ++v31->Tail.Overlay.CurrentStackLocation;
    v10 = IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v28 = v27->m_DeviceObject.m_DeviceObject;
    v3 = 0;
    if ( *(_QWORD *)&v27[3].m_SpinLock.m_DbgFlagIsInitialized && ((__int64)v28[1].CurrentIrp & 1) == 0 )
    {
      _a2 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v28[1], FxIrp->m_Irp, a5, 1u, 0x20u);
      if ( _a2 < 0 )
      {
        v34 = this->m_Globals;
        WPP_IFR_SF_qd(v34, 2u, 0xDu, 0x1Eu, WPP_FxPkgGeneral_cpp_Traceguids, FxIrp->m_Irp, _a2);
        if ( v34->FxVerifierOn
          && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v34, v35, 9u) || v34->FxVerifyDownlevel) )
        {
          FxVerifierDbgBreakPoint(v34);
        }
        v26 = v39;
      }
      else
      {
        v3 = 1;
      }
    }
    FxIrp->m_Irp->IoStatus.Status = v10;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  if ( !v26 && _InterlockedExchangeAdd(&this->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
  {
    v36 = this->m_DeviceBase;
    if ( BYTE5(v36[1].m_Globals) )
      FxObject::DeleteObject(v36);
  }
  if ( v3 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return v10;
}
