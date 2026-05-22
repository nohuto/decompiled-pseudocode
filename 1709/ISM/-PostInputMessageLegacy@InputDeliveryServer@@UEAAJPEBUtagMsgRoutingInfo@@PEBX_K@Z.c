/*
 * XREFs of ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18007E7A0
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
        const void *a3,
        __int64 a4)
{
  char v8; // al
  unsigned int v9; // edx
  _BYTE v11[48]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  v8 = InputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(this, a2, (struct tagInputRoutingInfo *)v11);
  v9 = 0;
  if ( v8 )
    return (*(unsigned int (__fastcall **)(InputDeliveryServer *, _BYTE *, const void *, __int64))(*(_QWORD *)this + 32LL))(
             this,
             v11,
             a3,
             a4);
  return v9;
}
