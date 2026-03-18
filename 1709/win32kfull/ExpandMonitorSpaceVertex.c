/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x1C005EC34
 * Callers:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C005F4DC (GetMonitorWorkRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x1C01C2914 (ExpandedMonitorSpace.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C023A620 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  INT v3; // ebx
  INT v4; // edi
  INT v6; // [rsp+44h] [rbp+1Ch]
  __int64 v7; // [rsp+48h] [rbp+20h]

  v6 = HIDWORD(a3);
  v3 = a2;
  v4 = a1;
  LODWORD(v7) = EngMulDiv(a3, a1, a2);
  HIDWORD(v7) = EngMulDiv(v6, v4, v3);
  return v7;
}
