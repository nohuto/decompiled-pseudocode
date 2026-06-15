/*
 * XREFs of ?OnAudioDeviceArrival@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800ACC48
 * Callers:
 *     ServiceDeviceEvent @ 0x1800AD01C (ServiceDeviceEvent.c)
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800ACD1C (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceArrival(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v1; // ebx

  v1 = PostDeviceEvent(0LL, a1);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v1);
  }
  return (unsigned int)v1;
}
