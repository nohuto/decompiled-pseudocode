/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0122CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C000F05C (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00E1420 (RIMDirectStopDeviceClassNotifications.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00F21B0 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  HANDLE v3; // rcx
  _DWORD *v4; // rcx
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
    v4 = (_DWORD *)*((_QWORD *)this + 2);
    if ( v4 )
      RawInputManagerObjectCreateKernelHandle(v4, 3u, 0, 0, &Handle);
    v3 = Handle;
  }
  if ( v3 )
  {
    v2 = RIMDirectStopDeviceClassNotifications((char *)v3);
    if ( Handle != *((HANDLE *)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
