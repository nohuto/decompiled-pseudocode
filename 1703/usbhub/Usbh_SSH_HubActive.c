/*
 * XREFs of Usbh_SSH_HubActive @ 0x1C000B450
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C00026DC (UsbhUnlockSSH.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C001A454 (UsbhSsh_CheckHubIdle.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubActive(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  signed int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 == 6 )
  {
    *(_BYTE *)(v6 + 3408) = 1;
    v7 = *(_QWORD *)(a3 + 8);
    if ( !v7 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v8 = *(_QWORD *)(v7 + 64);
    if ( !v8 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
    if ( *(_DWORD *)v8 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v7 + 64));
    v9 = *(unsigned int *)(v8 + 3456);
    *(_DWORD *)(v8 + 3124) = 1;
    *(_DWORD *)(32 * v9 + v8 + 3468) = 1;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *(_QWORD *)(v8 + 3192) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v8 + 3128), 16, 1, 0);
    return 0;
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        v10 = UsbhSsh_CheckHubIdle(a1);
        if ( v10 < 0 )
        {
          UsbhUnlockSSH(a3, 1);
          KeWaitForSingleObject((PVOID)(v6 + 3160), Executive, 0, 0, 0LL);
          if ( !*(_QWORD *)(v6 + 3312) && !*(_QWORD *)(v6 + 3304) && !*(_QWORD *)(v6 + 3296) )
          {
            v12 = FdoExt(a1);
            UsbhEnableTimerObject(a1, v6 + 3200, *(_DWORD *)(v6 + 5256), 0, v12 + 1912, 2001228627);
          }
          KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 3160), 16, 1, 0);
        }
        else
        {
          KeResetEvent((PRKEVENT)(v6 + 3384));
          *(_BYTE *)(v6 + 3416) = 0;
          UsbhUnlockSSH(a3, 2);
          UsbhSshSuspendHub(a1);
        }
        break;
      case 4:
        v13 = *(_QWORD *)(v6 + 3304);
        UsbhUnlockSSH(a3, 1);
        v10 = v13 != 0 ? 0xC0000001 : 0;
        break;
      case 5:
        UsbhUnlockSSH(a3, 1);
        return 0;
      default:
        UsbhUnlockSSH(a3, 1);
        v10 = -1073741823;
        break;
    }
  }
  return (unsigned int)v10;
}
