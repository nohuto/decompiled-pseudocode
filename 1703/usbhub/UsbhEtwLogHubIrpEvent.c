/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C0024BE0
 * Callers:
 *     UsbhSshPropagateResume @ 0x1C0001418 (UsbhSshPropagateResume.c)
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C0002B00 (UsbhSshResumePort.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0005DB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSshResumeUpstream @ 0x1C0006698 (UsbhSshResumeUpstream.c)
 *     UsbhFdoColdStartPdo @ 0x1C00072E8 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C0008A50 (UsbhFdoWaitWake_IoCompletion.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0009064 (Usbh_SSH_HubSuspended.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0017CC8 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhFdoPower_WaitWake @ 0x1C00188B0 (UsbhFdoPower_WaitWake.c)
 *     UsbhGetDeviceInformation @ 0x1C001FAE0 (UsbhGetDeviceInformation.c)
 *     UsbhReset1Complete @ 0x1C0021170 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C0021330 (UsbhPortConnect.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0023C70 (UsbhGetAcpiPortAttributes.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C0046B90 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C0046F40 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050B40 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C0051560 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0051640 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C00517A0 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C0051B00 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051BE0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D40 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4, ...)
{
  __int64 v6; // rdx
  int v7; // ecx
  const GUID *v8; // rdx
  int v9; // [rsp+60h] [rbp-19h] BYREF
  __int16 v10; // [rsp+64h] [rbp-15h]
  __int16 v11; // [rsp+66h] [rbp-13h]
  __int16 v12; // [rsp+68h] [rbp-11h]
  __int16 v13; // [rsp+6Ah] [rbp-Fh]
  _WORD v14[2]; // [rsp+70h] [rbp-9h] BYREF
  int v15; // [rsp+74h] [rbp-5h]
  int v16; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+90h] [rbp+17h]
  __int128 v23; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+F0h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+77h]
  va_list va1; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v24 = va_arg(va1, _QWORD);
  if ( dword_1C0069650 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_QWORD *)(a1 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v6 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v6);
    v9 = *(_DWORD *)(v6 + 5192);
    v10 = *(_WORD *)(v6 + 5196);
    v11 = *(_DWORD *)(v6 + 5200);
    v12 = *(_WORD *)(v6 + 5228);
    v13 = *(_WORD *)(v6 + 5230);
    v14[0] = *(_WORD *)(v6 + 2548);
    v14[1] = *(_WORD *)(v6 + 2550);
    v15 = 0;
    v16 = *(unsigned __int16 *)(v6 + 5208);
    v7 = *(_WORD *)(v6 + 5208) != 0;
    v15 = v7;
    if ( *(unsigned __int16 *)(v6 + 5210) )
      v15 = ++v7;
    if ( *(unsigned __int16 *)(v6 + 5212) )
      v15 = ++v7;
    if ( *(unsigned __int16 *)(v6 + 5214) )
      v15 = ++v7;
    if ( *(unsigned __int16 *)(v6 + 5216) )
      v15 = ++v7;
    if ( *(unsigned __int16 *)(v6 + 5218) )
      v15 = v7 + 1;
    v22 = *(_DWORD *)(v6 + 2536);
    if ( a3 )
    {
      v23 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v23) < 0 )
    {
      v8 = 0LL;
LABEL_18:
      UsbhEtwWrite(a4, v8, (unsigned __int64)&v9, 12LL, v14, 36LL, va, 4LL, va1, 4LL, 0LL);
      return;
    }
    v8 = (const GUID *)&v23;
    goto LABEL_18;
  }
}
