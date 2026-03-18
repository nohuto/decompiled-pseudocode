/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C009D01C
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C00649B0 (QueuePowerRequest.c)
 */

void __fastcall PowerDisplayBurst(enum POWER_MONITOR_REQUEST_REASON a1)
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  switch ( a1 )
  {
    case MonitorRequestReasonUserDisplayBurst:
      qword_1C018C220 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case MonitorRequestReasonAcDcDisplayBurst:
    case MonitorRequestReasonBatteryCountChange:
      qword_1C018C228 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case MonitorRequestReasonResumeS4:
      qword_1C018C230 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
  }
  if ( !dword_1C018C28C )
  {
    LODWORD(v1) = 4;
    *((_QWORD *)&v1 + 1) = a1;
    QueuePowerRequest(&v1, 0);
  }
}
