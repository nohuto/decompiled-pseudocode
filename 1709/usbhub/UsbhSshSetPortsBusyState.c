/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x1C0019684
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhCreatePdo @ 0x1C0016280 (UsbhCreatePdo.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019A34 (UsbhSet_Pdo_Dx.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001BCF4 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045DDC (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004BDE0 (UsbhDriverNotFoundWorker.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhSshPortsBusy @ 0x1C00273B8 (UsbhSshPortsBusy.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

__int16 __fastcall UsbhSshSetPortsBusyState(__int64 a1, unsigned __int16 a2, int a3, unsigned int a4)
{
  __int16 result; // ax
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // cl
  int v13; // ebp
  int v14; // r10d
  _DWORD *v15; // rax
  int v16; // r11d
  int v17; // r10d
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  _DWORD *v20; // rax

  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    KeWaitForSingleObject((PVOID)(v9 + 3160), Executive, 0, 0, 0LL);
    if ( *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || (v10 = 0, *(_DWORD *)(v9 + 3332)) )
      v10 = 1;
    v11 = a2 >> 5;
    v12 = a2 & 0x1F;
    v13 = a3 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(v9 + 4LL * v11 + 3320) |= 1 << v12;
        Log(a1, 0x10000, 1400066114, v10, a2);
        if ( !v14 )
        {
          v15 = FdoExt(a1);
          UsbhSshPortsBusy(a1, v15 + 478, a4);
          UsbhDisableTimerObject(a1, v9 + 3200);
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 4LL * v11 + 3320) &= ~(1 << v12);
      Log(a1, 0x10000, 1400066121, v10, a2);
      if ( v17 && !v16 )
      {
        FdoExt(a1);
        v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt(a1) + 414, 0LL);
        Log(a1, 0x10000, 1213419565, 0LL, (__int64)v18);
        UsbhDecHubBusy(a1, v19, v18);
        v20 = FdoExt(a1);
        UsbhEnableTimerObject(a1, v9 + 3200, *(_DWORD *)(v9 + 5256), 0, (__int64)(v20 + 478), 2001228627);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3160), 16, 1, 0);
  }
  return result;
}
