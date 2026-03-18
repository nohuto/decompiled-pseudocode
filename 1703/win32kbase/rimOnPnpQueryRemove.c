/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C0110A20
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0094B5C (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C0094C40 (RIMCloseDev.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp-10h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    22,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~2u;
  v4 = RIMCloseDev(v2);
  v7 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    0x13u,
    0x17u,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
    a1,
    v2,
    v7);
  return v4;
}
