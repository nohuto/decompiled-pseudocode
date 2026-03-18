/*
 * XREFs of ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0038220
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0063264 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C007DF50 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgGeneral *Context)
{
  if ( OriginalIrp->IoStatus.Status < 0 )
  {
    FxFileObject::_DestroyFileObject(
      Context->m_Device,
      (_WDF_FILEOBJECT_CLASS)Context->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      OriginalIrp->Tail.Overlay.CurrentStackLocation->FileObject);
    FxPkgGeneral::DecrementOpenHandleCount(Context);
  }
  if ( OriginalIrp->PendingReturned && OriginalIrp->CurrentLocation <= OriginalIrp->StackCount )
    OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return (unsigned int)OriginalIrp->IoStatus.Status;
}
