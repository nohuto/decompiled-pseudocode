/*
 * XREFs of Register_WaitForControllerReady @ 0x1C0019430
 * Callers:
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  int v4; // esi
  int v5; // ebp
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x41u,
    (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
  v2 = 0;
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = 100;
    v5 = 0;
    while ( (XilRegister_ReadUlong(a1, v3 + 4) & 0x800) != 0 )
    {
      if ( !v4 )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x43u,
          (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
          10000);
        return (unsigned int)-1073741823;
      }
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v4;
      v5 += 100;
    }
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x42u,
      (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
      v5);
  }
  return v2;
}
