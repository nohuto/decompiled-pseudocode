/*
 * XREFs of ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C021D734
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C02195CC (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BB58 (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

void __fastcall InkFeedbackServer::OnPointerMessagePosted(InkFeedbackServer *this, int a2, Pointer *a3)
{
  int PointerInfoByPointerMsgId; // eax
  const GUID *v5; // r8
  const GUID *v6; // r9
  InkFeedbackServer *v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  if ( a2 == 583 || a2 == 594 )
  {
    v9 = 0LL;
    PointerInfoByPointerMsgId = Pointer::GetPointerInfoByPointerMsgId(
                                  a3,
                                  (const struct tagPOINTER_INFO **)&v9,
                                  (const struct tagPOINTER_INFO **)a3);
    if ( PointerInfoByPointerMsgId >= 0 )
    {
      v7 = *(InkFeedbackServer **)this;
      if ( *(InkFeedbackServer **)this != this )
      {
        v8 = v9;
        do
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v7 - 1) + 8LL))(
            (__int64)v7 - 8,
            *(unsigned int *)(v8 + 4));
          v7 = *(InkFeedbackServer **)v7;
        }
        while ( v7 != this );
      }
    }
    else if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v13 = 0;
      LODWORD(v9) = PointerInfoByPointerMsgId;
      v11 = &v9;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, v6, 3u, &pData);
    }
  }
}
