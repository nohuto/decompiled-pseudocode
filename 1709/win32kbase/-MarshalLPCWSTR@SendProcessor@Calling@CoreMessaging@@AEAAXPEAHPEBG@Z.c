/*
 * XREFs of ?MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z @ 0x1C008763C
 * Callers:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00878AC (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void __fastcall CoreMessaging::Calling::SendProcessor::MarshalLPCWSTR(
        CoreMessaging::Calling::SendProcessor *this,
        int *a2,
        const unsigned __int16 *a3)
{
  if ( a3 )
    memmove(a2, a3, *((unsigned int *)this + 21));
}
