/*
 * XREFs of WPP_SF_Lqq @ 0x1C005393C
 * Callers:
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00535F0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0053780 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_Lqq(unsigned __int16 a1, __int64 a2, int a3, ...)
{
  int v3; // [rsp+70h] [rbp+18h] BYREF
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  v3 = a3;
  ndisWppFastTraceMessage(&WPP_4308510b5fb5364aadc32f04d3b40dd6_Traceguids, a1, &v3, 4LL, va, 8LL, va1, 8LL, 0LL);
}
