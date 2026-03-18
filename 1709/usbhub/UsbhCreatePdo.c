/*
 * XREFs of UsbhCreatePdo @ 0x1C0016280
 * Callers:
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 * Callees:
 *     UsbhIncPdoIoCount @ 0x1C000A1B0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     UsbhConnectPdoToHub @ 0x1C00199C8 (UsbhConnectPdoToHub.c)
 *     UsbhSetPortData @ 0x1C0019AC8 (UsbhSetPortData.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhGetLocationIdString @ 0x1C00208B0 (UsbhGetLocationIdString.c)
 *     UsbhBuildHardwareID @ 0x1C0021690 (UsbhBuildHardwareID.c)
 *     UsbhBuildDeviceID @ 0x1C0021C10 (UsbhBuildDeviceID.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0045C7C (Usbh_ErrorDisconnect_PdoEvent.c)
 */

__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2)
{
  ULONG v3; // esi
  _DWORD *v5; // r13
  WCHAR *PoolWithTag; // rax
  WCHAR *v7; // rdi
  __int128 v8; // xmm1
  NTSTATUS appended; // ebx
  __int64 v10; // r9
  char *DeviceExtension; // rbx
  struct _UNICODE_STRING v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  POOL_TYPE v15; // ecx
  __int64 v16; // r9
  __int64 v17; // r10
  WCHAR *v18; // rsi
  ULONG v19; // ecx
  __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // r10
  int v30; // eax
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rdx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-89h] BYREF
  __int128 v37; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-61h] BYREF
  struct _UNICODE_STRING v40; // [rsp+78h] [rbp-51h] BYREF
  __int128 v41; // [rsp+88h] [rbp-41h]
  WCHAR SourceString[32]; // [rsp+A0h] [rbp-29h] BYREF

  DeviceObject = 0LL;
  v3 = 0;
  Log(a1, 256, 1666204751, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids);
  v5 = FdoExt(a1);
  while ( 1 )
  {
    v37 = *(_OWORD *)L"\\Device\\USBPDO-";
    v41 = *(_OWORD *)L"USBPDO-";
    memset(SourceString, 0, sizeof(SourceString));
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x60uLL, 0x42554855u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x60uLL);
    v8 = v41;
    *(_OWORD *)v7 = v37;
    *((_OWORD *)v7 + 1) = v8;
    RtlInitUnicodeString(&DestinationString, v7);
    DestinationString.MaximumLength = 96;
    RtlInitUnicodeString(&String, SourceString);
    String.MaximumLength = 64;
    appended = RtlIntegerToUnicodeString(v3, 0xAu, &String);
    if ( appended >= 0 )
      appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( (appended & 0xC0000000) == 0xC0000000 )
      ExFreePoolWithTag(v7, 0);
    if ( appended >= 0 )
    {
      appended = IoCreateDevice(
                   (PDRIVER_OBJECT)WPP_MAIN_CB.Queue.ListEntry.Blink,
                   0xBE8u,
                   &DestinationString,
                   0x22u,
                   0,
                   0,
                   &DeviceObject);
      if ( appended >= 0 )
        goto LABEL_13;
      RtlFreeUnicodeString(&DestinationString);
    }
    ++v3;
    if ( appended != -1073741771 )
      goto LABEL_13;
  }
  appended = -1073741670;
