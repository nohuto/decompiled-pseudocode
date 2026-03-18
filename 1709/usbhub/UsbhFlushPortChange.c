/*
 * XREFs of UsbhFlushPortChange @ 0x1C003BDC0
 * Callers:
 *     UsbhFdoColdStartPdo @ 0x1C0007280 (UsbhFdoColdStartPdo.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhFlushPortChange(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // r10d
  int v9; // [rsp+20h] [rbp-28h]
  __int16 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp+24h]
  __int16 v13; // [rsp+6Eh] [rbp+26h]

  v3 = a2;
  v10 = 0;
  FdoExt(a1);
  v11 = 1048867;
  v12 = v3;
  v13 = 0;
  v6 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v10, v9, a3);
  Log(a1, 8, 1718382659, v6, v3);
  return v7;
}
