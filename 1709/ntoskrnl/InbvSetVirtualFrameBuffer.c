/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x14013B620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // rax

  if ( qword_140389EF8 && (v0 = *(__int64 (**)(void))(qword_140389EF8 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
