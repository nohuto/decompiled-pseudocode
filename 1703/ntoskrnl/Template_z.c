/*
 * XREFs of Template_z @ 0x1401F8D2C
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14003D290 (PnpLogActionQueueEvent.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404DA3D8 (PnpProcessTargetDeviceEvent.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140696600 (PiUEventSendDeviceInstallNotification.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  ULONG v5; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  UserData.Size = v5;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (ULONGLONG)a4;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 1u, &UserData);
}
