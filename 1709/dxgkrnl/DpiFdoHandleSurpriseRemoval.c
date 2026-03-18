/*
 * XREFs of DpiFdoHandleSurpriseRemoval @ 0x1C01DE1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     DpiRequestIoPowerState @ 0x1C0101BAC (DpiRequestIoPowerState.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C01AAD1C (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 *     DpiFdoIsDevicePresent @ 0x1C01DEA3C (DpiFdoIsDevicePresent.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C01E9994 (DpiDxgkDdiNotifySurpriseRemoval.c)
 */

NTSTATUS __fastcall DpiFdoHandleSurpriseRemoval(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  int IsDevicePresent; // r14d
  __int64 v6; // rdx
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  DXGGLOBAL *Global; // rax
  int v18; // eax
  __int64 v19; // rax
  char v21; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  IsDevicePresent = 0;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v10 = *(_DWORD *)(DeviceExtension + 236);
  if ( v10 != 6 )
  {
    v11 = 0LL;
    if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
    {
      if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
        v11 = DeviceExtension;
    }
    else
    {
      v12 = *(_QWORD *)(DeviceExtension + 2592);
      if ( v12 )
        v11 = *(_QWORD *)(v12 + 64);
    }
    if ( !*(_BYTE *)(DeviceExtension + 232)
      && (v10 == 2 || *(_DWORD *)(DeviceExtension + 240) == 2 && ((v10 - 3) & 0xFFFFFFFD) == 0) )
    {
      IsDevicePresent = DpiFdoIsDevicePresent(DeviceExtension, &v21);
      if ( IsDevicePresent < 0 )
        goto LABEL_20;
      if ( !v21 )
      {
        *(_BYTE *)(DeviceExtension + 1148) = 1;
        if ( v11 )
          IsDevicePresent = DpiDxgkDdiNotifySurpriseRemoval(
                              *(_QWORD *)(DeviceExtension + 40),
                              *(_QWORD *)(DeviceExtension + 48),
                              v11,
                              1LL);
      }
      if ( IsDevicePresent < 0 )
      {
LABEL_20:
        *(_BYTE *)(DeviceExtension + 1149) = 1;
        v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v6, v8);
        v14[3] = 275LL;
        v14[4] = 25LL;
        v14[5] = 2LL - (*(_BYTE *)(DeviceExtension + 1136) != 0);
        v14[6] = *(unsigned int *)(DeviceExtension + 1108);
        v14[7] = *(unsigned int *)(DeviceExtension + 1112);
        WdLogEvent5_WdCriticalError(v14);
      }
    }
    if ( v11 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 3624), 1u);
      *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
      v15 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v15;
      *(_DWORD *)(DeviceExtension + 236) = 6;
      ExReleaseResourceLite((PERESOURCE)(v11 + 3624));
      KeLeaveCriticalRegion();
      if ( *(_BYTE *)(v11 + 480) )
      {
        if ( *(_DWORD *)(v11 + 3808) != 3 )
        {
          v7 = *(DXGADAPTER **)(v11 + 3728);
          if ( v7 )
          {
            DXGADAPTER::Stop(v7, 0LL, 0LL, v9);
            Global = DXGGLOBAL::GetGlobal(v16);
            DXGGLOBAL::NotifyAdapterRemoval(Global);
            *(_DWORD *)(v11 + 3808) = 3;
          }
        }
      }
      else
      {
        DpiRequestIoPowerState(*(_QWORD *)(v11 + 24), 3, v8, 0);
      }
    }
    else
    {
      v7 = (DXGADAPTER *)(*(_DWORD *)(DeviceExtension + 276) & 7);
      *(_DWORD *)(DeviceExtension + 4LL * (_QWORD)v7 + 244) = *(_DWORD *)(DeviceExtension + 240);
      v18 = *(_DWORD *)(DeviceExtension + 236);
      ++*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 240) = v18;
      *(_DWORD *)(DeviceExtension + 236) = 6;
    }
  }
  v19 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v19 + 24) = a1;
  WdLogEvent5_WdEvent(v19);
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
