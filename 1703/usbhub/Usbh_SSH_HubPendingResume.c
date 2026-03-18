/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x1C00025A0
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00129D0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C00026DC (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0005F78 (UsbhDisarmHubForWakeDetect.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhLockSSH @ 0x1C0057C58 (UsbhLockSSH.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  __int64 v13; // rax
  int v15; // edi
  int v16; // edi
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  int v20; // eax

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = a2 - 1;
  if ( !v8 )
  {
    v19 = 5LL;
    goto LABEL_19;
  }
  v9 = v8 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 )
  {
    v17 = a3;
LABEL_29:
    UsbhUnlockSSH(v17, 5LL);
    return (unsigned int)-1073741823;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v15 = v12 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = a3;
        v18 = v16 - 1;
        if ( !v18 )
        {
          UsbhUnlockSSH(a3, 5LL);
          UsbhSshResumeDownstream(a1);
          return v6;
        }
        if ( v18 == 1 )
        {
          UsbhUnlockSSH(a3, 6LL);
          UsbhDisarmHubForWakeDetect(a1);
          return v6;
        }
        goto LABEL_29;
      }
      v19 = 1LL;
    }
    else
    {
      UsbhUnlockSSH(a3, 5LL);
      KeWaitForSingleObject(v7 + 846, Executive, 0, 0, 0LL);
      v19 = (unsigned int)UsbhLockSSH(a3, 6LL);
      v20 = 0;
      if ( (_DWORD)v19 == 6 )
        v20 = -1073741823;
      v6 = v20;
    }
LABEL_19:
    UsbhUnlockSSH(a3, v19);
    return v6;
  }
  v13 = FdoExt(*(_QWORD *)(a3 + 8));
  *(_DWORD *)(v13 + 3124) = 5;
  *(_DWORD *)(32LL * *(unsigned int *)(v13 + 3456) + v13 + 3468) = 5;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *(_QWORD *)(v13 + 3192) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 3128), 16, 1, 0);
  return (unsigned int)-1073741823;
}
