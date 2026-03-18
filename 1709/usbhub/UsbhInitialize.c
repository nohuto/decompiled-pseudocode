/*
 * XREFs of UsbhInitialize @ 0x1C0015CC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0005CE4 (UsbhWait.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017A10 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001E840 (UsbhGetExtendedHubInformation.c)
 *     UsbhRegisterPowerCallback @ 0x1C001F550 (UsbhRegisterPowerCallback.c)
 *     UsbhCheckHubErrata @ 0x1C002067C (UsbhCheckHubErrata.c)
 *     UsbhGetTopOfBusStack @ 0x1C0023664 (UsbhGetTopOfBusStack.c)
 *     UsbhGetHubCount @ 0x1C0023A34 (UsbhGetHubCount.c)
 *     UsbhConfigureUsbHub @ 0x1C0023AC0 (UsbhConfigureUsbHub.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 *     UsbhGetHubPowerStatus @ 0x1C0024248 (UsbhGetHubPowerStatus.c)
 *     UsbhInitializeTtHub @ 0x1C002604C (UsbhInitializeTtHub.c)
 *     UsbhQueryParentHubConfig @ 0x1C00263F8 (UsbhQueryParentHubConfig.c)
 *     UsbhGetHubClassDescriptor @ 0x1C0026554 (UsbhGetHubClassDescriptor.c)
 *     UsbhIsHighSpeedCapable @ 0x1C0027ABC (UsbhIsHighSpeedCapable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhLogStartFailure @ 0x1C003C60C (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitialize(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned int v4; // r14d
  _DWORD *v5; // rbx
  __int16 v6; // r9
  unsigned int TopOfBusStack; // edi
  unsigned int HubCount; // edi
  __int64 result; // rax
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned __int16 v12; // r10
  unsigned int v13; // edi
  unsigned int ExtendedHubInformation; // r14d
  _DWORD *v15; // rax
  void (__fastcall *v16)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *); // rbp
  _DWORD *v17; // rax
  char *Src; // rax
  int v19; // r9d
  unsigned int v20; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = FdoExt((__int64)a1);
  Log((__int64)a1, 8, 1749634633, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack(a1);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(
      (int)a1,
      TopOfBusStack,
      3,
      5505,
      (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "GetRootHubPdo");
    return TopOfBusStack;
  }
  HubCount = UsbhGetHubCount(a1, &v20);
  if ( (HubCount & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v19 = 5516;
LABEL_43:
    UsbhLogStartFailure((int)a1, HubCount, 3, v19, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return HubCount;
  }
  if ( v20 <= 6 )
  {
    HubCount = UsbhGetHubDeviceInformation((_DWORD)a1);
    if ( (HubCount & 0xC0000000) == 0xC0000000 )
    {
      Src = "GetHubDeviceInformation";
      v19 = 5533;
    }
    else
    {
      if ( v5[633] == 1 )
      {
        if ( v5[634] == 2 )
          v5[640] |= 0x40u;
        if ( (unsigned __int8)UsbhIsHighSpeedCapable(a1) )
          v5[640] |= 0x8000u;
      }
      UsbhCheckHubErrata(v5);
      HubCount = UsbhConfigureUsbHub((_DWORD)a1);
      if ( (HubCount & 0xC0000000) != 0xC0000000 )
      {
        do
        {
          result = UsbhGetHubClassDescriptor((_DWORD)a1, (int)v5 + 2936);
          v10 = result;
          if ( (_DWORD)result == -1073741810 || (_DWORD)result == -1073741667 )
            return result;
          v11 = (unsigned int)result >> 30;
          if ( (unsigned int)result >> 30 == 3 && v4 > 3 )
          {
            UsbhLogStartFailure(
              (int)a1,
              result,
              3,
              5585,
              (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "GetHubClassDescriptor");
            return v10;
          }
          if ( v4 )
            UsbhWait((int)a1, 10);
          ++v4;
        }
        while ( v11 == 3 );
        Log((__int64)a1, 8, 1749634633, *(unsigned __int16 *)((char *)v5 + 2939), *((unsigned __int16 *)v5 + 1276));
        if ( *((_WORD *)v5 + 1271) >= 0x200u )
        {
          if ( (v12 & 1) != 0 )
            *((_BYTE *)v5 + 3007) = 1;
          if ( (v12 & 8) != 0 )
            *((_BYTE *)v5 + 3009) = 1;
          if ( (v12 & 0x80u) != 0 )
            *((_BYTE *)v5 + 3008) = 1;
          if ( (v5[640] & 0x40) != 0 )
          {
            switch ( (v12 >> 5) & 3 )
            {
              case 0:
                goto LABEL_28;
              case 1:
                v5[753] = 16;
                break;
              case 2:
                v5[753] = 24;
                break;
              case 3:
                v5[753] = 32;
                break;
              default:
LABEL_28:
                v5[753] = 8;
                break;
            }
          }
        }
        UsbhGetHubPowerStatus(a1);
        if ( (v5[640] & 0x40) != 0 && (v13 = UsbhInitializeTtHub(a1, a2), (v13 & 0xC0000000) == 0xC0000000) )
        {
          UsbhLogStartFailure(
            (int)a1,
            v13,
            3,
            5653,
            (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
            "InitializeTtHub");
          return v13;
        }
        else
        {
          ExtendedHubInformation = UsbhGetExtendedHubInformation(a1);
          if ( (ExtendedHubInformation & 0xC0000000) == 0xC0000000 )
          {
            UsbhLogStartFailure(
              (int)a1,
              ExtendedHubInformation,
              3,
              5664,
              (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "Get Port attributes");
          }
          else
          {
            v15 = FdoExt((__int64)a1);
            if ( *((_WORD *)v15 + 2400) == 3 )
            {
              v16 = (void (__fastcall *)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *))*((_QWORD *)v15 + 580);
              if ( v16 )
                v16(
                  *((_QWORD *)v15 + 570),
                  v15 + 1306,
                  v15 + 1307,
                  (char *)v15 + 5230,
                  v15 + 1308,
                  (char *)v15 + 5233,
                  (char *)v15 + 5234,
                  (char *)v15 + 5235);
            }
            if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
              v5[640] &= ~0x100000u;
            else
              v5[640] |= 0x100000u;
            FdoExt((__int64)a1)[1053] = 1;
            FdoExt((__int64)a1)[1052] = 1;
            v5[1043] = 201;
            KeInitializeSpinLock((PKSPIN_LOCK)v5 + 522);
            *((_BYTE *)v5 + 4184) = 0;
            *((_QWORD *)v5 + 525) = v5 + 1048;
            *((_QWORD *)v5 + 524) = v5 + 1048;
            KeInitializeEvent((PRKEVENT)v5 + 204, NotificationEvent, 1u);
            KeInitializeEvent((PRKEVENT)v5 + 205, SynchronizationEvent, 1u);
            v5[1221] = 1;
            UsbhQueryParentHubConfig(a1);
            v17 = FdoExt((__int64)a1);
            UsbhSyncSendInternalIoctl(a1, 2229311LL, v17 + 1298, 0LL);
            v5[1314] = dword_1C006A690;
            UsbhRegisterPowerCallback(a1);
            v5[640] |= 0x40000000u;
          }
          return ExtendedHubInformation;
        }
      }
      Src = "ConfigureUsbHub";
      v19 = 5566;
    }
    goto LABEL_43;
  }
  UsbhLogStartFailure(
    (int)a1,
    -1073741823,
    7,
    5523,
    (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
    "hubCount > 6");
  return 3221225473LL;
}
