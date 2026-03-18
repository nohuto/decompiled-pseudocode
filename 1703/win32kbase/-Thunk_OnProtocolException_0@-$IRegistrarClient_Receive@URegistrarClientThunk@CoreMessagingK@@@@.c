/*
 * XREFs of ?Thunk_OnProtocolException_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@@SAJPEAXPEAPEAX@Z @ 0x1C0156820
 * Callers:
 *     <none>
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01567B0 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall __noreturn IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_OnProtocolException_0(
        __int64 a1,
        int **a2)
{
  CoreMessagingK::Runtime::BugCheck(1028, **a2, 0LL);
}
