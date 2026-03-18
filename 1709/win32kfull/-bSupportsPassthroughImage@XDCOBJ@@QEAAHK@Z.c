/*
 * XREFs of ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C0299064
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 * Callees:
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C002BE34 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall XDCOBJ::bSupportsPassthroughImage(XDCOBJ *this, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a2 == 4 )
    return XDCOBJ::bSupportsJPEG(this);
  if ( a2 != 5 )
    return 0LL;
  v3 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v3 + 76) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(v3 + 32) == 1 )
    return 0LL;
  return result;
}
