/*
 * XREFs of ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C029C8C4
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsPassthroughImage(XDCOBJ *this, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a2 == 4 )
    return XDCOBJ::bSupportsJPEG(this);
  if ( a2 != 5 )
    return 0LL;
  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 76) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(v2 + 32) == 1 )
    return 0LL;
  return result;
}
