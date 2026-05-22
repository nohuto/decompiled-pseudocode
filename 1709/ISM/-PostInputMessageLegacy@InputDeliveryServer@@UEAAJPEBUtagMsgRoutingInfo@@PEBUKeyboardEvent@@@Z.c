/*
 * XREFs of ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x18007E820
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x18007E6E8 (-MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInput.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::PostInputMessageLegacy(
        InputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        const struct KeyboardEvent *a3)
{
  unsigned int v6; // ebx
  _BYTE v8[48]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = 0;
  if ( !*((_BYTE *)this + 68)
    || InputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(this, a2, (struct tagInputRoutingInfo *)v8) )
  {
    return (*(unsigned int (__fastcall **)(InputDeliveryServer *, _BYTE *, const struct KeyboardEvent *))(*(_QWORD *)this + 24LL))(
             this,
             v8,
             a3);
  }
  return v6;
}
