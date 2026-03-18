/*
 * XREFs of ?SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z @ 0x180159274
 * Callers:
 *     ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x1801591C0 (-ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBU.c)
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x180162AA0 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CBaseExpression::SetDebugInfo(CBaseExpression *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (const unsigned __int16 *)`CBaseExpression::SetDebugInfo'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) &= ~0x80000000;
  else
    CSparseStorage::SetData((CBaseExpression *)((char *)this + 264), 1u, 8u, &v2);
}
