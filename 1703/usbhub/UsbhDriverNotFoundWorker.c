/*
 * XREFs of UsbhDriverNotFoundWorker @ 0x1C004AF70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00179C0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhDisablePort @ 0x1C0042D8C (UsbhDisablePort.c)
 */

__int64 __fastcall UsbhDriverNotFoundWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  int v7; // eax
  __int64 PortData; // rax

  v6 = PdoExt(a3);
  KeWaitForSingleObject(v6 + 716, Executive, 0, 0, 0LL);
  if ( PdoExt(a3)[280] == 100 )
  {
    v7 = v6[353];
    if ( (v7 & 0x18000000) != 0 )
    {
      if ( (v7 & 0x10000000) != 0 )
        UsbhEnableTimerObject(
          a1,
          (__int64)(v6 + 424),
          10000,
          *((unsigned __int16 *)v6 + 710),
          *((_QWORD *)v6 + 105),
          0x77464E44u);
    }
    else
    {
      v6[353] = v7 | 0x8000000;
      PortData = UsbhGetPortData(a1, a2);
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, a2, 1, 0);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 716), 0, 0);
  UsbhUnlatchPdo(a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
