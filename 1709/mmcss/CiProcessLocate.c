/*
 * XREFs of CiProcessLocate @ 0x1C0009260
 * Callers:
 *     CiProcessNotification @ 0x1C00010F0 (CiProcessNotification.c)
 *     CiDispatchCreateNotificationClient @ 0x1C0009930 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 * Callees:
 *     CiProcessComparer @ 0x1C0009320 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessLocate(__int64 a1)
{
  __int64 v2; // rsi
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v3; // rbx
  int v4; // edi
  int v5; // eax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rax

  v2 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  v3 = WPP_MAIN_CB.DeviceQueue.1;
  v4 = WPP_MAIN_CB.Dpc.Type & 1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
    goto LABEL_7;
  while ( 1 )
  {
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD))CiProcessComparer)(a1, v3);
    if ( v5 >= 0 )
      break;
    v6 = **(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)&v3;
    if ( v4 && *(_QWORD *)&v6 )
    {
LABEL_12:
      v3 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(*(_QWORD *)&v6 ^ *(_QWORD *)&v3);
      goto LABEL_6;
    }
LABEL_5:
    v3 = v6;
LABEL_6:
    if ( !*(_QWORD *)&v3 )
      goto LABEL_7;
  }
  if ( v5 > 0 )
  {
    v6 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v3 + 8LL);
    if ( v4 && *(_QWORD *)&v6 )
      goto LABEL_12;
    goto LABEL_5;
  }
  if ( v3 )
  {
    v2 = *(_QWORD *)&v3 - 40LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)&v3 - 40LL + 32)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_7:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
