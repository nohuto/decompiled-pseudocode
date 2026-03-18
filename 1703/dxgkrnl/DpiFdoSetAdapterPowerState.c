/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C0102954
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0102F30 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C01CDC34 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C01CDDC0 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiCorrectPowerAction @ 0x1C000F744 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     MonitorAdapterPowerChange @ 0x1C0102804 (MonitorAdapterPowerChange.c)
 *     DpiRequestIoPowerState @ 0x1C0102874 (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C010323C (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoDetectPostDevice @ 0x1C011BD40 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011BF88 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01C5034 (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // r13d
  unsigned int v9; // r12d
  char *DeviceExtension; // rdi
  POWER_STATE v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ecx
  int v16; // eax
  __int64 v17; // r8
  bool v18; // zf
  DXGADAPTER *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  _BYTE v24[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v25; // [rsp+34h] [rbp-A4h]
  PDEVICE_OBJECT v26; // [rsp+38h] [rbp-A0h]
  _DWORD v27[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v28[8]; // [rsp+60h] [rbp-78h] BYREF

  v25 = a3;
  v6 = a3;
  memset(v28, 0, sizeof(v28));
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v9 = 0;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v28[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 10;
  v11.SystemState = *(_DWORD *)(DeviceExtension + 284);
  if ( State.SystemState <= v11.SystemState )
  {
    if ( State.SystemState < v11.SystemState )
    {
      v16 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
      v18 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v25 = v16;
      if ( v18 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v26 = 0LL;
        if ( (PDEVICE_OBJECT)qword_1C006FC00 == DeviceObject )
        {
          if ( dword_1C006FCB0 == 3 && byte_1C006FCD0 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C006FC10);
            byte_1C006FCD0 = 0;
            dword_1C006FCFC = 1;
            v26 = DeviceObject;
          }
          if ( a4 == 5 )
          {
            if ( !byte_1C006FCC9
              && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v24) >= 0
              && v24[0] != DeviceExtension[1136] )
            {
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
            }
            v19 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 463);
            if ( (!v19 || (int)DXGADAPTER::GetDriverVersion(v19) <= 1105) && byte_1C006F9D5 )
            {
              if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                Template_q((__int64)v19, &EventProfilerEnter, v17, 8007);
              memset(v27, 0, sizeof(v27));
              v27[0] = 18;
              x86BiosCall(16LL, v27);
              memset(&dword_1C006FC10, 0, 0x20uLL);
              dword_1C006FC28 = -1;
              memset(&xmmword_1C006FC30, 0, 0x80uLL);
              if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                Template_q(v22, &EventProfilerExit, v23, 8007);
            }
          }
        }
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          if ( *((_QWORD *)DeviceExtension + 3) == qword_1C006FC00 )
          {
            qword_1C006FCB8 = (__int64)KeGetCurrentThread();
            qword_1C006FCC0 = (__int64)v26;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)State.SystemState,
            v25);
          if ( (struct _KTHREAD *)qword_1C006FCB8 == KeGetCurrentThread() )
          {
            qword_1C006FCC0 = 0LL;
            qword_1C006FCB8 = 0LL;
          }
          if ( (PDEVICE_OBJECT)qword_1C006FC00 == DeviceObject && dword_1C006FCB0 == 3 )
          {
            memset(&dword_1C006FC10, 0, 0x20uLL);
            dword_1C006FC28 = -1;
            memset(&xmmword_1C006FC30, 0, 0x80uLL);
          }
          v9 = DpiRequestIoPowerState((__int64)DeviceObject, 2, v20, 0);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3600), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3600));
          KeLeaveCriticalRegion();
          if ( !DeviceExtension[481] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[482] )
          {
            DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v28);
            if ( *((_DWORD *)DeviceExtension + 71) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
            {
              DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 463), 2LL);
              MonitorAdapterPowerChange(*((PERESOURCE **)DeviceExtension + 463), 0LL, (__int64)v28, v21);
              DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 463), 2LL);
            }
          }
          else
          {
            DeviceExtension[3353] = 1;
          }
        }
        else
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3600), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3600));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
          v9 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                 *((_QWORD *)DeviceExtension + 5),
                 *((_QWORD *)DeviceExtension + 6),
                 -1,
                 (POWER_STATE)State.SystemState,
                 v16);
        *((POWER_STATE *)DeviceExtension + 71) = State;
      }
      PoSetPowerState(DeviceObject, DevicePowerState, State);
    }
  }
  else
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3600), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3600));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( a5 == 2 )
        {
          v14 = 8;
        }
        else if ( a5 == 3 )
        {
          v14 = 16;
        }
        else
        {
          v14 = 0;
          if ( a5 - 4 <= 2 )
            v14 = 32;
          v6 = v25;
        }
        DpiRequestIoPowerState((__int64)DeviceObject, 1, v13, v14);
        v9 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
      }
      if ( v6 == 5 && (PDEVICE_OBJECT)qword_1C006FC00 == DeviceObject && dword_1C006FCB0 == 3 )
      {
        byte_1C006FCD0 = 1;
        LOBYTE(v12) = 1;
        InbvNotifyDisplayOwnershipChange(v12, DpiEnterSystemDisplay);
      }
    }
    else
    {
      *((POWER_STATE *)DeviceExtension + 71) = State;
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        return (unsigned int)((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                               *((_QWORD *)DeviceExtension + 5),
                               *((_QWORD *)DeviceExtension + 6),
                               -1,
                               (POWER_STATE)State.SystemState,
                               a5);
    }
  }
  return v9;
}
