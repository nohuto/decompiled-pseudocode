/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x1C0005DF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhClearPdoIdleReady @ 0x1C0005F00 (UsbhClearPdoIdleReady.c)
 *     UsbhSshPropagateResume @ 0x1C0006014 (UsbhSshPropagateResume.c)
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x1C0045104 (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1)
{
  __int64 v2; // rsi
  struct _DEVICE_OBJECT *v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // r15
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax

  v2 = PdoExt(a1);
  v3 = *(struct _DEVICE_OBJECT **)(v2 + 1176);
  v4 = FdoExt(v3);
  if ( (*(_DWORD *)(v2 + 1412) & 4) != 0 )
  {
    v5 = FdoExt(v3);
    v6 = UsbhIncHubBusy((_DWORD)v3, v5 + 1912, (_DWORD)v3, 1129476712, 0);
    v7 = Usbh_SSH_Event(v3);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
    {
      FdoExt(v3);
      Usbh_SSH_Event(v3);
    }
    if ( v7 >= 0 || *(_BYTE *)(v4 + 3416) )
    {
      v11 = UsbhLatchPdo(v3, *(unsigned __int16 *)(v2 + 1420), 0LL, 1213425986LL);
      if ( !v11 )
      {
        v7 = -1073741661;
        goto LABEL_7;
      }
      FdoExt(v3);
      if ( (int)UsbhSyncResumePort((_DWORD)v3) >= 0 )
        UsbhSshSetPortsBusyState(v3, *(unsigned __int16 *)(v2 + 1420), 2LL);
      v12 = FdoExt(v3);
      v7 = UsbhSshPropagateResume(v3, v12 + 1912, v11);
      UsbhUnlatchPdo(v3, v11, 0LL, 1213425986LL);
    }
    v8 = FdoExt(v3);
    UsbhClearPdoIdleReady(v3, a1, v8 + 1912);
LABEL_7:
    UsbhDecHubBusy(v3, v9, v6);
    return (unsigned int)v7;
  }
  return 3221225473LL;
}
