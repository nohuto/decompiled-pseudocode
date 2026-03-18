/*
 * XREFs of ?SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z @ 0x180182340
 * Callers:
 *     ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18018228C (-ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBU.c)
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x18018C790 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CBaseExpression::SetDebugInfo(CBaseExpression *this, const unsigned __int16 *a2)
{
  char **v2; // rcx
  const unsigned __int16 *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 280);
  if ( a2 == (const unsigned __int16 *)`CBaseExpression::SetDebugInfo'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x80000000;
  else
    CSparseStorage::SetData(v2, 1, 8u, &v3);
}
