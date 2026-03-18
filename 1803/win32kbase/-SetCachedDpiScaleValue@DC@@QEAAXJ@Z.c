/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C00C0534
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = a2;
}
