/*
 * XREFs of UsbhDecHubBusy @ 0x1C000B930
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00016D0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhSshEnterSx @ 0x1C0001BA0 (UsbhSshEnterSx.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhSshExitSx @ 0x1C0003838 (UsbhSshExitSx.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhDriverResetPort @ 0x1C0006380 (UsbhDriverResetPort.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhBusResume_Action @ 0x1C000E6C0 (UsbhBusResume_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C00129D0 (Usbh_PCE_Resume_Action.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x1C001B1D0 (UsbhPdoPnp_QueryId.c)
 *     UsbhSshBusBusy @ 0x1C001E468 (UsbhSshBusBusy.c)
 *     UsbhSshEnabled @ 0x1C001E764 (UsbhSshEnabled.c)
 *     UsbhSshPortsBusy @ 0x1C00273B8 (UsbhSshPortsBusy.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E72C (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusIdle @ 0x1C003F620 (UsbhSshBusIdle.c)
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
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhSshDisabled @ 0x1C0057C5C (UsbhSshDisabled.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  __int64 Signalling; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  volatile int Lock; // eax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 1667581000;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a3;
      *(_QWORD *)(v8 + 24) = Signalling;
    }
  }
  if ( v5[142].Header.Signalling )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v9 = a3[1];
      v10 = a3 + 1;
      if ( *(_QWORD **)(v9 + 8) != a3 + 1 || (v11 = (_QWORD *)a3[2], (_QWORD *)*v11 != v10) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      a3[2] = a3 + 1;
      *v10 = v10;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}
