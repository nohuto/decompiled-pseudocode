/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0111A34 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0111EAC (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0103F7C (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD **v3; // r14
  __int64 v4; // rbx
  unsigned int v6; // edi
  int v7; // edx
  _QWORD *v8; // rbx
  __int64 *v9; // rax

  v2 = *(_QWORD *)(a2 + 472);
  v3 = (_QWORD **)(a1 + 576);
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    28,
    (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  if ( gDeviceArbitrationType )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired(a1);
    rimAbUpdateDeadzonesAndResurrectContacts(a1, v4);
    v8 = *v3;
    while ( v8 != v3 )
    {
      v9 = v8 - 1;
      v8 = (_QWORD *)*v8;
      if ( *v9 != v2 )
        v6 &= rimAbSuppressLowerRankActivityForFrame(a1, *v9, v2);
    }
    rimAbSuppressLowerRankActivityInFrame(a1, v2);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x1Eu,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
      v6);
  }
  else
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      20,
      29,
      (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
  }
  return v6;
}
