/*
 * XREFs of ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024A6F4
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C00716C0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C0071B30 (GreHintDCWnd.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 */

__int64 __fastcall DC::vSetDpiScaling(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  *(_DWORD *)(a1 + 536) |= 5u;
  *(_DWORD *)(a1 + 36) |= 0x10u;
  *(_QWORD *)(a1 + 540) = a2;
  result = DC::bDpiScaledSurface((DC *)a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(v3 + 512);
    *(_QWORD *)(v3 + 548) = *(_QWORD *)(result + 604);
  }
  return result;
}
