/*
 * XREFs of UsbhSshPortsBusy @ 0x1C00273B8
 * Callers:
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

void __fastcall UsbhSshPortsBusy(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rsi
  signed __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  __int64 v11; // rdx
  _QWORD *v12; // r10

  v6 = (volatile signed __int64 *)FdoExt(a1);
  v7 = UsbhIncHubBusy(a1, a2, a1, 1649439603, a3);
  Log(a1, 0x10000, 1213419563, _InterlockedCompareExchange64(v6 + 414, v7, 0LL), v7);
  if ( v8 )
  {
    Log(a1, v10, 1213419570, v8, v9);
    UsbhDecHubBusy(a1, v11, v12);
  }
}
