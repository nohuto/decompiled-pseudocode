/*
 * XREFs of UsbhHubProcessIsr @ 0x1C0013F10
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C0016A20 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     UsbhPostInterrupt @ 0x1C000AE90 (UsbhPostInterrupt.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhQueryChange @ 0x1C001A4D4 (UsbhQueryChange.c)
 *     UsbhQueryHubState @ 0x1C001E6AC (UsbhQueryHubState.c)
 *     UsbhHubAckPortChange @ 0x1C00268C4 (UsbhHubAckPortChange.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040828 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C0040FE8 (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0043610 (UsbhHubAckHubChange.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

void __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  struct _KEVENT *DeviceExtension; // r14
  struct _KEVENT *v8; // rbx
  int v9; // r9d
  PVOID PoolWithTag; // rax
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *Blink; // rdx
  int v13; // ebx
  __int64 v14; // rdx
  char v15; // bl
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r9
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int16 v23; // r9
  int v24; // r9d
  int v25; // r9d
  int HubState; // ebx
  __int64 v27; // rsi
  char v28; // r9
  __int64 v29; // rdx
  __int16 v30; // r9
  int v31; // r9d
  __int64 v32; // r9
  __int64 v33; // rdx
  __int16 v34; // r9
  int v35; // [rsp+48h] [rbp-71h]
  unsigned __int16 v36; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int16 v37; // [rsp+62h] [rbp-57h]
  _WORD v38[2]; // [rsp+64h] [rbp-55h] BYREF
  int v39; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-4Dh]
  unsigned int v41; // [rsp+70h] [rbp-49h] BYREF
  __int64 v42; // [rsp+78h] [rbp-41h] BYREF
  __int64 PortData; // [rsp+80h] [rbp-39h]
  __int64 v44; // [rsp+88h] [rbp-31h]
  int v45; // [rsp+90h] [rbp-29h]
  int v46; // [rsp+98h] [rbp-21h] BYREF
  __int16 v47; // [rsp+9Ch] [rbp-1Dh]
  __int16 v48; // [rsp+9Eh] [rbp-1Bh]
  __int16 v49; // [rsp+A0h] [rbp-19h]
  __int16 v50; // [rsp+A2h] [rbp-17h]
  _BYTE v51[40]; // [rsp+A8h] [rbp-11h] BYREF

  v3 = a2;
  v4 = 0LL;
  v40 = a2;
  v39 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      a2);
  Log((__int64)DeviceObject, 4, 1769107799, a3, v3);
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( DeviceExtension->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v8 = (struct _KEVENT *)FdoExt(DeviceObject);
  v8[142].Header.Type = 1;
  KeWaitForSingleObject(&v8[139], Executive, 0, 0, 0LL);
  Log((__int64)DeviceObject, 0x10000, 1212771939, 0LL, v8[142].Header.Signalling);
  if ( v8[142].Header.Signalling != (_BYTE)v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v9 + 40), 0x42554855u);
    v4 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *(_DWORD *)v4 = 1215918946;
      *(_QWORD *)(v4 + 24) = DeviceObject;
      v11 = (_LIST_ENTRY *)(v4 + 8);
      *(_DWORD *)(v4 + 32) = 826438515;
      Blink = v8[129].Header.WaitListHead.Blink;
      if ( Blink->Flink != &v8[129].Header.WaitListHead )
        __fastfail(3u);
      v11->Flink = &v8[129].Header.WaitListHead;
      *(_QWORD *)(v4 + 16) = Blink;
      Blink->Flink = v11;
      v8[129].Header.WaitListHead.Blink = v11;
    }
    else
    {
      ++v8[130].Header.LockNV;
      v4 = 1936941672LL;
    }
  }
  KeSetEvent(v8 + 139, 0, 0);
  _InterlockedIncrement(&DeviceExtension[114].Header.Lock);
  Log((__int64)DeviceObject, 4, 1769107831, (unsigned __int8)v3, 0LL);
  if ( (_BYTE)v3 )
  {
    PortData = UsbhGetPortData(DeviceObject, (unsigned __int8)v3);
    if ( PortData )
    {
      v13 = UsbhQueryChange((_DWORD)DeviceObject);
      v44 = v13;
      Log((__int64)DeviceObject, 4, 1364550504, (unsigned __int8)v3, v13);
      if ( (v13 & 0xC0000000) != 0xC0000000 )
      {
        v15 = v40;
        v41 = v40;
        if ( dword_1C0069650 )
        {
          v16 = FdoExt(DeviceObject);
          v46 = *(_DWORD *)(v16 + 5192);
          v47 = *(_WORD *)(v16 + 5196);
          v17 = *(_DWORD *)(v16 + 5200);
          v48 = v17;
          v45 = v17;
          v49 = *(_WORD *)(v16 + 5228);
          v50 = *(_WORD *)(v16 + 5230);
          UsbhEtwGetHubInfo(v16, (__int64)v51);
          UsbhEtwWrite(
            &USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE,
            0LL,
            (unsigned __int64)&v46,
            12LL,
            v51,
            36LL,
            &v41,
            4LL,
            v38,
            2,
            0LL);
        }
        if ( !v38[0] )
          goto LABEL_30;
        v13 = UsbhHubAckPortChange(DeviceObject, (unsigned __int8)v3, v38, &v39);
        v44 = v13;
        Log((__int64)DeviceObject, 4, 1097033831, (unsigned __int8)v3, v13);
        if ( (v13 & 0xC0000000) != 0xC0000000 )
        {
          v19 = v38[0];
          if ( (v38[0] & 1) != 0 )
          {
            Log((__int64)DeviceObject, 4, 1112425259, v18, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(PortData + 404));
            v19 = v38[0];
          }
          LODWORD(v42) = v19;
          FdoExt(DeviceObject);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              62,
              (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
              v3);
          Log((__int64)DeviceObject, 512, 1346711858, 0LL, (unsigned __int8)v3);
          v20 = UsbhGetPortData(DeviceObject, (unsigned __int8)v3);
          if ( v20 )
          {
            LODWORD(PortData) = 0;
            UsbhDispatch_PortChangeQueueEventEx((__int64)DeviceObject, v20, 12, a3, PortData, 0, 0LL, 0LL);
          }
          v21 = v42;
          FdoExt(DeviceObject);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              75,
              (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
              v3);
          v22 = UsbhGetPortData(DeviceObject, (unsigned __int8)v3);
          if ( v22 )
            UsbhDispatch_PortChangeQueueEventEx((__int64)DeviceObject, v22, 4, a3, v21, 0, 0LL, 0LL);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              76,
              (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
              v3);
          Log((__int64)DeviceObject, 4, 1365469287, (unsigned __int8)v3, (__int64)&v42);
          v15 = v40;
LABEL_30:
          UsbhDecHubBusy((__int64)DeviceObject, v14, (_QWORD *)v4);
          _InterlockedDecrement(&DeviceExtension[114].Header.Lock);
          UsbhPostInterrupt(DeviceObject);
          Log((__int64)DeviceObject, 4, 1769422385, 0LL, DeviceExtension[114].Header.LockNV);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v23 )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              37,
              (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
              v15);
          return;
        }
      }
      KeSetEvent(DeviceExtension + 112, 0, 0);
      if ( Usb_Disconnected(v13) )
      {
        Log((__int64)DeviceObject, 4, 1769436977, 0LL, v44);
        UsbhQueuePauseChange(DeviceObject, (unsigned __int8)v3, a3);
        UsbhPCE_HW_Stop(DeviceObject, (unsigned __int8)v3, a3);
      }
      else
      {
        Log((__int64)DeviceObject, 4, 1769436978, 0LL, v13);
        LOBYTE(v35) = 1;
        UsbhException((int)DeviceObject, (unsigned __int8)v3, 1, v25, v25, v13, v39, usbfile_bus_c, 3213, v35);
      }
    }
    else
    {
      Log((__int64)DeviceObject, 4, 1769437016, 0LL, -1073741811LL);
      LOBYTE(v35) = 0;
      UsbhException((int)DeviceObject, (unsigned __int8)v3, v24 + 1, v24, 0, -1073741811, 0, usbfile_bus_c, 3118, v35);
      KeSetEvent(DeviceExtension + 112, 0, 0);
    }
    goto LABEL_67;
  }
  HubState = UsbhQueryHubState((_DWORD)DeviceObject);
  v27 = HubState;
  Log((__int64)DeviceObject, 4, 1364551795, 0LL, HubState);
  Log((__int64)DeviceObject, 4, 1364551779, v37, v36);
  if ( HubState < 0 )
    goto LABEL_59;
  if ( (v36 & 1) != 0 )
    DeviceExtension[127].Header.LockNV = 100;
  else
    DeviceExtension[127].Header.LockNV = 500;
  if ( (v37 & 1) != 0 )
    LODWORD(DeviceExtension[126].Header.WaitListHead.Flink) = DeviceExtension[127].Header.Lock;
  HubState = UsbhHubAckHubChange(DeviceObject, &v36, &v39);
  v27 = HubState;
  Log((__int64)DeviceObject, 4, 1095263080, 0LL, HubState);
  if ( HubState < 0 || (v36 & 2) != 0 || BYTE1(DeviceExtension[125].Header.WaitListHead.Flink) == v28 && (v37 & 2) != 0 )
  {
LABEL_59:
    KeSetEvent(DeviceExtension + 112, 0, 0);
    if ( (v36 & 2) != 0 || !BYTE1(DeviceExtension[125].Header.WaitListHead.Flink) && (v37 & 2) != 0 )
    {
      Log((__int64)DeviceObject, 4, 1749512054, 0LL, v27);
      if ( BYTE2(DeviceExtension[125].Header.WaitListHead.Flink) == (_BYTE)v32 )
      {
        BYTE2(DeviceExtension[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((__int64)DeviceObject, 1u, (int)UsbhSetHubOvercurrentDetectedKey, v32, 0, 1666340431, 0LL);
      }
      LOBYTE(v35) = 0;
      UsbhException((int)DeviceObject, 0, 75, (int)&v36, 4, HubState, v39, usbfile_bus_c, 3318, v35);
    }
    else if ( !Usb_Disconnected(HubState) )
    {
      Log((__int64)DeviceObject, 4, 1769433138, 0LL, v27);
      LOBYTE(v35) = 0;
      UsbhException((int)DeviceObject, 0, v31 + 1, v31, 0, HubState, v39, usbfile_bus_c, 3331, v35);
    }
LABEL_67:
    Log((__int64)DeviceObject, 4, 1769422386, 0LL, DeviceExtension[114].Header.LockNV);
    _InterlockedDecrement(&DeviceExtension[114].Header.Lock);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v34 )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        39,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        v40);
    UsbhDecHubBusy((__int64)DeviceObject, v33, (_QWORD *)v4);
    return;
  }
  LOBYTE(v35) = 0;
  if ( (v37 & 2) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 72, (int)&v36, 4, HubState, v39, usbfile_bus_c, 3270, v35);
  }
  else if ( (v37 & 1) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 73, (int)&v36, 4, HubState, v39, usbfile_bus_c, 3273, v35);
  }
  else
  {
    UsbhException((int)DeviceObject, 0, 74, (int)&v36, 4, HubState, v39, usbfile_bus_c, 3277, v35);
  }
  _InterlockedDecrement(&DeviceExtension[114].Header.Lock);
  UsbhDecHubBusy((__int64)DeviceObject, v29, (_QWORD *)v4);
  UsbhPostInterrupt(DeviceObject);
  Log((__int64)DeviceObject, 4, 1769422387, 0LL, DeviceExtension[114].Header.LockNV);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v30 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      38,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
}
