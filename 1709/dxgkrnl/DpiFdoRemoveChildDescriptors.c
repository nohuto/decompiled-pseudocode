/*
 * XREFs of DpiFdoRemoveChildDescriptors @ 0x1C01DED10
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoEnumChildDevices @ 0x1C011ED3C (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoRemoveChildDescriptor @ 0x1C01DECC8 (DpiFdoRemoveChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3168), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3272), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3328); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3272), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3168));
  KeLeaveCriticalRegion();
}
