/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C0100CC8
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C01E8044 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C01E81D0 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DpiCorrectPowerAction @ 0x1C0010F88 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01015CC (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1C0101BAC (DpiRequestIoPowerState.c)
 *     MonitorAdapterPowerChange @ 0x1C0101C8C (MonitorAdapterPowerChange.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoDetectPostDevice @ 0x1C011C11C (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011C364 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01DEB3C (DpiFdoRebootForSurpriseRemoval.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned int v8; // r12d
  char *DeviceExtension; // rdi
  POWER_STATE v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  int v15; // eax
  __int64 v16; // r8
  bool v17; // zf
  DXGADAPTER *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  GUID *PoolWithTag; // rax
  __int64 v25; // rax
  _BYTE v26[4]; // [rsp+30h] [rbp-71h] BYREF
  int v27; // [rsp+34h] [rbp-6Dh]
  PDEVICE_OBJECT v28; // [rsp+38h] [rbp-69h]
  GUID ActivityId[5]; // [rsp+40h] [rbp-61h] BYREF
  _DWORD v30[8]; // [rsp+90h] [rbp-11h] BYREF

  v27 = a3;
  memset(ActivityId, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v8 = 0;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *(_QWORD *)&ActivityId[4].Data1 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 10;
  LOBYTE(ActivityId[3].Data1) = -1;
  v10.SystemState = *(_DWORD *)(DeviceExtension + 284);
  if ( State.SystemState <= v10.SystemState )
  {
    if ( State.SystemState < v10.SystemState )
    {
      v15 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
      v17 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v27 = v15;
      if ( v17 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v28 = 0LL;
        if ( (PDEVICE_OBJECT)qword_1C0060A80 == DeviceObject )
        {
          if ( dword_1C0060B30 == 3 && byte_1C0060B50 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0060A90);
            byte_1C0060B50 = 0;
            dword_1C0060B7C = 1;
            v28 = DeviceObject;
          }
          if ( a4 == 5 )
          {
            if ( !byte_1C0060B49
              && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v26) >= 0
              && v26[0] != DeviceExtension[1136] )
            {
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0LL);
            }
            v18 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 466);
            if ( (!v18 || (int)DXGADAPTER::GetDriverVersion(v18) <= 1105) && byte_1C0060855 )
            {
              if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q((__int64)v18, &EventProfilerEnter, v16, 8007);
              memset(v30, 0, sizeof(v30));
              v30[0] = 18;
              x86BiosCall(16LL, v30);
              memset(&dword_1C0060A90, 0, 0x20uLL);
              dword_1C0060AA8 = -1;
              memset(&xmmword_1C0060AB0, 0, 0x80uLL);
              if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v20, &EventProfilerExit, v21, 8007);
            }
          }
        }
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          if ( *((_QWORD *)DeviceExtension + 3) == qword_1C0060A80 )
          {
            qword_1C0060B38 = (__int64)KeGetCurrentThread();
            qword_1C0060B40 = (__int64)v28;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)State.SystemState,
            v27);
          if ( (struct _KTHREAD *)qword_1C0060B38 == KeGetCurrentThread() )
          {
            qword_1C0060B40 = 0LL;
            qword_1C0060B38 = 0LL;
          }
          if ( (PDEVICE_OBJECT)qword_1C0060A80 == DeviceObject && dword_1C0060B30 == 3 )
          {
            memset(&dword_1C0060A90, 0, 0x20uLL);
            dword_1C0060AA8 = -1;
            memset(&xmmword_1C0060AB0, 0, 0x80uLL);
          }
          v8 = DpiRequestIoPowerState(DeviceObject, 2LL, v19, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3624), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3624));
          KeLeaveCriticalRegion();
          if ( !DeviceExtension[481] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[482] )
          {
            DpiFdoInvalidateChildRelations(DeviceObject, 6LL, ActivityId);
            if ( *((_DWORD *)DeviceExtension + 71) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
            {
              DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 466), 2);
              MonitorAdapterPowerChange(*((DXGADAPTER **)DeviceExtension + 466));
              DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 466), 2);
            }
          }
          else if ( byte_1C0060859 )
          {
            DeviceExtension[3377] = 1;
          }
          else
          {
            WorkItem = IoAllocateWorkItem(DeviceObject);
            if ( WorkItem )
            {
              PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E6F6374u);
              if ( PoolWithTag )
              {
                *PoolWithTag = ActivityId[0];
                PoolWithTag[1] = ActivityId[1];
                PoolWithTag[2] = ActivityId[2];
                PoolWithTag[3] = ActivityId[3];
                *(_QWORD *)&PoolWithTag[4].Data1 = *(_QWORD *)&ActivityId[4].Data1;
              }
              IoQueueWorkItemEx(WorkItem, DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, PoolWithTag);
            }
            else
            {
              v25 = WdLogNewEntry5_WdLowResource(v22);
              *(_QWORD *)(v25 + 24) = -1073741670LL;
              WdLogEvent5_WdLowResource(v25);
            }
          }
        }
        else
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3624), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3624));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
          v8 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
                 *((_QWORD *)DeviceExtension + 5),
                 *((_QWORD *)DeviceExtension + 6),
                 -1,
                 (POWER_STATE)State.SystemState,
                 v15);
        *((POWER_STATE *)DeviceExtension + 71) = State;
      }
      PoSetPowerState(DeviceObject, DevicePowerState, State);
    }
  }
  else
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( *((_QWORD *)DeviceExtension + 2) == 0x274727044LL )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3624), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3624));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( a5 == 2 )
        {
          v13 = 8;
        }
        else if ( a5 == 3 )
        {
          v13 = 16;
        }
        else
        {
          v13 = 0;
          if ( a5 - 4 <= 2 )
            v13 = 32;
        }
        DpiRequestIoPowerState(DeviceObject, 1LL, v12, v13);
        v8 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
      }
      if ( v27 == 5 && (PDEVICE_OBJECT)qword_1C0060A80 == DeviceObject && dword_1C0060B30 == 3 )
      {
        byte_1C0060B50 = 1;
        LOBYTE(v11) = 1;
        InbvNotifyDisplayOwnershipChange(v11, DpiEnterSystemDisplay);
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
  return v8;
}
