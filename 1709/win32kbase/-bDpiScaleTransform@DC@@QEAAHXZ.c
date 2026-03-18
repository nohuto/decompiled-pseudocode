/*
 * XREFs of ?bDpiScaleTransform@DC@@QEAAHXZ @ 0x1C0051E88
 * Callers:
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00529A0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreSetDCOrg @ 0x1C00592E0 (GreSetDCOrg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 134);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
