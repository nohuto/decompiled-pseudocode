/*
 * XREFs of imp_WdfFileObjectGetDevice @ 0x1C0034A20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 FileObject)
{
  FxFileObject *v2; // rcx
  __int64 Offset; // r8
  FxDeviceBase *m_DeviceBase; // rax
  FxFileObject *pFO; // [rsp+48h] [rbp+10h] BYREF

  if ( !FileObject )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1018uLL);
  v2 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (FileObject & 1) != 0 )
  {
    Offset = LOWORD(v2->FxNonPagedObject::FxObject::__vftable);
    v2 = (FxFileObject *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4120 )
  {
    pFO = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFO, (void *)FileObject, 0x1018u, Offset);
    v2 = pFO;
  }
  m_DeviceBase = v2->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
