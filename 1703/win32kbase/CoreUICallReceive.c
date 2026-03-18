/*
 * XREFs of CoreUICallReceive @ 0x1C006BB88
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C006C1A0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z.c)
 * Callees:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C006BC38 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreUICallReceive(
        struct IMessageCallReceiveHost *a1,
        __int64 a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        __int64 a5,
        void *a6,
        unsigned int a7)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-158h]
  _BYTE v9[80]; // [rsp+40h] [rbp-138h] BYREF
  int v10; // [rsp+90h] [rbp-E8h]
  __int64 (__fastcall **v11)(__int64, unsigned __int64); // [rsp+D0h] [rbp-A8h]
  char v12; // [rsp+D8h] [rbp-A0h] BYREF

  result = CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
             (CoreMessaging::Calling::ReceiveProcessor *)v9,
             a1,
             a3,
             a4,
             v8,
             a6,
             a7);
  if ( (int)result >= 0 )
  {
    result = (*v11)(a5, (unsigned __int64)&v12 & -(__int64)(v10 != 0));
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
