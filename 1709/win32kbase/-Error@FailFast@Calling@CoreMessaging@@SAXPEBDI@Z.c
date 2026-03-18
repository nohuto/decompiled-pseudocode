/*
 * XREFs of ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C015690C
 * Callers:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0087668 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00878AC (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C008844C (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessaging::Calling::FailFast::Error(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x173u, BugCheckParameter1, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
