/*
 * XREFs of UsbhWaitForBootDevice @ 0x1C0045280
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0007280 (UsbhFdoColdStartPdo.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 */

NTSTATUS __fastcall UsbhWaitForBootDevice(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rdx

  v8 = PdoExt(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3u,
      0x52u,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
      a1);
  v9 = *((_QWORD *)v8 + 343);
  v8[685] = a3;
  v8[684] = a4;
  result = ExNotifyBootDeviceRemoval(v9);
  if ( (_BYTE)result )
    result = KeWaitForSingleObject(v8 + 688, Executive, 0, 0, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             v11,
             3u,
             0x53u,
             (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
             a1);
  return result;
}
