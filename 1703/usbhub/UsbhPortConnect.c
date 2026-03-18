/*
 * XREFs of UsbhPortConnect @ 0x1C0021330
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAcquireEnumBusLock @ 0x1C0009EC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhRawWait @ 0x1C0021530 (UsbhRawWait.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0021CC4 (UsbhAllocateTimeoutObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C0042D8C (UsbhDisablePort.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0044E44 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPortConnect(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int Pdo; // esi
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rax
  int v14; // esi
  int v16; // [rsp+48h] [rbp-30h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v3 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1883459406, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_START, *(unsigned __int16 *)(a2 + 4), 0);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2 + 24, a1, 1129345907, 1);
  Pdo = UsbhCreatePdo(a1, a2);
  if ( v5 )
    UsbhDecHubBusy(a1, v6, v5);
  if ( Pdo < 0 )
  {
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE,
      *(unsigned __int16 *)(a2 + 4),
      Pdo);
    LOBYTE(v16) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, Pdo, -1, usbfile_busfunc_c, 551, v16);
  }
  else
  {
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    v8 = 0LL;
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v9 = MEMORY[0xFFFFF78000000008];
    v10 = MEMORY[0xFFFFF78000000008];
    v11 = MEMORY[0xFFFFF78000000008];
    do
    {
      if ( (unsigned __int64)(v11 - v9) > 0x1E8480 && v3 > 1 )
      {
        UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
        UsbhEtwLogHubIrpEvent(
          a1,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE,
          *(unsigned __int16 *)(a2 + 4),
          -1073741823);
        Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
        Log(a1, 1024, 1145205871, a2, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            15,
            (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
            *(_WORD *)(a2 + 4));
        return 0LL;
      }
      Log(a1, 8, 2002872692, 20LL, 0LL);
      UsbhRawWait(v12);
      v11 = MEMORY[0xFFFFF78000000008];
      v13 = MEMORY[0xFFFFF78000000008] - v10;
      v10 = MEMORY[0xFFFFF78000000008];
      v8 += v13;
      if ( _InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
      {
        ++v3;
        v8 = 0LL;
      }
    }
    while ( v8 < 0xF4240 );
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
    v14 = UsbhAllocateTimeoutObject(a1, a2, &P);
    if ( v14 >= 0 )
    {
      UsbhResetPort(a1, a2, (__int64)P);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    UsbhDisablePort(a1);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE,
      *(unsigned __int16 *)(a2 + 4),
      v14);
    LOBYTE(v16) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, v14, -1, usbfile_busfunc_c, 650, v16);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
  return 0LL;
}
