/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x1C00179C0
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0018B68 (UsbhSet_Pdo_Dx.c)
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0027CA0 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhDeregisterPdo @ 0x1C0042B54 (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044F2C (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AF70 (UsbhDriverNotFoundWorker.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhSshPortsBusy @ 0x1C0009CF8 (UsbhSshPortsBusy.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  LONG result; // eax
  __int64 v9; // rbx
  BOOL v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // cl
  int v13; // ebp
  int v14; // r10d
  unsigned int v15; // eax
  int v16; // r11d
  int v17; // r10d
  _QWORD *v18; // r15
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
    v10 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
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
          v15 = (unsigned int)FdoExt(a1);
          UsbhSshPortsBusy(a1, v15 + 1912, a4);
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
