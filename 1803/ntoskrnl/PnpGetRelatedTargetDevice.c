/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x140006DB4
 * Callers:
 *     IoGetRelatedTargetDevice @ 0x1404981D4 (IoGetRelatedTargetDevice.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14058A0FC (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     PnpSendIrp @ 0x140006EE4 (PnpSendIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRelatedTargetDevice(PFILE_OBJECT FileObject, _QWORD *a2)
{
  KIRQL v4; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD v11[9]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( !RelatedDeviceObject )
    return 3221225486LL;
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 1819;
  LODWORD(v11[1]) = 4;
  v11[5] = RelatedDeviceObject;
  v11[6] = FileObject;
  result = PnpSendIrp((_DWORD)RelatedDeviceObject, (unsigned int)v11, v6, 0, (__int64)&P);
  v8 = result;
  if ( (int)result < 0 )
    return result;
  if ( !P )
    return 3221225486LL;
  v9 = *(_DWORD *)P == 1 ? *((_QWORD *)P + 1) : 0LL;
  ExFreePoolWithTag(P, 0);
  if ( !v9 )
    return 3221225486LL;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
  if ( !v10 )
    return 3221225486LL;
  *a2 = v10;
  return v8;
}
