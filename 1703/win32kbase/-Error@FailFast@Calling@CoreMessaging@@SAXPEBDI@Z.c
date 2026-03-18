/*
 * XREFs of ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0157190
 * Callers:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C006BC38 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C006C904 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C006CB3C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessaging::Calling::FailFast::Error(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x173u, BugCheckParameter1, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
