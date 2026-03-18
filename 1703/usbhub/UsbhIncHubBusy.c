/*
 * XREFs of UsbhIncHubBusy @ 0x1C000BC70
 * Callers:
 *     UsbhSshEnterSx @ 0x1C0001AF0 (UsbhSshEnterSx.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhSshResumeUpstream @ 0x1C0006698 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshPortsBusy @ 0x1C0009CF8 (UsbhSshPortsBusy.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0009EC8 (UsbhAcquireEnumBusLock.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 *     UsbhPdoPnp_QueryId @ 0x1C0019240 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshBusBusy @ 0x1C001B1C4 (UsbhSshBusBusy.c)
 *     UsbhPortConnect @ 0x1C0021330 (UsbhPortConnect.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043720 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045170 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C00468C4 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048344 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA8 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004916C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049A14 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F94 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C00521E8 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C0057D5C (UsbhSshDisabled.c)
 * Callees:
 *     Usbh_SSH_HubPendingResume @ 0x1C00025A0 (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x1C00026DC (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0009064 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubActive @ 0x1C000B450 (Usbh_SSH_HubActive.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0017CC8 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057EE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rdi
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v15; // rbx
  _LIST_ENTRY *p_WaitListHead; // rdi
  char *v17; // rax
  char **Blink; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1668172104;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = a5;
      *(_QWORD *)(v13 + 24) = Signalling;
    }
  }
  if ( v9[142].Header.Signalling )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v15 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      v17 = (char *)(PoolWithTag + 1);
      *(_DWORD *)v15 = 1215918946;
      *(_QWORD *)(v15 + 24) = a3;
      *(_DWORD *)(v15 + 32) = a4;
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v17 = p_WaitListHead;
      *(_QWORD *)(v15 + 16) = Blink;
      *Blink = v17;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v17;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v15 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          10,
          (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids,
          6);
      v20 = *(_QWORD *)(a2 + 8);
      if ( !v20 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v21 = *(_QWORD *)(v20 + 64);
      if ( !v21 )
        UsbhTrapFatal_Dbg(v20, 0LL);
      if ( *(_DWORD *)v21 != 541218120 )
        UsbhTrapFatal_Dbg(v20, *(_QWORD *)(v20 + 64));
      KeWaitForSingleObject((PVOID)(v21 + 3128), Executive, 0, 0, 0LL);
      *(_QWORD *)(v21 + 3192) = a2;
      *(_DWORD *)(a2 + 120) = 2018005843;
      *(_DWORD *)(a2 + 124) = 6;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      v22 = *(_DWORD *)(v21 + 3456);
      v23 = 32LL * (v22 & 7);
      if ( *(_DWORD *)(v23 + v21 + 3460) != 6 || *(_DWORD *)(v23 + v21 + 3464) != *(_DWORD *)(v21 + 3124) )
      {
        v25 = ((_BYTE)v22 + 1) & 7;
        *(_DWORD *)(v21 + 3456) = v25;
        v25 *= 32LL;
        *(_DWORD *)(v25 + v21 + 3460) = 6;
        *(_DWORD *)(v25 + v21 + 3464) = *(_DWORD *)(v21 + 3124);
      }
      v24 = *(_DWORD *)(v21 + 3124);
      if ( v24 == 1 )
      {
        Usbh_SSH_HubActive(a1, 6, a2);
      }
      else if ( v24 == 2 )
      {
        Usbh_SSH_HubPendingSuspend(a1, 6LL, a2);
      }
      else if ( v24 == 3 )
      {
        Usbh_SSH_HubPendingResumeAfterSuspend(a1, 6LL, a2);
      }
      else if ( v24 == 4 )
      {
        Usbh_SSH_HubSuspended(a1, 6, a2);
      }
      else if ( v24 == 5 )
      {
        Usbh_SSH_HubPendingResume(a1, 6, a2);
      }
      else
      {
        if ( v24 == 6 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
          FdoExt(a1);
          v24 = 6;
        }
        UsbhUnlockSSH(a2, v24);
      }
    }
    return v15;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}
