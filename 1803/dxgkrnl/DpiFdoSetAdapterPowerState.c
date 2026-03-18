/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x1C01F8B44
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x1C0209694 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C020980C (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiCorrectPowerAction @ 0x1C003A738 (DpiCorrectPowerAction.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     DpiRequestIoPowerState @ 0x1C01F1AF8 (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1C01F2824 (DpiFdoDetectPostDevice.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x1C01F871C (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01FC9CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C020ABE0 (DpiDxgkDdiSetPowerState.c)
 *     MonitorAdapterPowerChange @ 0x1C022D4BC (MonitorAdapterPowerChange.c)
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
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  bool v16; // zf
  DXGADAPTER *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rcx
  struct _IO_WORKITEM *WorkItem; // rbx
  GUID *PoolWithTag; // rax
  __int64 v24; // rax
  _BYTE v26[4]; // [rsp+30h] [rbp-81h] BYREF
  int v27; // [rsp+34h] [rbp-7Dh]
  PDEVICE_OBJECT v28; // [rsp+38h] [rbp-79h]
  int v29; // [rsp+40h] [rbp-71h] BYREF
  __int64 v30; // [rsp+48h] [rbp-69h]
  GUID ActivityId[5]; // [rsp+50h] [rbp-61h] BYREF
  _DWORD v32[8]; // [rsp+A0h] [rbp-11h] BYREF

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
      v14 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
      v16 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v27 = v14;
      if ( v16 && *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        v28 = 0LL;
        if ( (PDEVICE_OBJECT)qword_1C007A9D8 == DeviceObject )
        {
          if ( dword_1C007AA88 == 3 && byte_1C007AAA8 )
          {
            DpiAcquirePostDisplayInfoFromBgfx(&dword_1C007A9E8);
            byte_1C007AAA8 = 0;
            dword_1C007AAD4 = 1;
            v28 = DeviceObject;
          }
          if ( a4 == 5 )
          {
            if ( !byte_1C007AAA1
              && (int)DpiFdoDetectPostDevice(*((_QWORD *)DeviceExtension + 3), v26) >= 0
              && v26[0] != DeviceExtension[1136] )
            {
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0);
            }
            v17 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 466);
            if ( (!v17 || (int)DXGADAPTER::GetDriverVersion(v17) <= 1105) && byte_1C007A755 )
            {
              v30 = 0LL;
              v29 = 8007;
              if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q((__int64)v17, &EventProfilerEnter, v15, 8007);
              DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 8007);
              memset(v32, 0, sizeof(v32));
              v32[0] = 18;
              x86BiosCall(16LL, v32);
              memset(&dword_1C007A9E8, 0, 0x20uLL);
              dword_1C007AA00 = -1;
              memset(&xmmword_1C007AA08, 0, 0x80uLL);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
              if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q(v18, &EventProfilerExit, v19, v29);
            }
          }
        }
        if ( *((_DWORD *)DeviceExtension + 59) == 2 )
        {
          if ( *((_QWORD *)DeviceExtension + 3) == qword_1C007A9D8 )
          {
            qword_1C007AA90 = (__int64)KeGetCurrentThread();
            qword_1C007AA98 = (__int64)v28;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)State.SystemState,
            v27);
          if ( (struct _KTHREAD *)qword_1C007AA90 == KeGetCurrentThread() )
          {
            qword_1C007AA98 = 0LL;
            qword_1C007AA90 = 0LL;
          }
          if ( (PDEVICE_OBJECT)qword_1C007A9D8 == DeviceObject && dword_1C007AA88 == 3 )
          {
            memset(&dword_1C007A9E8, 0, 0x20uLL);
            dword_1C007AA00 = -1;
            memset(&xmmword_1C007AA08, 0, 0x80uLL);
          }
          v8 = DpiRequestIoPowerState((__int64)DeviceObject, 2, v20, 0);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3624), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = State;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3624));
          KeLeaveCriticalRegion();
          if ( !DeviceExtension[481] || *((_DWORD *)DeviceExtension + 70) > 1u || DeviceExtension[482] )
          {
            DpiFdoInvalidateChildRelations((__int64)DeviceObject, 6u, (__int64)ActivityId);
            if ( *((_DWORD *)DeviceExtension + 71) == 1 && *((_DWORD *)DeviceExtension + 59) == 2 )
            {
              DxgkAcquireAdapterCoreSync(*((_QWORD *)DeviceExtension + 466), 2);
              MonitorAdapterPowerChange(*((DXGADAPTER **)DeviceExtension + 466));
              DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 466));
            }
          }
          else if ( byte_1C007A759 )
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
              IoQueueWorkItemEx(
                WorkItem,
                (PIO_WORKITEM_ROUTINE_EX)DpiFdoInvalidateChildWorkItem,
                DelayedWorkQueue,
                PoolWithTag);
            }
            else
            {
              v24 = WdLogNewEntry5_WdLowResource(v21);
              *(_QWORD *)(v24 + 24) = -1073741670LL;
              WdLogEvent5_WdLowResource(v24);
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
                 v14);
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
        DpiRequestIoPowerState((__int64)DeviceObject, 1, v12, v13);
        v8 = ((__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
               *((_QWORD *)DeviceExtension + 5),
               *((_QWORD *)DeviceExtension + 6),
               -1,
               (POWER_STATE)State.SystemState,
               a5);
      }
      if ( v27 == 5 && (PDEVICE_OBJECT)qword_1C007A9D8 == DeviceObject && dword_1C007AA88 == 3 )
      {
        byte_1C007AAA8 = 1;
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
