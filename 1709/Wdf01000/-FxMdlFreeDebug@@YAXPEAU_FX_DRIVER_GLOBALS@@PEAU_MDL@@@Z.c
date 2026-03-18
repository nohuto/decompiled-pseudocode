/*
 * XREFs of ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4
 * Callers:
 *     imp_WdfObjectDereferenceActual @ 0x1C0002820 (imp_WdfObjectDereferenceActual.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0003610 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004400 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C00050C0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008E50 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009290 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C000A090 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000A1D0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C000AF40 (-SelfDestruct@FxObject@@MEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000B2A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000C290 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00245E8 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00642DC (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0065430 (--1FxIoContext@@UEAA@XZ.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C007B6F0 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C007B970 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007E13C (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007F6C8 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008ED30 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0091E80 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxMdlFreeDebug(_FX_DRIVER_GLOBALS *FxDriverGlobals, _MDL *Mdl)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int64 *p_AllocatedMdlsLock; // r12
  char v6; // bp
  FxAllocatedMdls *p_AllocatedMdls; // r15
  FxAllocatedMdls *v8; // rbx
  FxAllocatedMdls **p_Next; // r14
  KIRQL v10; // r13
  __int64 v11; // rcx
  _MDL **v12; // rdx
  __int64 v13; // rdx
  bool v14; // zf

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( DebugExtension )
  {
    p_AllocatedMdlsLock = &DebugExtension->AllocatedMdlsLock;
    v6 = 0;
    p_AllocatedMdls = &DebugExtension->AllocatedMdls;
    v8 = &DebugExtension->AllocatedMdls;
    p_Next = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedMdlsLock);
    if ( p_AllocatedMdls )
    {
      while ( 2 )
      {
        v11 = 0LL;
        v12 = (_MDL **)v8;
        do
        {
          if ( *v12 == Mdl )
          {
            v13 = v11;
            v8->Info[v13].Mdl = 0LL;
            v8->Info[v13].Owner = 0LL;
            v8->Info[v13].Caller = 0LL;
            v14 = v8->Count-- == 1;
            if ( v14 && v8 != p_AllocatedMdls )
            {
              *p_Next = v8->Next;
              ExFreePoolWithTag(v8, 0);
            }
            IoFreeMdl(Mdl);
            v6 = 1;
            goto LABEL_13;
          }
          v11 = (unsigned int)(v11 + 1);
          v12 += 3;
        }
        while ( (unsigned int)v11 < 0x10 );
        p_Next = &v8->Next;
        v8 = v8->Next;
        if ( v8 )
          continue;
        break;
      }
    }
LABEL_13:
    KeReleaseSpinLock(p_AllocatedMdlsLock, v10);
    if ( !v6 )
      FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    IoFreeMdl(Mdl);
  }
}
