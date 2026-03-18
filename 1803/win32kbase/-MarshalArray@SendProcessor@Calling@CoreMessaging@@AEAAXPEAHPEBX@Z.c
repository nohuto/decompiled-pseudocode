/*
 * XREFs of ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C0169000
 * Callers:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C016902C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

void __fastcall CoreMessaging::Calling::SendProcessor::MarshalArray(
        CoreMessaging::Calling::SendProcessor *this,
        int *a2,
        const void *a3)
{
  if ( a3 )
    memmove(a2, a3, *((unsigned int *)this + 21));
}
