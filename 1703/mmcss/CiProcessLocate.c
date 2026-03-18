/*
 * XREFs of CiProcessLocate @ 0x1C000ABB0
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000A060 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000A7C0 (CiThreadCreate.c)
 * Callees:
 *     CiProcessComparer @ 0x1C000AC90 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessLocate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v4; // rbx
  int v5; // ebp
  int v6; // eax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v8; // rax

  v2 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  v4 = WPP_MAIN_CB.DeviceQueue.1;
  v5 = WPP_MAIN_CB.Dpc.Type & 1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CiProcessComparer)(a1, v4, v3);
    if ( v6 >= 0 )
      break;
    v8 = **(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)&v4;
    if ( v5 && *(_QWORD *)&v8 )
    {
LABEL_16:
      v4 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)(*(_QWORD *)&v8 ^ *(_QWORD *)&v4);
      goto LABEL_9;
    }
LABEL_8:
    v4 = v8;
LABEL_9:
    if ( !*(_QWORD *)&v4 )
      goto LABEL_6;
  }
  if ( v6 > 0 )
  {
    v8 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v4 + 8LL);
    if ( v5 && *(_QWORD *)&v8 )
      goto LABEL_16;
    goto LABEL_8;
  }
  if ( v4 )
  {
    v2 = *(_QWORD *)&v4 - 40LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)&v4 - 40LL + 32)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_6:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
