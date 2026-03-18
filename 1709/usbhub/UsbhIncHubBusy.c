/*
 * XREFs of UsbhIncHubBusy @ 0x1C0013140
 * Callers:
 *     UsbhSshEnterSx @ 0x1C0001BA0 (UsbhSshEnterSx.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     Usbh_PCE_Resume_Action @ 0x1C00129D0 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0013490 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0017370 (UsbhAcquireEnumBusLock.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshBusBusy @ 0x1C001E468 (UsbhSshBusBusy.c)
 *     UsbhSshPortsBusy @ 0x1C00273B8 (UsbhSshPortsBusy.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0044560 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C0048750 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048EBC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C00491D4 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0049938 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049BA0 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004A5EC (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004A8A4 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004AE24 (UsbhIoctlResetStuckHub.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C0052FA8 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C0057C5C (UsbhSshDisabled.c)
 * Callees:
 *     Usbh_SSH_HubPendingResume @ 0x1C0002530 (Usbh_SSH_HubPendingResume.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00267A8 (Usbh_SSH_HubSuspended.c)
 *     UsbhUnlockSSH @ 0x1C0026884 (UsbhUnlockSSH.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0027068 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
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
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx

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
        v29 = ((_BYTE)v22 + 1) & 7;
        *(_DWORD *)(v21 + 3456) = v29;
        v29 *= 32LL;
        *(_DWORD *)(v29 + v21 + 3460) = 6;
        *(_DWORD *)(v29 + v21 + 3464) = *(_DWORD *)(v21 + 3124);
      }
      v24 = *(unsigned int *)(v21 + 3124);
      if ( (_DWORD)v24 == 1 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            11,
            (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
        v25 = *(_QWORD *)(a1 + 64);
        if ( !v25 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v25 != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        *(_BYTE *)(v25 + 3408) = 1;
        v26 = *(_QWORD *)(a2 + 8);
        if ( !v26 )
          UsbhTrapFatal_Dbg(0LL, 0LL);
        v27 = *(_QWORD *)(v26 + 64);
        if ( !v27 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a2 + 8), 0LL);
        if ( *(_DWORD *)v27 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(a2 + 8), *(_QWORD *)(v26 + 64));
        v28 = *(unsigned int *)(v27 + 3456);
        *(_DWORD *)(v27 + 3124) = 1;
        *(_DWORD *)(32 * v28 + v27 + 3468) = 1;
        *(_DWORD *)(a2 + 120) = 1734964085;
        *(_QWORD *)(v27 + 3192) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v27 + 3128), 16, 1, 0);
      }
      else if ( (_DWORD)v24 == 2 )
      {
        Usbh_SSH_HubPendingSuspend(a1, 6LL, a2);
      }
      else if ( (_DWORD)v24 == 3 )
      {
        Usbh_SSH_HubPendingResumeAfterSuspend(a1, 6LL, a2);
      }
      else if ( (_DWORD)v24 == 4 )
      {
        Usbh_SSH_HubSuspended(a1, 6LL, a2);
      }
      else if ( (_DWORD)v24 == 5 )
      {
        Usbh_SSH_HubPendingResume(a1, 6, a2);
      }
      else
      {
        if ( (_DWORD)v24 == 6 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
          FdoExt(a1);
          v24 = 6LL;
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
