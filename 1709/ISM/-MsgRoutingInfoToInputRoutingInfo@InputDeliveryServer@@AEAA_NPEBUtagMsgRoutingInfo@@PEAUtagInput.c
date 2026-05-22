/*
 * XREFs of ?MsgRoutingInfoToInputRoutingInfo@InputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x18007E6E8
 * Callers:
 *     ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18007E7A0 (-PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x18007E820 (-PostInputMessageLegacy@InputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBUKeyboardEvent@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180024078 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

char __fastcall InputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(
        InputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        struct tagInputRoutingInfo *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  char *v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _QWORD *v12; // r8
  _BYTE v14[40]; // [rsp+20h] [rbp-38h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( operator==((__int64)a2, (__int64)v14) )
    return 0;
  v6 = (_QWORD *)*((_QWORD *)this + 59);
  v7 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
    return 0;
  v8 = (char *)a3 + 8;
  while ( 1 )
  {
    v9 = (_OWORD *)v7[8];
    v10 = v9[2];
    v11 = v9[3];
    *(_OWORD *)a3 = v9[1];
    *((_OWORD *)a3 + 1) = v10;
    *((_OWORD *)a3 + 2) = v11;
    if ( operator==((__int64)v8, (__int64)a2) )
      break;
    v7 = (_QWORD *)*v12;
    if ( v7 == *((_QWORD **)this + 59) )
      return 0;
  }
  return 1;
}
