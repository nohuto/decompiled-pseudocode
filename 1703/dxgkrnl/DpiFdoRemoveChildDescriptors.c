/*
 * XREFs of DpiFdoRemoveChildDescriptors @ 0x1C01C5208
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoEnumChildDevices @ 0x1C011F74C (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01C41B0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoRemoveChildDescriptor @ 0x1C01C51C8 (DpiFdoRemoveChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3144), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3248), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3304); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3248), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3144));
  KeLeaveCriticalRegion();
}
