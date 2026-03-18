/*
 * XREFs of UsbhWmiResetOvercurrent @ 0x1C004FB90
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 */

__int64 __fastcall UsbhWmiResetOvercurrent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids);
  v6 = *(_DWORD *)(a5 + 4);
  if ( !v6 )
    FdoExt(a1);
  v7 = FdoExt(a1);
  UsbhOvercurrentResetWorker(a1, v6, (__int64)(v7 + 346), 0);
  return 0LL;
}
