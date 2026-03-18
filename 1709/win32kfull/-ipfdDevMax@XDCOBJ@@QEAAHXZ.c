/*
 * XREFs of ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C0294F48
 * Callers:
 *     GreDescribePixelFormat @ 0x1C029502C (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C0295150 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C0294F70 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMax(XDCOBJ *this)
{
  __int16 v1; // dx

  v1 = *(_WORD *)(*(_QWORD *)this + 2520LL);
  if ( v1 < 0 )
    return XDCOBJ::ipfdDevMaxGet(this);
  else
    return (unsigned int)v1;
}
