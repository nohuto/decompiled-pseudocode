/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x140185470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 InbvSetVirtualFrameBuffer()
{
  __int64 (*v0)(void); // rax

  if ( qword_1403CDD28 && (v0 = *(__int64 (**)(void))(qword_1403CDD28 + 176)) != 0LL )
    return v0();
  else
    return 3221225474LL;
}
