/*
 * XREFs of ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0169C24
 * Callers:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C016902C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C016978C (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C0169930 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessaging::Calling::FailFast::Error(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x173u, BugCheckParameter1, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
