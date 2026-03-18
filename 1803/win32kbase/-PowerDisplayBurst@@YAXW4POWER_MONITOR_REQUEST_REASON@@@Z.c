/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A2820
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C006DA70 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerDisplayBurst(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 6:
      qword_1C01A0330 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 5:
    case 0x10:
      qword_1C01A0338 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 0x19:
      qword_1C01A0340 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      break;
  }
  if ( !dword_1C01A307C )
  {
    LODWORD(v3) = 4;
    *((_QWORD *)&v3 + 1) = v2;
    QueuePowerRequest(&v3, 0);
  }
}
