/*
 * XREFs of UsbhAcquireHubName @ 0x1C004DAC0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003B920 (UsbhSyncSendDeviceIoctl.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhAcquireHubName(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // esi
  int v16; // eax
  int v17; // r10d
  int v19; // [rsp+28h] [rbp-30h]

  v6 = a3;
  v7 = (unsigned int)a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = a2;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xCu,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids,
      v19,
      a3);
  }
  Log(a1, 64, 1095257649, a5, v7);
  Log(a1, 64, 1095257650, v9, v6);
  *a4 = 0;
  if ( (unsigned int)v6 < 0xA )
    return 3221225507LL;
  v11 = (unsigned int *)(v10 + 4);
  v12 = *(_DWORD *)(v10 + 4);
  if ( v12 < 0xA )
    return 3221225507LL;
  v13 = v10 + 4;
  if ( v12 > (unsigned int)v6 )
    v12 = v6;
  Log(a1, 64, 1095257651, v13, v12);
  *v11 -= 4;
  v15 = v6 - 4;
  if ( *v11 > v15 )
    return 3221225507LL;
  v16 = UsbhSyncSendDeviceIoctl(a1, v14, v11, v15);
  Log(a1, 64, 1095257652, v16, 0LL);
  if ( v17 >= 0 )
  {
    *v11 += 4;
    *a4 = v12;
  }
  return (unsigned int)v17;
}
