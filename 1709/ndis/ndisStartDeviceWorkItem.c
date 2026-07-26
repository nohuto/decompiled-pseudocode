/*
 * XREFs of ndisStartDeviceWorkItem @ 0x1C00C1230
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C0AB8 (ndisStartDeviceSynchronous.c)
 */

void __fastcall ndisStartDeviceWorkItem(_QWORD *P)
{
  int *v1; // rbx
  _IRP *v3; // rdi
  __int64 v4; // r8

  v1 = (int *)P[4];
  v3 = (_IRP *)P[5];
  ndisReferencePackage((__int64)&ndisPkgs);
  v3->IoStatus.Status = ndisStartDeviceSynchronous(v1, (__int64)v3, v4);
  IofCompleteRequest(v3, 0);
  ExFreePoolWithTag(P, 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
}
