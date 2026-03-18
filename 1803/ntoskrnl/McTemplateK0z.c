/*
 * XREFs of McTemplateK0z @ 0x1401857E8
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14014624C (PnpLogActionQueueEvent.c)
 *     PnpInsertEventInQueue @ 0x14051E7CC (PnpInsertEventInQueue.c)
 *     PnpProcessTargetDeviceEvent @ 0x1405CB290 (PnpProcessTargetDeviceEvent.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140652800 (PiUEventSendDeviceInstallNotification.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 * Callees:
 *     McGenEventWriteKM @ 0x14014761C (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

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
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWriteKM(MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v7);
}
