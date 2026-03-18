/*
 * XREFs of Usbh_SSH_Event @ 0x1C00165B0
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C0006698 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1C0008CDC (UsbhInternalIoctlPropagateResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0009064 (Usbh_SSH_HubSuspended.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0009EC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhQueryBusRelations @ 0x1C0015090 (UsbhQueryBusRelations.c)
 *     UsbhHubSSH_Worker @ 0x1C0017960 (UsbhHubSSH_Worker.c)
 *     UsbhFdoDeviceControl @ 0x1C003A160 (UsbhFdoDeviceControl.c)
 *     UsbhHardReset_Action @ 0x1C00468C4 (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B330 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BE90 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x1C0057D20 (UsbhSShResumeWorker.c)
 * Callees:
 *     Usbh_SSH_HubPendingResume @ 0x1C00025A0 (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x1C00026DC (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0009064 (Usbh_SSH_HubSuspended.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0017CC8 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0019CA0 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0057E4C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057EE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edx
  char *DeviceExtension; // rbx
  signed int v13; // esi
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
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
    v10 = ((_BYTE)v8 + 1) & 7;
    *(_DWORD *)(v7 + 3456) = v10;
    v10 *= 32LL;
    *(_DWORD *)(v10 + v7 + 3460) = a2;
    *(_DWORD *)(v10 + v7 + 3464) = *(_DWORD *)(v7 + 3124);
  }
  v11 = *(_DWORD *)(v7 + 3124);
  switch ( v11 )
  {
    case 1:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (char *)a1->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
      if ( a2 == 1 )
      {
        if ( *(_DWORD *)DeviceExtension != 541218120 )
          UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
        if ( DeviceExtension[3408]
          || *((char **)DeviceExtension + 388) != DeviceExtension + 3104
          || *((_DWORD *)DeviceExtension + 780)
          || *((char **)DeviceExtension + 603) != DeviceExtension + 4824
          || (*((_DWORD *)DeviceExtension + 640) & 0x10) != 0
          || *((int *)DeviceExtension + 685) > 1
          || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
        {
          v13 = -1073741823;
        }
        else
        {
          v13 = 0;
        }
        DeviceExtension[3408] = 0;
        if ( v13 < 0 )
        {
          v20 = FdoExt(*(_QWORD *)(a3 + 8));
          v21 = 8LL * (unsigned int)v20[864];
          v20[781] = 1;
          v20[v21 + 867] = 1;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v20 + 399) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v20 + 782), 16, 1, 0);
          KeWaitForSingleObject(DeviceExtension + 3160, Executive, 0, 0, 0LL);
          if ( !*((_QWORD *)DeviceExtension + 414)
            && !*((_QWORD *)DeviceExtension + 413)
            && !*((_QWORD *)DeviceExtension + 412) )
          {
            v22 = FdoExt((__int64)a1);
            UsbhEnableTimerObject(
              (_DWORD)a1,
              (_DWORD)DeviceExtension + 3200,
              *((_DWORD *)DeviceExtension + 1314),
              0,
              (__int64)(v22 + 478),
              2001228627);
          }
          KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 3160), 16, 1, 0);
        }
        else
        {
          KeResetEvent((PRKEVENT)DeviceExtension + 141);
          DeviceExtension[3416] = 0;
          v14 = FdoExt(*(_QWORD *)(a3 + 8));
          v15 = 8LL * (unsigned int)v14[864];
          v14[781] = 2;
          v14[v15 + 867] = 2;
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v14 + 399) = 0LL;
          KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 782), 16, 1, 0);
          UsbhSshSuspendHub(a1, a3);
        }
      }
      else if ( a2 == 6 )
      {
        DeviceExtension[3408] = 1;
        v16 = *(_QWORD *)(a3 + 8);
        if ( !v16 )
          UsbhTrapFatal_Dbg(0LL, 0LL);
        v17 = *(_QWORD *)(v16 + 64);
        if ( !v17 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
        if ( *(_DWORD *)v17 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v16 + 64));
        v18 = *(unsigned int *)(v17 + 3456);
        *(_DWORD *)(v17 + 3124) = 1;
        *(_DWORD *)(32 * v18 + v17 + 3468) = 1;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *(_QWORD *)(v17 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v17 + 3128), 16, 1, 0);
        v13 = 0;
      }
      else
      {
        switch ( a2 )
        {
          case 4u:
            v23 = *((_QWORD *)DeviceExtension + 413);
            UsbhUnlockSSH(a3, 1);
            v13 = v23 != 0 ? 0xC0000001 : 0;
            break;
          case 5u:
            UsbhUnlockSSH(a3, 1);
            v13 = 0;
            break;
          default:
            UsbhUnlockSSH(a3, 1);
            v13 = -1073741823;
            break;
        }
      }
      break;
    case 2:
      v13 = Usbh_SSH_HubPendingSuspend(a1, a2, a3);
      break;
    case 3:
      v13 = Usbh_SSH_HubPendingResumeAfterSuspend(a1, a2, a3);
      break;
    case 4:
      v13 = Usbh_SSH_HubSuspended((__int64)a1, a2, a3);
      break;
    case 5:
      v13 = Usbh_SSH_HubPendingResume((__int64)a1, a2, a3);
      break;
    case 6:
      v13 = Usbh_SSH_HubFailedResume(a1, a2, a3);
      break;
    default:
      v13 = -1073741823;
      UsbhUnlockSSH(a3, v11);
      break;
  }
  return (unsigned int)v13;
}
