/*
 * XREFs of Interrupter_D0Entry @ 0x1C001DDA0
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0002090 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000E29C (WPP_RECORDER_SF_qL.c)
 *     Interrupter_Initialize @ 0x1C001E9B0 (Interrupter_Initialize.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      9u,
      0x19u,
      (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids,
      a1,
      a2);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
      Interrupter_Initialize(a1);
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
