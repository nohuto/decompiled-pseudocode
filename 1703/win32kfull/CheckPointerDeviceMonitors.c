/*
 * XREFs of CheckPointerDeviceMonitors @ 0x1C011BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckPointerDeviceMonitors(__int64 a1)
{
  int KernelHandleToRimObj; // eax
  PRKEVENT v3; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  EnterDeviceInfoListCrit_(a1);
  if ( (gdwMitConfig & 4) != 0 )
  {
    KernelHandleToRimObj = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  }
  else
  {
    v3 = aDeviceTemplate[153];
    if ( !v3 )
      return LeaveDeviceInfoListCrit_(v3);
    KernelHandleToRimObj = RawInputManagerObjectCreateKernelHandle(v3, 3LL, 0LL);
  }
  if ( KernelHandleToRimObj >= 0 )
  {
    RIMOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  return LeaveDeviceInfoListCrit_(v3);
}
