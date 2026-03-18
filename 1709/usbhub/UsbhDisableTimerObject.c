/*
 * XREFs of UsbhDisableTimerObject @ 0x1C001CC00
 * Callers:
 *     UsbhSshEnterSx @ 0x1C0001BA0 (UsbhSshEnterSx.c)
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhInitCallbackWorker @ 0x1C0008010 (UsbhInitCallbackWorker.c)
 *     UsbhHubStart @ 0x1C00089E8 (UsbhHubStart.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DC60 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DD2C (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C004663C (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C004BAD0 (UsbhAsyncStop.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0057AB0 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C0057C5C (UsbhSshDisabled.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // r9
  KIRQL v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    if ( dword_1C006A650 )
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    v6 = *(int *)(a2 + 4);
    v7 = v5;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 827618148;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v6;
      }
    }
    if ( *(_DWORD *)(a2 + 4) == 1 )
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
          *(_DWORD *)v11 = 844395364;
          *(_QWORD *)(v11 + 8) = 0LL;
          *(_QWORD *)(v11 + 16) = a2;
          *(_QWORD *)(v11 + 24) = 1LL;
        }
      }
      v12 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v12 + 8) != a2 + 56 || (v13 = *(_QWORD **)(a2 + 64), *v13 != a2 + 56) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      Log(a1, 0x2000, 1685279795, a2, *(int *)(a2 + 4));
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v7);
  }
}
