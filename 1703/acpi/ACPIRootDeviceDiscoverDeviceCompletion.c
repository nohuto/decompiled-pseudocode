/*
 * XREFs of ACPIRootDeviceDiscoverDeviceCompletion @ 0x1C00570B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008630 (WPP_RECORDER_SF_qD.c)
 */

LONG __fastcall ACPIRootDeviceDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  char v5; // [rsp+30h] [rbp-18h]

  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)a1 = a3;
    *(_DWORD *)(a1 + 16) = a2;
    v5 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      6,
      31,
      (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
      a3,
      v5);
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
}
