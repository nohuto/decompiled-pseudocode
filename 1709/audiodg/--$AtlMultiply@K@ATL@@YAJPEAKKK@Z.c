/*
 * XREFs of ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x14004692C
 * Callers:
 *     ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x1400469C0 (-Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z.c)
 *     ??0CParseBuffer@CRegParser@ATL@@QEAA@H@Z @ 0x1400512B4 (--0CParseBuffer@CRegParser@ATL@@QEAA@H@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x14005248C (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlMultiply<unsigned long>(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r9

  v3 = a3 * (unsigned __int64)a2;
  if ( v3 > 0xFFFFFFFF )
    return 2147942487LL;
  *a1 = v3;
  return 0LL;
}
