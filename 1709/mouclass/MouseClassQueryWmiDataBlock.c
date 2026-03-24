/*
 * XREFs of MouseClassQueryWmiDataBlock @ 0x1C0003200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MouseClassQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        int a5,
        ULONG *a6,
        unsigned int a7,
        _QWORD *a8)
{
  KSPIN_LOCK *DeviceExtension; // rdi
  ULONG v9; // ebx
  NTSTATUS v12; // r8d
  KSPIN_LOCK *v13; // rsi
  KIRQL v14; // al
  bool v15; // di

  DeviceExtension = (KSPIN_LOCK *)DeviceObject->DeviceExtension;
  v9 = 0;
  if ( !a3 )
  {
    if ( !a4 && a5 == 1 )
    {
      v9 = 8;
      if ( a7 >= 8 )
      {
        *a8 = DeviceObject;
LABEL_17:
        v12 = 0;
        *a6 = v9;
        return WmiCompleteRequest(DeviceObject, Irp, v12, v9, 0);
      }
LABEL_15:
      v12 = -1073741789;
      return WmiCompleteRequest(DeviceObject, Irp, v12, v9, 0);
    }
LABEL_18:
    v12 = -1073741808;
    return WmiCompleteRequest(DeviceObject, Irp, v12, v9, 0);
  }
  if ( a3 == 1 )
  {
    if ( !a4 && a5 == 1 )
    {
      v9 = 1;
      if ( a7 )
      {
        v13 = DeviceExtension + 9;
        v14 = KeAcquireSpinLockRaiseToDpc(DeviceExtension + 9);
        v15 = DeviceExtension[35] && !*((_BYTE *)DeviceExtension + 288);
        KeReleaseSpinLock(v13, v14);
        *(_BYTE *)a8 = v15;
        goto LABEL_17;
      }
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  v12 = -1073741163;
  return WmiCompleteRequest(DeviceObject, Irp, v12, v9, 0);
}
