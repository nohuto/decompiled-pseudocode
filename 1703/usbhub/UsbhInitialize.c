/*
 * XREFs of UsbhInitialize @ 0x1C0017340
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017FD8 (UsbhGetHubDeviceInformation.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001A710 (UsbhSyncSendInternalIoctl.c)
 *     UsbhRegisterPowerCallback @ 0x1C001A800 (UsbhRegisterPowerCallback.c)
 *     UsbhQueryParentHubConfig @ 0x1C001A87C (UsbhQueryParentHubConfig.c)
 *     Usbh_UsbdQueryContollerType @ 0x1C001A994 (Usbh_UsbdQueryContollerType.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001AA20 (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubPowerStatus @ 0x1C001AC50 (UsbhGetHubPowerStatus.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001AD08 (UsbhGetHubClassDescriptor.c)
 *     UsbhConfigureUsbHub @ 0x1C001AE40 (UsbhConfigureUsbHub.c)
 *     UsbhGetTopOfBusStack @ 0x1C001DF18 (UsbhGetTopOfBusStack.c)
 *     UsbhCheckHubErrata @ 0x1C001E938 (UsbhCheckHubErrata.c)
 *     UsbhInitializeTtHub @ 0x1C0025BA4 (UsbhInitializeTtHub.c)
 *     UsbhGetHubCount @ 0x1C00277A0 (UsbhGetHubCount.c)
 *     UsbhIsHighSpeedCapable @ 0x1C0027F20 (UsbhIsHighSpeedCapable.c)
 *     UsbhLogStartFailure @ 0x1C003B280 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitialize(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned int v4; // r14d
  _DWORD *v5; // rbx
  __int16 v6; // r9
  unsigned int TopOfBusStack; // esi
  unsigned int HubCount; // esi
  __int64 result; // rax
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned __int16 v12; // r10
  unsigned int ExtendedHubInformation; // esi
  _DWORD *v14; // rax
  char *Src; // rax
  int v16; // r9d
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = FdoExt((__int64)a1);
  Log((__int64)a1, 8, 1749634633, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack(a1);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(
      (int)a1,
      TopOfBusStack,
      3,
      5480,
      (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "GetRootHubPdo");
    return TopOfBusStack;
  }
  HubCount = UsbhGetHubCount(a1, &v17);
  if ( (HubCount & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v16 = 5491;
LABEL_40:
    UsbhLogStartFailure((int)a1, HubCount, 3, v16, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", Src);
    return HubCount;
  }
  if ( v17 <= 6 )
  {
    HubCount = UsbhGetHubDeviceInformation((_DWORD)a1);
    if ( (HubCount & 0xC0000000) == 0xC0000000 )
    {
      Src = "GetHubDeviceInformation";
      v16 = 5508;
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
              5560,
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
LABEL_28:
                v5[753] = 8;
                break;
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
                goto LABEL_28;
            }
          }
        }
        UsbhGetHubPowerStatus(a1);
        if ( (v5[640] & 0x40) != 0
          && (ExtendedHubInformation = UsbhInitializeTtHub(a1, a2), (ExtendedHubInformation & 0xC0000000) == 0xC0000000) )
        {
          UsbhLogStartFailure(
            (int)a1,
            ExtendedHubInformation,
            3,
            5628,
            (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
            "InitializeTtHub");
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
              5639,
              (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
              "Get Port attributes");
          }
          else
          {
            Usbh_UsbdQueryContollerType(a1);
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
            v14 = FdoExt((__int64)a1);
            UsbhSyncSendInternalIoctl(a1, 2229311LL, v14 + 1298, 0LL);
            v5[1314] = dword_1C0069690;
            UsbhRegisterPowerCallback(a1);
            v5[640] |= 0x40000000u;
          }
        }
        return ExtendedHubInformation;
      }
      Src = "ConfigureUsbHub";
      v16 = 5541;
    }
    goto LABEL_40;
  }
  UsbhLogStartFailure(
    (int)a1,
    -1073741823,
    7,
    5498,
    (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
    "hubCount > 6");
  return 3221225473LL;
}
