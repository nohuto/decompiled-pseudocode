/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x140166C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InbvSetVirtualFrameBuffer()
{
  if ( qword_14036E468 && *(_QWORD *)(qword_14036E468 + 176) )
    return guard_dispatch_icall();
  else
    return 3221225474LL;
}