LABEL_13:
  Log(a1, 256, 1668310065, a2, appended);
  if ( !DeviceObject )
    return (unsigned int)-1073741670;
  if ( appended < 0 )
    return (unsigned int)appended;
  DeviceObject->StackSize = *(_BYTE *)(*((_QWORD *)v5 + 151) + 76LL) + 1;
  DeviceObject->Flags |= 0x2000u;
  Log(a1, 256, 1666204721, v10, (__int64)DeviceObject);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_DWORD *)DeviceExtension = 1329877064;
  v12 = DestinationString;
  *((_QWORD *)DeviceExtension + 144) = 0xFEFEFEFEFEFEFEFEuLL;
  *((_DWORD *)DeviceExtension + 286) = 0;
  *(struct _UNICODE_STRING *)(DeviceExtension + 2664) = v12;
  *((_DWORD *)DeviceExtension + 586) = -1;
  *((_DWORD *)DeviceExtension + 293) = *(_DWORD *)(*((_QWORD *)v5 + 377) + 4LL * *(unsigned __int16 *)(a2 + 4));
  *((_DWORD *)DeviceExtension + 196) = 1;
  *((_DWORD *)DeviceExtension + 594) = 1;
  *((_DWORD *)DeviceExtension + 738) = 1000;
  v13 = PdoExt(DeviceObject);
  v14 = ((unsigned __int8)*(_DWORD *)(v13 + 4) + 1) & 7;
  *(_DWORD *)(v13 + 4) = v14;
  v14 *= 32LL;
  *(_DWORD *)(v14 + v13 + 16) = 7;
  *(_DWORD *)(v14 + v13 + 20) = *(_DWORD *)(v13 + 1124);
  *(_DWORD *)(v14 + v13 + 24) = 1;
  *(_DWORD *)(v13 + 1124) = 1;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_DWORD *)DeviceExtension + 236) = 2017613128;
  *((_DWORD *)DeviceExtension + 237) = 1;
  *((_QWORD *)DeviceExtension + 119) = a1;
  *((_DWORD *)DeviceExtension + 264) = 1734964085;
  *((_DWORD *)DeviceExtension + 252) = 1734964085;
  *((_DWORD *)DeviceExtension + 248) = 1734964085;
  *((_DWORD *)DeviceExtension + 244) = 1734964085;
  *((_DWORD *)DeviceExtension + 255) = 1734964085;
  *((_DWORD *)DeviceExtension + 258) = 1734964085;
  *((_DWORD *)DeviceExtension + 261) = 1734964085;
  *((_DWORD *)DeviceExtension + 266) = 1734964085;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_QWORD *)DeviceExtension + 316) = MEMORY[0xFFFFF78000000014];
  KeInitializeEvent((PRKEVENT)DeviceExtension + 98, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 121, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1232), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1216;
  *((_QWORD *)DeviceExtension + 152) = DeviceExtension + 1216;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1288), NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1264;
  *((_QWORD *)DeviceExtension + 158) = DeviceExtension + 1264;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2048), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 122, SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 120, SynchronizationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 350);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2752), SynchronizationEvent, 0);
  Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1696), (__int64)UsbhDriverNotFoundTimer);
  v15 = ExDefaultNonPagedPoolType;
  *(_QWORD *)v16 = 1332899156LL;
  *(_QWORD *)(v16 + 48) = v17;
  *(_DWORD *)(v16 + 8) = 0;
  *(_DWORD *)(v16 + 72) = 1145980532;
  v18 = (WCHAR *)ExAllocatePoolWithTag(v15, 0x10uLL, 0x42554855u);
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    *((_QWORD *)v18 + 1) = 0LL;
    RtlInitUnicodeString(&v40, v18);
    v19 = *(unsigned __int16 *)(a2 + 4);
    v40.MaximumLength = 16;
    LODWORD(v20) = RtlIntegerToUnicodeString(v19, 0xAu, &v40);
    if ( (v20 & 0xC0000000) == 0xC0000000 )
    {
      ExFreePoolWithTag(v18, 0);
    }
    else
    {
      *((_QWORD *)DeviceExtension + 268) = v18;
      *((_DWORD *)DeviceExtension + 535) = v40.MaximumLength;
      Log(a1, 256, 1668310066, a2, (__int64)v18);
      v21 = UsbhBuildDeviceID(a1, 0LL, DeviceExtension + 2072);
      LODWORD(v20) = v21;
      if ( (v21 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 256, 1668302129, (__int64)DeviceObject, v21);
      }
      else
      {
        v22 = UsbhBuildHardwareID(a1, 0LL, DeviceExtension + 2088);
        LODWORD(v20) = v22;
        if ( (v22 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 256, 1668302130, (__int64)DeviceObject, v22);
        }
        else
        {
          Log(a1, 4096, 1667451204, 0LL, 0LL);
          v23 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1AuLL, 0x42554855u);
          if ( v23 )
          {
            LODWORD(v20) = 0;
            *v23 = 0LL;
            v23[1] = 0LL;
            v23[2] = 0LL;
            *((_WORD *)v23 + 12) = 0;
            *(_OWORD *)v23 = *(_OWORD *)L"USB\\UNKNOWN";
            *((_DWORD *)v23 + 4) = *(_DWORD *)L"OWN";
            *((_WORD *)v23 + 10) = aUsbUnknown[10];
            *((_QWORD *)DeviceExtension + 264) = v23;
            *((_DWORD *)DeviceExtension + 527) = 26;
          }
          else
          {
            LODWORD(v20) = -1073741670;
          }
          if ( (v20 & 0xC0000000) == 0xC0000000 )
          {
            Log(a1, 256, 1668302131, (__int64)DeviceObject, (int)v20);
          }
          else
          {
            v24 = UsbhConnectPdoToHub(DeviceObject, a1);
            LODWORD(v20) = v24;
            if ( (v24 & 0xC0000000) == 0xC0000000 )
            {
              Log(a1, 256, 1668302132, (__int64)DeviceObject, v24);
            }
            else
            {
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 151);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 292);
              *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2256;
              *((_QWORD *)DeviceExtension + 282) = DeviceExtension + 2256;
              IoCsqInitialize(
                (PIO_CSQ)(DeviceExtension + 2272),
                UsbhInsertPdoWakeIrp,
                (PIO_CSQ_REMOVE_IRP)UsbhRemovePdoWakeIrp,
                (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoWakeIrp,
                UsbhAcquirePdoWakeIrpLock,
                UsbhReleasePdoWakeIrpLock,
                UsbhCompleteCanceledPdoWakeIrp);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 190);
              KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 255);
              *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1440;
              *((_QWORD *)DeviceExtension + 180) = DeviceExtension + 1440;
              IoCsqInitialize(
                (PIO_CSQ)(DeviceExtension + 1456),
                UsbhInsertPdoIdleIrp,
                UsbhRemovePdoIdleIrp,
                (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoIdleIrp,
                (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoIdleIrpLock,
                (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoIdleIrpLock,
                UsbhCompleteCanceledPdoIdleIrp);
              Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1536), (__int64)UsbhIdleIrpRetryTimer);
              *(_QWORD *)(v25 + 48) = v26;
              *(_QWORD *)v25 = 1332899156LL;
              *(_DWORD *)(v25 + 8) = 0;
              *(_DWORD *)(v25 + 72) = 1231318117;
              Log(a1, 0x2000, v27, (__int64)(DeviceExtension + 1616), (__int64)UsbhSS_WakeIrpRetryTimer);
              *(_QWORD *)v28 = 1332899156LL;
              *(_QWORD *)(v28 + 48) = v29;
              *(_DWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 72) = 1144018785;
              KeInitializeSemaphore((PRKSEMAPHORE)DeviceExtension + 80, 1, 1);
              *((_QWORD *)DeviceExtension + 114) = -1LL;
              *((_QWORD *)DeviceExtension + 115) = -1LL;
              *(_QWORD *)(DeviceExtension + 892) = -1LL;
              *(_QWORD *)(DeviceExtension + 900) = -1LL;
              v30 = UsbhIncPdoIoCount((__int64)DeviceObject, (__int64)DeviceObject, 1162637161, 0);
              v20 = v30;
              if ( (v30 & 0xC0000000) != 0xC0000000 )
              {
                *((_DWORD *)DeviceExtension + 354) |= 1u;
                *((_QWORD *)DeviceExtension + 105) = DeviceObject;
                *((_WORD *)DeviceExtension + 710) = *(_WORD *)(a2 + 4);
                *((_QWORD *)DeviceExtension + 380) = *(_QWORD *)(a2 + 2920);
                *((_DWORD *)DeviceExtension + 296) = v5[1259];
                *((_DWORD *)DeviceExtension + 282) = 1;
                *((_DWORD *)DeviceExtension + 197) = 1;
                *((_DWORD *)DeviceExtension + 198) = 1;
                *((_DWORD *)DeviceExtension + 682) = 0;
                DeviceExtension[2732] = 0;
                DWORD1(v37) = 0;
                LOBYTE(v37) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                DWORD1(v37) = 1;
                WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                UsbhSetPortData(a1, DeviceObject, &v37);
                UsbhGetLocationIdString(a1, DeviceObject, v31, DeviceExtension + 2216);
                DWORD1(v37) = 0;
                WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v37);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_q(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v32,
                    1,
                    27,
                    (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
                    (char)DeviceObject);
                Log(a1, 256, 1346654051, (__int64)DeviceObject, v20);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    LODWORD(v20) = -1073741670;
  }
  if ( (v20 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 256, 1346653985, (__int64)DeviceObject, (int)v20);
    Usbh_ErrorDisconnect_PdoEvent(a1, DeviceObject, a2 + 24);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
    UsbhSshSetPortsBusyState(a1, *(unsigned __int16 *)(a2 + 4), 2LL);
    v33 = PdoExt(DeviceObject);
    v34 = ((unsigned __int8)*(_DWORD *)(v33 + 12) + 1) & 7;
    *(_DWORD *)(v33 + 12) = v34;
    v34 *= 32LL;
    *(_DWORD *)(v34 + v33 + 528) = 6;
    *(_DWORD *)(v34 + v33 + 532) = *(_DWORD *)(v33 + 1120);
    *(_DWORD *)(v34 + v33 + 536) = 100;
    *(_DWORD *)(v33 + 1120) = 100;
  }
  return (unsigned int)v20;
}
