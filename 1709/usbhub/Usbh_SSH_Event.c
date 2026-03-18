/*
 * XREFs of Usbh_SSH_Event @ 0x1C00174D0
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C0007B6C (UsbhInternalIoctlPropagateResume.c)
 *     UsbhQueryBusRelations @ 0x1C0013BC0 (UsbhQueryBusRelations.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0017370 (UsbhAcquireEnumBusLock.c)
 *     UsbhHubSSH_Worker @ 0x1C0018F00 (UsbhHubSSH_Worker.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhPdoPnp_QueryId @ 0x1C001B1D0 (UsbhPdoPnp_QueryId.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00267A8 (Usbh_SSH_HubSuspended.c)
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x1C004BAD0 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004C1A0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x1C0057C20 (UsbhSShResumeWorker.c)
 * Callees:
 *     Usbh_SSH_HubPendingResume @ 0x1C0002530 (Usbh_SSH_HubPendingResume.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C000A590 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00267A8 (Usbh_SSH_HubSuspended.c)
 *     UsbhUnlockSSH @ 0x1C0026884 (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0027068 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0057D4C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  char *DeviceExtension; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  signed int v15; // ebx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids,
      a2);
  v6 = *(_QWORD *)(a3 + 8);
  if ( !v6 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(v6 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(v6, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(v6, *(_QWORD *)(v6 + 64));
  KeWaitForSingleObject((PVOID)(v7 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v7 + 3192) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v8 = *(_DWORD *)(v7 + 3456);
  v9 = 32LL * (v8 & 7);
  if ( *(_DWORD *)(v9 + v7 + 3460) != a2 || *(_DWORD *)(v9 + v7 + 3464) != *(_DWORD *)(v7 + 3124) )
  {
    v17 = ((_BYTE)v8 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v17;
    v17 *= 32LL;
    *(_DWORD *)(v17 + v7 + 3460) = a2;
    *(_DWORD *)(v17 + v7 + 3464) = *(_DWORD *)(v7 + 3124);
  }
  v10 = *(unsigned int *)(v7 + 3124);
  switch ( (_DWORD)v10 )
  {
    case 1:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (char *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
      if ( a2 == 6 )
      {
        DeviceExtension[3408] = 1;
        v12 = *(_QWORD *)(a3 + 8);
        if ( !v12 )
          UsbhTrapFatal_Dbg(0LL, 0LL);
        v13 = *(_QWORD *)(v12 + 64);
        if ( !v13 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
        if ( *(_DWORD *)v13 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v12 + 64));
        v14 = *(unsigned int *)(v13 + 3456);
        *(_DWORD *)(v13 + 3124) = 1;
        *(_DWORD *)(32 * v14 + v13 + 3468) = 1;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *(_QWORD *)(v13 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 3128), 16, 1, 0);
LABEL_19:
        v15 = 0;
      }
      else if ( a2 == 1 )
      {
        if ( DeviceExtension[3408]
          || *((char **)DeviceExtension + 388) != DeviceExtension + 3104
          || *((_DWORD *)DeviceExtension + 780)
          || *((char **)DeviceExtension + 603) != DeviceExtension + 4824
          || (*((_DWORD *)DeviceExtension + 640) & 0x10) != 0
          || *((int *)DeviceExtension + 685) > 1
          || (int)UsbhSsh_CheckPortChangeQueuesIdle((__int64)DeviceObject) < 0 )
        {
          v15 = -1073741823;
        }
        else
        {
          v15 = 0;
        }
        DeviceExtension[3408] = 0;
        if ( v15 >= 0 )
        {
          KeResetEvent((PRKEVENT)DeviceExtension + 141);
          DeviceExtension[3416] = 0;
          v21 = FdoExt(*(_QWORD *)(a3 + 8));
          v22 = 8LL * (unsigned int)v21[864];
          v21[781] = 2;
          v21[v22 + 867] = 2;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v21 + 399) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v21 + 782), 16, 1, 0);
          UsbhSshSuspendHub(DeviceObject);
        }
        else
        {
          v18 = FdoExt(*(_QWORD *)(a3 + 8));
          v19 = 8LL * (unsigned int)v18[864];
          v18[781] = 1;
          v18[v19 + 867] = 1;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v18 + 399) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 782), 16, 1, 0);
          KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
          if ( !*((_QWORD *)DeviceExtension + 414)
            && !*((_QWORD *)DeviceExtension + 413)
            && !*((_QWORD *)DeviceExtension + 412) )
          {
            v20 = FdoExt((__int64)DeviceObject);
            UsbhEnableTimerObject(
              (_DWORD)DeviceObject,
              (_DWORD)DeviceExtension + 3200,
              *((_DWORD *)DeviceExtension + 1314),
              0,
              (__int64)(v20 + 478),
              2001228627);
          }
          KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
        }
      }
      else
      {
        switch ( a2 )
        {
          case 4u:
            v23 = *((_QWORD *)DeviceExtension + 413);
            UsbhUnlockSSH(a3, 1LL);
            v15 = v23 != 0 ? 0xC0000001 : 0;
            break;
          case 5u:
            UsbhUnlockSSH(a3, 1LL);
            goto LABEL_19;
          default:
            UsbhUnlockSSH(a3, 1LL);
            v15 = -1073741823;
            break;
        }
      }
      break;
    case 2:
      v15 = Usbh_SSH_HubPendingSuspend(DeviceObject, a2, a3);
      break;
    case 3:
      v15 = Usbh_SSH_HubPendingResumeAfterSuspend(DeviceObject, a2, a3);
      break;
    case 4:
      v15 = Usbh_SSH_HubSuspended(DeviceObject, a2, a3);
      break;
    case 5:
      v15 = Usbh_SSH_HubPendingResume((__int64)DeviceObject, a2, a3);
      break;
    case 6:
      v15 = Usbh_SSH_HubFailedResume(DeviceObject, a2, a3);
      break;
    default:
      v15 = -1073741823;
      UsbhUnlockSSH(a3, v10);
      break;
  }
  return (unsigned int)v15;
}
