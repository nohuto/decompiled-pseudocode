/*
 * XREFs of Interrupter_D0ExitStopped @ 0x1C0016CA8
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqdddx @ 0x1C0018404 (WPP_RECORDER_SF_qqdddx.c)
 */

PDEVICE_OBJECT __fastcall Interrupter_D0ExitStopped(__int64 a1)
{
  PDEVICE_OBJECT result; // rax
  unsigned int i; // edi
  __int64 v4; // r10
  int v5; // [rsp+20h] [rbp-48h]

  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qd(
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                               5u,
                               9u,
                               0x22u,
                               (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    result = *(PDEVICE_OBJECT *)(a1 + 32);
    v4 = *((_QWORD *)&result->Type + i);
    if ( v4 )
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qqdddx(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                                 *(_DWORD *)(v4 + 124),
                                 *(_QWORD *)(v4 + 144),
                                 35,
                                 v5,
                                 v4,
                                 *(_QWORD *)(v4 + 144),
                                 *(_DWORD *)(v4 + 120),
                                 *(_DWORD *)(v4 + 128),
                                 *(_DWORD *)(v4 + 124),
                                 *(_BYTE *)(*(_QWORD *)(v4 + 144) + 24LL) + 16 * (unsigned __int8)*(_DWORD *)(v4 + 124));
  }
  return result;
}
