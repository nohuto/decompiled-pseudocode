/*
 * XREFs of Register_ControllerStop @ 0x1C0018D10
 * Callers:
 *     Controller_D0Exit @ 0x1C00074F4 (Controller_D0Exit.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_BiosHandoff @ 0x1C0018848 (Register_BiosHandoff.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int Ulong; // eax
  int v5; // ebp
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x36u,
    (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
  v2 = 0;
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v3);
    XilRegister_WriteUlong(a1, v3, Ulong & 0xFFFFFFFE);
    v5 = 16;
    while ( (XilRegister_ReadUlong(a1, v3 + 4) & 1) == 0 )
    {
      if ( !v5 )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x38u,
          (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
          16);
        return (unsigned int)-1073741823;
      }
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v5;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x37u,
      (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
      16 - v5,
      1);
  }
  return v2;
}
