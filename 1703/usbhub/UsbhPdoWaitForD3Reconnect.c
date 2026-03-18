/*
 * XREFs of UsbhPdoWaitForD3Reconnect @ 0x1C00463C4
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044168 (UsbhSyncResumeDeviceInternal.c)
 */

LONG __fastcall UsbhPdoWaitForD3Reconnect(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2)
{
  char v4; // r15
  int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbp
  int v8; // eax
  int v9; // r10d
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = PdoExt((__int64)a2);
  v7 = v6;
  if ( (v6[353] & 0x1000000) != 0 )
  {
    v4 = 1;
    v5 = UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, v6 + 722, v6[734], 1684222788, 0, 0LL);
  }
  KeWaitForSingleObject(v7 + 728, Executive, 0, 0, 0LL);
  v7[353] &= ~0x4000000u;
  KeSetEvent((PRKEVENT)(v7 + 728), 0, 0);
  Log((__int64)DeviceObject, 16, 1144210290, v5, *((unsigned __int16 *)v7 + 710));
  if ( !v4 )
  {
    v5 = UsbhQueryPortState((__int64)DeviceObject, *((_WORD *)v7 + 710), (__int64)&v14, &v15);
    if ( v5 < 0 )
    {
LABEL_17:
      v12 = PdoExt((__int64)a2);
      UsbhQueueSoftConnectChange((__int64)DeviceObject, *((_WORD *)v7 + 710), (__int64)(v12 + 236), 0);
      return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
    }
    if ( (v14 & 3) == 1 )
    {
      Log((__int64)DeviceObject, 16, 1144210284, (unsigned __int16)v14, *((unsigned __int16 *)v7 + 710));
      v4 = 1;
    }
    else if ( (v14 & 1) == 0 )
    {
      Log((__int64)DeviceObject, 16, 1144210279, (unsigned __int16)v14, *((unsigned __int16 *)v7 + 710));
      v5 = -1073741823;
    }
  }
  if ( v5 < 0 )
    goto LABEL_17;
  if ( v4 == 1 )
  {
    UsbhWait((int)DeviceObject, 100);
    v8 = UsbhQueryPortState((__int64)DeviceObject, *((_WORD *)v7 + 710), (__int64)&v14, &v15);
    Log((__int64)DeviceObject, 16, 1144210291, v8, (unsigned __int16)v14);
    if ( v9 >= 0 && (v14 & 1) != 0 )
    {
      v10 = PdoExt((__int64)a2);
      v5 = UsbhSyncResetDeviceInternal(DeviceObject, (__int64)(v10 + 236), (__int64)a2);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v11 = PdoExt((__int64)a2);
    UsbhSyncResumeDeviceInternal((__int64)DeviceObject, (__int64)(v11 + 236), a2);
  }
  if ( v5 < 0 )
    goto LABEL_17;
  return UsbhSet_Pdo_Dx(a2, (POWER_STATE)1);
}
