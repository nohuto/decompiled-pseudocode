/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C004FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C004F170 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0091820 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0096010 (RIMDirectStopDeviceClassNotifications.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  HANDLE v3; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = -1073741823;
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v3 = (HANDLE)*((_QWORD *)this + 1);
    Handle = v3;
  }
  else
  {
    RawInputManagerObjectCreateKernelHandle(*((PVOID *)this + 2), 3u, &Handle);
    v3 = Handle;
  }
  if ( v3 )
  {
    v2 = RIMDirectStopDeviceClassNotifications();
    if ( Handle != *((HANDLE *)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
