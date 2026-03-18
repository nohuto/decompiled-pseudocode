/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0034200
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C007DAFC (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp)
{
  FxDevice *v5; // rbx
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrpPreprocessInfo *v8; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  unsigned __int8 MajorFunction; // cl
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  int v14; // ecx
  void *m_PkgPnp; // rcx
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdx
  _LIST_ENTRY *Flink; // rcx
  _IO_STACK_LOCATION *v20; // rax
  __int64 v21; // r11
  FxIrpPreprocessInfo *v22; // r10
  unsigned int NumMinorFunctions; // r8d
  int v24; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *PPObject; // [rsp+58h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Device & 1) != 0 )
  {
    v6 = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - v6);
  }
  if ( v5->m_Type == 4098 )
  {
    PPObject = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, &PPObject, (void *)Device, 0x1002u, v6);
    v5 = (FxDevice *)PPObject;
  }
  m_Globals = v5->m_Globals;
  if ( !Irp )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, Device, 0xBu) || m_Globals->FxVerifyDownlevel) )
  {
    p_m_CxDeviceInfoListHead = &v5->m_CxDeviceInfoListHead;
    Flink = v5->m_CxDeviceInfoListHead.Flink;
    if ( Flink != &v5->m_CxDeviceInfoListHead )
    {
      if ( v5->m_PreprocessInfoListHead.Flink != &v5->m_PreprocessInfoListHead )
      {
        if ( Flink == p_m_CxDeviceInfoListHead )
          goto LABEL_8;
        while ( Flink[1].Flink != *(_LIST_ENTRY **)&DriverGlobals[-7].DriverName[16] )
        {
          Flink = Flink->Flink;
          if ( Flink == p_m_CxDeviceInfoListHead )
            goto LABEL_8;
        }
      }
      WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxDeviceApiKm_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_Globals);
      v5 = (FxDevice *)PPObject;
    }
  }
LABEL_8:
  v8 = (FxIrpPreprocessInfo *)v5->m_PreprocessInfoListHead.Flink->Flink;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  v10 = CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v10;
  MajorFunction = v10->MajorFunction;
  if ( (v10->MajorFunction == 22 || MajorFunction == 23 || MajorFunction == 27 && v10->MinorFunction != 2)
    && (v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v5->m_DeviceObject.m_DeviceObject[1], Irp, a5, 1u, 0x20u),
        v13 = v12,
        v12 < 0) )
  {
    Irp->IoStatus.Status = v12;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
  }
  else if ( v8 == (FxIrpPreprocessInfo *)&v5->m_PreprocessInfoListHead )
  {
LABEL_14:
    v14 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
    if ( v14 == 22 || v14 == 27 )
    {
      m_PkgPnp = v5->m_PkgPnp;
      if ( !m_PkgPnp )
LABEL_22:
        m_PkgPnp = v5->m_PkgDefault;
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          m_PkgPnp = v5->m_PkgGeneral;
          break;
        case 3u:
        case 4u:
        case 0xEu:
        case 0xFu:
          m_PkgPnp = v5->m_PkgIo;
          break;
        case 0x17u:
          m_PkgPnp = v5->m_PkgWmi;
          break;
        default:
          goto LABEL_22;
      }
    }
    return (unsigned int)(*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgPnp + 64LL))(m_PkgPnp, Irp);
  }
  else
  {
    v20 = Irp->Tail.Overlay.CurrentStackLocation;
    v21 = v20->MajorFunction;
    while ( 1 )
    {
      v22 = v8;
      v8 = (FxIrpPreprocessInfo *)v8->ListEntry.Flink;
      if ( v22->Dispatch[v21].EvtDevicePreprocess )
        break;
LABEL_42:
      if ( v8 == (FxIrpPreprocessInfo *)&v5->m_PreprocessInfoListHead )
        goto LABEL_14;
    }
    NumMinorFunctions = v22->Dispatch[v21].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v24 = 0;
      while ( v22->Dispatch[v21].MinorFunctions[v24] != v20->MinorFunction )
      {
        if ( ++v24 >= NumMinorFunctions )
          goto LABEL_42;
      }
    }
    return (unsigned int)PreprocessIrp(v5, Irp, v22, v8);
  }
  return v13;
}
