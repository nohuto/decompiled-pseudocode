/*
 * XREFs of UsbhFdoSetD0Warm @ 0x1C0045C78
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C000152C (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhResumeHardReset @ 0x1C000566C (UsbhResumeHardReset.c)
 *     UsbhSyncBusResume @ 0x1C000638C (UsbhSyncBusResume.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0025AA4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhFlushPortChange @ 0x1C003AA90 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhWaitForPortResume @ 0x1C004452C (UsbhWaitForPortResume.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Warm(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // esi
  __int16 v5; // bp
  unsigned __int16 i; // di
  __int64 PortData; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  unsigned __int16 j; // di
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned __int16 k; // di
  __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // r10
  __int64 v22; // rax
  struct _DEVICE_OBJECT *v23; // rbp
  _DWORD *v24; // rax
  _DWORD *v25; // r14
  _DWORD *v26; // rax
  __int16 v27; // r9
  int v28; // eax
  int v30[2]; // [rsp+20h] [rbp-78h]
  int v31[2]; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+48h] [rbp-50h]
  unsigned int v34; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v35; // [rsp+58h] [rbp-40h]
  char v36; // [rsp+B0h] [rbp+18h] BYREF
  char v37; // [rsp+B2h] [rbp+1Ah]
  int v38; // [rsp+B8h] [rbp+20h] BYREF

  v35 = FdoExt((__int64)DeviceObject);
  v4 = 0;
  Log((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Cu,
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
  v30[0] = 0;
  UsbhEtwLogHubIrpEvent(
    (__int64)DeviceObject,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_START,
    *(_QWORD *)v30,
    0);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, i);
    if ( PortData )
    {
      v4 = UsbhQueryPortState((__int64)DeviceObject, i, (__int64)&v36, &v38);
      if ( v4 >= 0 )
      {
        v8 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x574D5253u);
        v9 = v8;
        if ( v8 )
        {
          v10 = PdoExt(v8);
          v11 = v10;
          if ( (v36 & 1) != 0 && (v37 & 1) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003986028, i, 0LL);
            v4 = UsbhFlushPortChange((__int64)DeviceObject, i, &v38);
            if ( v4 >= 0 )
            {
              v12 = v11[353];
              if ( (v12 & 0x8000000) == 0 )
                v11[353] = v12 | 0x4000;
            }
            goto LABEL_13;
          }
          if ( (v36 & 3) == 1 )
          {
            v13 = v10[353];
            if ( (v13 & 0x8000000) == 0 )
            {
              v14 = 2003985970;
              v11[353] = v13 | 0x4000;
              goto LABEL_17;
            }
          }
          if ( (v37 & 1) == 0 && (v36 & 1) == 0 )
          {
            *(_DWORD *)(PortData + 2408) |= 4u;
            v14 = 2003985971;
LABEL_17:
            Log((__int64)DeviceObject, 16, v14, i, 0LL);
          }
LABEL_13:
          UsbhUnlatchPdo((__int64)DeviceObject, v9, 0LL, 0x574D5253u);
          goto LABEL_24;
        }
        if ( (v37 & 1) == 0 && (v36 & 1) != 0 )
        {
          *(_DWORD *)(PortData + 2408) |= 4u;
          Log((__int64)DeviceObject, 16, 2003985972, i, 0LL);
        }
      }
    }
LABEL_24:
    v5 = 1;
  }
  Log((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  UsbhSyncBusResume((__int64)DeviceObject, a2);
  for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++j )
  {
    v16 = UsbhGetPortData((__int64)DeviceObject, j);
    v17 = v16;
    if ( v16 )
    {
      v4 = UsbhWaitForPortResume(DeviceObject, v16, a2);
      if ( (v4 & 0xC0000000) == 0xC0000000 )
      {
        LODWORD(v32) = v4;
        v31[0] = *(unsigned __int16 *)(v17 + 4);
        UsbhEtwLogHubIrpEvent(
          (__int64)DeviceObject,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_PORT_RESUME_ERROR,
          *(_QWORD *)v31,
          v32);
        v5 = 1;
        break;
      }
    }
    v5 = 1;
  }
  if ( (v4 & 0xC0000000) != 0xC0000000 )
  {
    UsbhWait((int)DeviceObject, 10);
    v4 = UsbhFdoCheckUpstreamConnectionState((__int64)DeviceObject, &v34);
    if ( (v4 & 0xC0000000) != 0xC0000000 )
    {
      for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); k += v5 )
      {
        v19 = UsbhGetPortData((__int64)DeviceObject, k);
        if ( v19 )
        {
          v20 = 0;
          if ( (*(_DWORD *)(v19 + 2408) & 4) != 0 )
          {
            Log((__int64)DeviceObject, 16, 2003989347, k, 0LL);
            *(_DWORD *)(v21 + 2408) &= ~4u;
            UsbhQueueSoftConnectChange((__int64)DeviceObject, k, a2, v5);
          }
          else
          {
            v22 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x574D5253u);
            v23 = (struct _DEVICE_OBJECT *)v22;
            if ( !v22 )
              goto LABEL_45;
            v24 = PdoExt(v22);
            v25 = v24;
            if ( (v24[356] & 0x1000) != 0 || (v24[353] & 0x4000) != 0 )
            {
              v24[353] = v24[353] & 0xFDFFBFFF | 0x2000000;
              LODWORD(v32) = 0;
              v31[0] = *((unsigned __int16 *)PdoExt((__int64)v23) + 710);
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_RESET_ON_RESUME,
                *(_QWORD *)v31,
                v32);
              v26 = PdoExt((__int64)v23);
              v20 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v26 + 236), (__int64)v23);
              if ( (v25[353] & 4) != 0 )
                UsbhSendSynchronousUsbIoctlRequest((int)DeviceObject, v23, 0x220FA7u);
            }
            UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v23, 0LL, 0x574D5253u);
            if ( (v20 & 0xC0000000) == 0xC0000000 )
            {
              Log((__int64)DeviceObject, 16, 1466782291, 0LL, v20);
              v5 = v27 + 1;
              UsbhQueueSoftConnectChange((__int64)DeviceObject, k, a2, v27 + 1);
              LOBYTE(v33) = 0;
              UsbhException((int)DeviceObject, 0, 138, 0, 0, v20, 0, usbfile_fdopwr_c, 3687, v33);
            }
            else
            {
LABEL_45:
              v5 = 1;
            }
          }
        }
      }
      v28 = v35[640];
      if ( (v28 & 0x10) != 0 )
      {
        LOBYTE(v33) = 0;
        v35[640] = v28 & 0xFFFFFFEF;
        UsbhException((int)DeviceObject, 0, 113, 0, 0, 0, 0, usbfile_fdopwr_c, 3702, v33);
        v4 = -1073741823;
      }
    }
  }
  UsbhResumeHardReset((int)DeviceObject);
  LODWORD(v32) = v4;
  v31[0] = 0;
  UsbhEtwLogHubIrpEvent(
    (__int64)DeviceObject,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_WARM_COMPLETE,
    *(_QWORD *)v31,
    v32);
  return (unsigned int)v4;
}
