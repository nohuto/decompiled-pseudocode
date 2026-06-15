/*
 * XREFs of ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800B912C
 * Callers:
 *     ServiceDeviceEvent @ 0x1800B92C0 (ServiceDeviceEvent.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800B91A8 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceRemoval(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v2; // edi

  v2 = PostDeviceEvent(1LL, a1);
  (*(void (__fastcall **)(CAudioSrv *, struct _DEV_BROADCAST_DEVICEINTERFACE_W *))(*(_QWORD *)g_AudioService + 72LL))(
    g_AudioService,
    a1);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v2);
  }
  return (unsigned int)v2;
}
