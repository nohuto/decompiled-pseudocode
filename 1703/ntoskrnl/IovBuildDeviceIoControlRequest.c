/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140762CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfSetIoBuildRequest @ 0x14076ED3C (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = ((__int64 (__fastcall *)(_QWORD))pXdvIoBuildDeviceIoControlRequest)(a1);
  v2 = v1;
  if ( v1 )
    VfSetIoBuildRequest(v1);
  return v2;
}
