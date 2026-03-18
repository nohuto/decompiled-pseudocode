/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0110514 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C011098C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C010400C (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010480C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD **v3; // r14
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  __int64 *v8; // rax

  v2 = *(_QWORD *)(a2 + 472);
  v3 = (_QWORD **)(a1 + 576);
  v6 = 1;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Cu,
    (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  if ( gDeviceArbitrationType )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired(a1);
    rimAbUpdateDeadzonesAndResurrectContacts(a1, a2);
    v7 = *v3;
    while ( v7 != v3 )
    {
      v8 = v7 - 1;
      v7 = (_QWORD *)*v7;
      if ( *v8 != v2 )
        v6 &= rimAbSuppressLowerRankActivityForFrame(a1, *v8, v2);
    }
    rimAbSuppressLowerRankActivityInFrame(a1, v2);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x1Eu,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
      v6);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x1Du,
      (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
  }
  return v6;
}
