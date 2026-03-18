/*
 * XREFs of FsRtlVolumeDeviceToCorrelationId @ 0x1405E1A30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     IoVolumeDeviceToGuid @ 0x140495D70 (IoVolumeDeviceToGuid.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405E1EB0 (FsRtlIssueDeviceIoControl.c)
 */

__int64 __fastcall FsRtlVolumeDeviceToCorrelationId(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  GUID v5; // [rsp+40h] [rbp-28h] BYREF

  result = FsRtlIssueDeviceIoControl(a1, 0x4D0018u, 0, &v5, 0x10u, 0LL);
  if ( (int)result < 0 )
    return IoVolumeDeviceToGuid(a1, a2);
  *a2 = v5;
  return result;
}
