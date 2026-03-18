/*
 * XREFs of UsbhHubProcessIsr @ 0x1C0014D30
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C0015960 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002284 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhPostInterrupt @ 0x1C000B700 (UsbhPostInterrupt.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001E6C0 (UsbhEtwGetHubInfo.c)
 *     UsbhQueryHubState @ 0x1C0024330 (UsbhQueryHubState.c)
 *     UsbhHubAckPortChange @ 0x1C002668C (UsbhHubAckPortChange.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C0041618 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C0041DD8 (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0044450 (UsbhHubAckHubChange.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

LONG __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  void *DeviceExtension; // rcx
  __int64 v7; // rdx
  struct _KEVENT *v8; // r13
  __int64 v9; // rbx
  struct _KEVENT *v10; // rsi
  int v11; // r9d
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned __int16 v15; // si
  void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r12
  __int16 v25; // bx
  void *v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // rcx
  char v30; // r12
  __int64 v31; // rax
  int v32; // ecx
  void *v33; // rdx
  __int64 v34; // rcx
  unsigned __int16 v35; // ax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r10
  __int64 v43; // rcx
  LONG result; // eax
  __int64 LockNV; // r9
  void *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r9d
  int v50; // r9d
  int HubState; // ebx
  __int64 v52; // rsi
  char v53; // r9
  __int64 v54; // rdx
  __int16 v55; // r9
  int v56; // r9d
  __int64 v57; // r9
  __int64 v58; // rdx
  __int16 v59; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  int *v62; // [rsp+30h] [rbp-D0h]
  __int64 v63; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v64; // [rsp+40h] [rbp-C0h]
  int v65; // [rsp+48h] [rbp-B8h]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v67; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h]
  unsigned __int16 v69; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v70; // [rsp+72h] [rbp-8Eh]
  int v71; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v74; // [rsp+80h] [rbp-80h]
  int v75; // [rsp+88h] [rbp-78h] BYREF
  __int64 v76; // [rsp+90h] [rbp-70h]
  unsigned int v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  int v81; // [rsp+B8h] [rbp-48h]
  int v82; // [rsp+C0h] [rbp-40h]
  __int16 v83; // [rsp+C4h] [rbp-3Ch]
  __int16 v84; // [rsp+C6h] [rbp-3Ah]
  __int16 v85; // [rsp+C8h] [rbp-38h]
  __int16 v86; // [rsp+CAh] [rbp-36h]
  _BYTE v87[40]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = a2;
  v4 = 0LL;
  v72 = a2;
  v71 = 0;
  v76 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
      a2);
    a3 = v76;
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( !DeviceObject )
      goto LABEL_72;
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      LODWORD(v68) = 1467052649;
      v7 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v7 = 1467052649;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = a3;
      *(_QWORD *)(v7 + 24) = v3;
    }
  }
  if ( !DeviceObject )
LABEL_72:
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  v8 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v8 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( v8->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v9 = FdoExt(DeviceObject);
  v10 = (struct _KEVENT *)(v9 + 3336);
  *(_BYTE *)(v9 + 3408) = 1;
  KeWaitForSingleObject((PVOID)(v9 + 3336), Executive, 0, 0, 0LL);
  Log((_DWORD)DeviceObject, 0x10000, 1212771939, 0, *(unsigned __int8 *)(v9 + 3409));
  if ( *(_BYTE *)(v9 + 3409) == (_BYTE)v11 )
  {
    KeSetEvent(v10, 0, 0);
    v74 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v11 + 40), 0x42554855u);
    v74 = (__int64)PoolWithTag;
    v4 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *(_DWORD *)v4 = 1215918946;
      *(_QWORD *)(v4 + 24) = DeviceObject;
      v13 = (_QWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 32) = 826438515;
      v14 = *(_QWORD **)(v9 + 3112);
      if ( *v14 != v9 + 3104 )
        __fastfail(3u);
      *v13 = v9 + 3104;
      *(_QWORD *)(v4 + 16) = v14;
      *v14 = v13;
      *(_QWORD *)(v9 + 3112) = v13;
    }
    else
    {
      ++*(_DWORD *)(v9 + 3120);
      v4 = 1936941672LL;
      v74 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
  }
  _InterlockedIncrement(&v8[114].Header.Lock);
  v15 = (unsigned __int8)v3;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v16 = DeviceObject->DeviceExtension;
    if ( v16 )
    {
      LODWORD(v68) = 2003923561;
      v17 = *((_QWORD *)v16 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
      *(_DWORD *)v17 = 2003923561;
      *(_QWORD *)(v17 + 16) = (unsigned __int8)v3;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 24) = 0LL;
    }
  }
  if ( (_BYTE)v3 )
  {
    Log((_DWORD)DeviceObject, 8, 1735410772, (unsigned __int8)v3, 0LL);
    v18 = FdoExt(DeviceObject);
    if ( (unsigned __int8)v3 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
    {
      v19 = *(_QWORD *)(v18 + 3056);
      if ( v19 )
      {
        v20 = 2928LL * (unsigned __int8)v3;
        v80 = v20;
        v79 = v20 + v19 - 2928;
        Log((_DWORD)DeviceObject, 8, 1735410750, v15, v79);
        if ( v21 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              19,
              (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
              v15);
          v73 = 0;
          Log((_DWORD)DeviceObject, 8, 1735410772, v15, 0LL);
          v22 = FdoExt(DeviceObject);
          if ( v15 > *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
          {
            LOWORD(v23) = 0;
            v68 = 0LL;
          }
          else
          {
            v23 = *(_QWORD *)(v22 + 3056);
            if ( v23 )
            {
              v68 = v20 + v23 - 2928;
              Log((_DWORD)DeviceObject, 8, 1735410750, v15, v68);
              LOWORD(v23) = 0;
            }
            else
            {
              v68 = 0LL;
            }
          }
          v67 = v23;
          LODWORD(v24) = UsbhQueryPortState((__int64)DeviceObject, v15, (__int64)&v75, &v73);
          if ( (int)v24 >= 0 )
          {
            v25 = 1;
            if ( (v75 & 0x10000) == 0 )
            {
              while ( 1 )
              {
                v25 *= 2;
                if ( (v25 & 0xFFE0) != 0 )
                  break;
                if ( ((unsigned __int16)v25 & HIWORD(v75)) != 0 )
                  goto LABEL_31;
              }
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  20,
                  (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
              Log((_DWORD)DeviceObject, 4, 1666076515, 0, 0LL);
              if ( (*(_DWORD *)(FdoExt(DeviceObject) + 2560) & 1) == 0
                || (v48 = v68, ++*(_DWORD *)(v68 + 408), *(int *)(v48 + 408) >= 3) )
              {
                LOBYTE(v65) = 0;
                v73 = -1073704960;
                UsbhException((int)DeviceObject, v15, 10, (int)&v75, 4, v24, -1073704960, usbfile_bus_c, 1463, v65);
                LODWORD(v24) = -1073741823;
                v25 = 0;
              }
            }
LABEL_31:
            if ( (v25 & 0x1F) != 0 )
              v67 |= v25;
          }
          if ( v67 )
            *(_DWORD *)(v68 + 408) = 0;
          Log((_DWORD)DeviceObject, 4, 1348692071, v67, (int)v24);
          v71 = v73;
          if ( (UsbhLogMask & 4) != 0 )
          {
            v26 = DeviceObject->DeviceExtension;
            if ( v26 )
            {
              LODWORD(v68) = 1751340369;
              v29 = *((_QWORD *)v26 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
              *(_DWORD *)v29 = 1751340369;
              *(_QWORD *)(v29 + 8) = v28;
              *(_QWORD *)(v29 + 16) = v15;
              *(_QWORD *)(v29 + 24) = v27;
            }
          }
          if ( (v24 & 0xC0000000) != 0xC0000000 )
          {
            v30 = v72;
            v77 = v72;
            if ( dword_1C006A650 )
            {
              v31 = FdoExt(DeviceObject);
              v82 = *(_DWORD *)(v31 + 5192);
              v83 = *(_WORD *)(v31 + 5196);
              v32 = *(_DWORD *)(v31 + 5200);
              v84 = v32;
              v81 = v32;
              v85 = *(_WORD *)(v31 + 5228);
              v86 = *(_WORD *)(v31 + 5230);
              UsbhEtwGetHubInfo(v31, v87);
              v66 = 0LL;
              v65 = 2;
              v64 = &v67;
              v63 = 4LL;
              v62 = (int *)&v77;
              v61 = 36LL;
              Timeout = (PLARGE_INTEGER)v87;
              UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
            }
            if ( !v67 )
              goto LABEL_66;
            v24 = (int)UsbhHubAckPortChange(DeviceObject, v15, &v67, &v71, Timeout, v61, v62, v63, v64, v65, v66);
            if ( (UsbhLogMask & 4) != 0 )
            {
              v33 = DeviceObject->DeviceExtension;
              if ( v33 )
              {
                LODWORD(v68) = 1734894401;
                v34 = *((_QWORD *)v33 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
                *(_DWORD *)v34 = v68;
                *(_QWORD *)(v34 + 8) = 0LL;
                *(_QWORD *)(v34 + 16) = v15;
                *(_QWORD *)(v34 + 24) = v24;
              }
            }
            if ( (v24 & 0xC0000000) != 0xC0000000 )
            {
              v35 = v67;
              if ( (v67 & 1) != 0 )
              {
                Log((_DWORD)DeviceObject, 4, 1112425259, v15, 0LL);
                _InterlockedIncrement((volatile signed __int32 *)(v79 + 404));
                v35 = v67;
              }
              LODWORD(v78) = v35;
              FdoExt(DeviceObject);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  62,
                  (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                  v15);
              Log((_DWORD)DeviceObject, 512, 1346711858, 0, v15);
              Log((_DWORD)DeviceObject, 8, 1735410772, v15, 0LL);
              v36 = FdoExt(DeviceObject);
              if ( v15 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
              {
                v37 = *(_QWORD *)(v36 + 3056);
                if ( v37 )
                {
                  Log((_DWORD)DeviceObject, 8, 1735410750, v15, v37 + v80 - 2928);
                  if ( v38 )
                  {
                    LODWORD(v79) = 0;
                    UsbhDispatch_PortChangeQueueEventEx((__int64)DeviceObject, v38, 12LL, v76, v79, 0, 0LL, 0LL);
                  }
                }
              }
              v39 = v78;
              FdoExt(DeviceObject);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  75,
                  (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                  v15);
              Log((_DWORD)DeviceObject, 8, 1735410772, v15, 0LL);
              v40 = FdoExt(DeviceObject);
              if ( v15 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
              {
                v41 = *(_QWORD *)(v40 + 3056);
                if ( v41 )
                {
                  Log((_DWORD)DeviceObject, 8, 1735410750, v15, v41 + v80 - 2928);
                  if ( v42 )
                    UsbhDispatch_PortChangeQueueEventEx((__int64)DeviceObject, v42, 4LL, v76, v39, 0, 0LL, 0LL);
                }
              }
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  76,
                  (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                  v15);
              if ( (UsbhLogMask & 4) != 0 )
              {
                v26 = DeviceObject->DeviceExtension;
                if ( v26 )
                {
                  LODWORD(v68) = 1734894417;
                  v43 = *((_QWORD *)v26 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
                  *(_DWORD *)v43 = v68;
                  *(_QWORD *)(v43 + 24) = &v78;
                  *(_QWORD *)(v43 + 8) = 0LL;
                  *(_QWORD *)(v43 + 16) = v15;
                }
              }
              v30 = v72;
LABEL_66:
              UsbhDecHubBusy((__int64)DeviceObject, (__int64)v26, (_QWORD *)v74);
              _InterlockedDecrement(&v8[114].Header.Lock);
              UsbhPostInterrupt(DeviceObject);
              result = UsbhLogMask;
              LockNV = v8[114].Header.LockNV;
              if ( (UsbhLogMask & 4) != 0 )
              {
                v46 = DeviceObject->DeviceExtension;
                if ( v46 )
                {
                  LODWORD(v68) = 826177385;
                  v47 = *((_QWORD *)v46 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
                  *(_DWORD *)v47 = v68;
                  result = 0;
                  *(_QWORD *)(v47 + 8) = 0LL;
                  *(_QWORD *)(v47 + 16) = 0LL;
                  *(_QWORD *)(v47 + 24) = LockNV;
                }
              }
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                return WPP_RECORDER_SF_d(
                         WPP_GLOBAL_Control->DeviceExtension,
                         0,
                         1,
                         37,
                         (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
                         v30);
              return result;
            }
          }
          KeSetEvent(v8 + 112, 0, 0);
          if ( Usb_Disconnected(v24) )
          {
            Log((_DWORD)DeviceObject, 4, 1769436977, 0, (int)v24);
            UsbhQueuePauseChange(DeviceObject, v15, v76);
            UsbhPCE_HW_Stop(DeviceObject, v15, v76);
          }
          else
          {
            Log((_DWORD)DeviceObject, 4, 1769436978, 0, (int)v24);
            LOBYTE(v65) = 1;
            UsbhException((int)DeviceObject, v15, 1, v49, 0, v24, v71, usbfile_bus_c, 3213, v65);
          }
          v4 = v74;
          LOBYTE(v3) = v72;
          goto LABEL_118;
        }
        LOBYTE(v3) = v72;
      }
    }
    Log((_DWORD)DeviceObject, 4, 1769437016, 0, -1073741811LL);
    LOBYTE(v65) = v50;
    UsbhException((int)DeviceObject, v15, 1, v50, 0, -1073741811, 0, usbfile_bus_c, 3118, v65);
    KeSetEvent(v8 + 112, 0, 0);
    v4 = v74;
LABEL_118:
    Log((_DWORD)DeviceObject, 4, 1769422386, 0, v8[114].Header.LockNV);
    _InterlockedDecrement(&v8[114].Header.Lock);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v59 )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        39,
        (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
        v3);
    return UsbhDecHubBusy((__int64)DeviceObject, v58, (_QWORD *)v4);
  }
  HubState = UsbhQueryHubState((_DWORD)DeviceObject);
  v52 = HubState;
  Log((_DWORD)DeviceObject, 4, 1364551795, 0, HubState);
  Log((_DWORD)DeviceObject, 4, 1364551779, v70, v69);
  if ( HubState < 0 )
    goto LABEL_110;
  if ( (v69 & 1) != 0 )
    v8[127].Header.LockNV = 100;
  else
    v8[127].Header.LockNV = 500;
  if ( (v70 & 1) != 0 )
    LODWORD(v8[126].Header.WaitListHead.Flink) = v8[127].Header.Lock;
  HubState = UsbhHubAckHubChange(DeviceObject, &v69, &v71);
  v52 = HubState;
  Log((_DWORD)DeviceObject, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v69 & 2) != 0 || BYTE1(v8[125].Header.WaitListHead.Flink) == v53 && (v70 & 2) != 0 )
  {
LABEL_110:
    KeSetEvent(v8 + 112, 0, 0);
    if ( (v69 & 2) != 0 || !BYTE1(v8[125].Header.WaitListHead.Flink) && (v70 & 2) != 0 )
    {
      Log((_DWORD)DeviceObject, 4, 1749512054, 0, v52);
      if ( BYTE2(v8[125].Header.WaitListHead.Flink) == (_BYTE)v57 )
      {
        BYTE2(v8[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((__int64)DeviceObject, 1u, (int)UsbhSetHubOvercurrentDetectedKey, v57, 0, 1666340431, 0LL);
      }
      LOBYTE(v65) = 0;
      UsbhException((int)DeviceObject, 0, 75, (int)&v69, 4, HubState, v71, usbfile_bus_c, 3318, v65);
    }
    else if ( !Usb_Disconnected(HubState) )
    {
      Log((_DWORD)DeviceObject, 4, 1769433138, 0, v52);
      LOBYTE(v65) = 0;
      UsbhException((int)DeviceObject, 0, 1, v56, 0, HubState, v71, usbfile_bus_c, 3331, v65);
    }
    goto LABEL_118;
  }
  LOBYTE(v65) = 0;
  if ( (v70 & 2) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 72, (int)&v69, 4, HubState, v71, usbfile_bus_c, 3270, v65);
  }
  else if ( (v70 & 1) != 0 )
  {
    UsbhException((int)DeviceObject, 0, 73, (int)&v69, 4, HubState, v71, usbfile_bus_c, 3273, v65);
  }
  else
  {
    UsbhException((int)DeviceObject, 0, 74, (int)&v69, 4, HubState, v71, usbfile_bus_c, 3277, v65);
  }
  _InterlockedDecrement(&v8[114].Header.Lock);
  UsbhDecHubBusy((__int64)DeviceObject, v54, (_QWORD *)v4);
  UsbhPostInterrupt(DeviceObject);
  result = Log((_DWORD)DeviceObject, 4, 1769422387, 0, v8[114].Header.LockNV);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v55 )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             38,
             (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
  return result;
}
