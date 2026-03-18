/*
 * XREFs of UsbhDisableTimerObject @ 0x1C0025130
 * Callers:
 *     UsbhSshEnterSx @ 0x1C0001AF0 (UsbhSshEnterSx.c)
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00179C0 (UsbhSshSetPortsBusyState.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhHubStart @ 0x1C001DD84 (UsbhHubStart.c)
 *     UsbhInitCallbackWorker @ 0x1C00250A0 (UsbhInitCallbackWorker.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003CD18 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003CE74 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C0045794 (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0057BB0 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C0057D5C (UsbhSshDisabled.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ecx
  KIRQL v7; // al
  __int16 v8; // cx
  __int64 v9; // r9
  KIRQL v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _DWORD v17[4]; // [rsp+70h] [rbp-21h] BYREF
  int v18; // [rsp+80h] [rbp-11h] BYREF
  __int16 v19; // [rsp+84h] [rbp-Dh]
  __int16 v20; // [rsp+86h] [rbp-Bh]
  __int16 v21; // [rsp+88h] [rbp-9h]
  __int16 v22; // [rsp+8Ah] [rbp-7h]
  _WORD v23[2]; // [rsp+90h] [rbp-1h] BYREF
  int v24; // [rsp+94h] [rbp+3h]
  int v25; // [rsp+98h] [rbp+7h]
  int v31; // [rsp+B0h] [rbp+1Fh]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    v17[0] = *(_DWORD *)(a2 + 24);
    if ( dword_1C0069650 )
    {
      if ( *(_DWORD *)v4 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v4);
      v18 = *(_DWORD *)(v4 + 5192);
      v19 = *(_WORD *)(v4 + 5196);
      v5 = *(_DWORD *)(v4 + 5200);
      v20 = v5;
      v17[2] = v5;
      v21 = *(_WORD *)(v4 + 5228);
      v22 = *(_WORD *)(v4 + 5230);
      v23[0] = *(_WORD *)(v4 + 2548);
      LOWORD(v5) = *(_WORD *)(v4 + 2550);
      v24 = 0;
      v23[1] = v5;
      v25 = *(unsigned __int16 *)(v4 + 5208);
      v6 = *(_WORD *)(v4 + 5208) != 0;
      v24 = v6;
      if ( *(unsigned __int16 *)(v4 + 5210) )
        v24 = ++v6;
      if ( *(unsigned __int16 *)(v4 + 5212) )
        v24 = ++v6;
      if ( *(unsigned __int16 *)(v4 + 5214) )
        v24 = ++v6;
      if ( *(unsigned __int16 *)(v4 + 5216) )
        v24 = ++v6;
      if ( *(unsigned __int16 *)(v4 + 5218) )
        v24 = v6 + 1;
      v31 = *(_DWORD *)(v4 + 2536);
      UsbhEtwWrite(
        &USBHUB_ETW_EVENT_HUB_DISABLE_TIMER,
        0LL,
        (unsigned __int64)&v18,
        12LL,
        v23,
        36LL,
        v17,
        4LL,
        a2 + 72,
        4,
        0LL);
    }
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    v8 = UsbhLogMask;
    v9 = *(int *)(a2 + 4);
    v10 = v7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 827618148;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v9;
        v8 = UsbhLogMask;
      }
    }
    if ( *(_DWORD *)(a2 + 4) == 1 )
    {
      if ( (v8 & 0x2000) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 844395364;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = a2;
          *(_QWORD *)(v14 + 24) = 1LL;
        }
      }
      v15 = *(_QWORD *)(a2 + 56);
      v16 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v15 + 8) != a2 + 56 || *v16 != a2 + 56 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
    else
    {
      Log(a1, 0x2000, 1685279795, a2, *(int *)(a2 + 4));
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v10);
  }
}
