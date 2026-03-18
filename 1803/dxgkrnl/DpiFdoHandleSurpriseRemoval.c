/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C01F60B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C019FB34 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiRequestIoPowerState @ 0x1C01F1AF8 (DpiRequestIoPowerState.c)
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C01F8234 (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C020A518 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  __int64 v6; // rdx
  DXGADAPTER *v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  int v17; // eax
  __int64 v18; // rax
  char v20; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v8 = *(_DWORD *)(DeviceExtension + 236);
  if ( v8 != 6 )
  {
    v9 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v9 = DeviceExtension;
    }
    else
    {
      v10 = *(_QWORD *)(DeviceExtension + 2592);
      if ( v10 )
        v9 = *(_QWORD *)(v10 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && (v8 == 2 || *(_DWORD *)(DeviceExtension + 240) == 2 && ((v8 - 3) & 0xFFFFFFFD) == 0) )
    {
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v20);
      if ( IsDevicePresent < 0 )
        goto LABEL_20;
      if ( !v20 )
      {
        *(_BYTE *)(DeviceExtension + 1148) = 1;
        if ( v9 )
          IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                              *(_QWORD *)(DeviceExtension + 40),
                              *(_QWORD *)(DeviceExtension + 48),
                              v9,
                              1LL);
      }
      if ( IsDevicePresent < 0 )
      {
LABEL_20:
        *(_BYTE *)(DeviceExtension + 1149) = 1;
        v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11);
        v12[3] = 275LL;
        v12[4] = 25LL;
        v12[5] = 2LL - (*(_BYTE *)(DeviceExtension + 1136) != 0);
        v12[6] = *(unsigned int *)(DeviceExtension + 1108);
        v12[7] = *(unsigned int *)(DeviceExtension + 1112);
        WdLogEvent5_WdCriticalError(v12);
      }
    }
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 3624), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v13 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v13;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v9 + 3624));
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v9 + 480) )
      {
        if ( *(_DWORD *)(v9 + 3808) != 3 )
        {
          v7 = *(DXGADAPTER **)(v9 + 3728);
          if ( v7 )
          {
            DXGADAPTER::Stop(v7, 0LL, 0);
            Global = DXGGLOBAL::GetGlobal(v15);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v9 + 3808) = 3;
          }
        }
      }
      else
      {
        DpiRequestIoPowerState(*(_QWORD *)(v9 + 24), 3, v14, 0);
      }
    }
    else
    {
      v7 = (DXGADAPTER *)(*(_DWORD *)(DeviceExtension + 276) & 7);
      *(_DWORD *)(DeviceExtension + 4LL * (_QWORD)v7 + 244) = *(_DWORD *)(DeviceExtension + 240);
      v17 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v17;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  v18 = WdLogNewEntry5_WdEvent(v7, v6);
  *(_QWORD *)(v18 + 24) = a1;
  WdLogEvent5_WdEvent(v18);
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*(_DWORD *)(DeviceExtension + 240) - 1) <= 1 )
    DpiFdoHandleStopDevice(a1, a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Status = IsDevicePresent;
  return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}
