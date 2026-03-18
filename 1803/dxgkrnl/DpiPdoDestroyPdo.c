/*
 * XREFs of DpiPdoDestroyPdo @ 0x1C020BB30
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoReleaseChildDescriptor @ 0x1C01F8848 (DpiFdoReleaseChildDescriptor.c)
 */

void __fastcall DpiPdoDestroyPdo(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID DeviceExtension; // rbx
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  IoFreeWorkItem(*((PIO_WORKITEM *)DeviceExtension + 119));
  ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v5 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  v6 = (void *)*((_QWORD *)DeviceExtension + 116);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)DeviceExtension + 116) = 0LL;
  }
  v7 = WdLogNewEntry5_WdEvent(v6, v4);
  *(_QWORD *)(v7 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v7);
  DpiFdoReleaseChildDescriptor(*((PVOID *)DeviceExtension + 117));
  IoDeleteDevice(DeviceObject);
}
