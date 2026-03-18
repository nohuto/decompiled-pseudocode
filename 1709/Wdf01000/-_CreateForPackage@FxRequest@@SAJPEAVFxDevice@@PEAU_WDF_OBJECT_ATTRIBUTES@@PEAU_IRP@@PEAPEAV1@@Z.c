/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0037E90
 * Callers:
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C001A678 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C006379C (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0010980 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001EF10 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C0037F44 (--0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FxDevice *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxRequest **Request)
{
  FxRequestFromLookaside *RequestMemory; // rax
  FxRequest *v9; // rax
  FxRequest *v10; // rbx
  FxDevice *v11; // r9
  int _a1; // eax
  unsigned int v13; // esi

  *Request = 0LL;
  RequestMemory = (FxRequestFromLookaside *)FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  if ( RequestMemory )
  {
    FxRequestFromLookaside::FxRequestFromLookaside(RequestMemory, Device, Irp);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( Irp )
      FxRequest::AssignMemoryBuffers(v10, Device->m_ReadWriteIoType);
    if ( Device->m_Globals->FxRequestParentOptimizationOn )
      v11 = 0LL;
    else
      v11 = Device;
    _a1 = FxObject::Commit(v10, (_FX_DRIVER_GLOBALS *)RequestAttributes, 0LL, v11, 0);
    v13 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
      FxObject::DeleteFromFailedCreate(v10);
    }
    else
    {
      *Request = v10;
    }
    return v13;
  }
  else
  {
    WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
