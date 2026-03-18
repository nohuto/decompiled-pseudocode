/*
 * XREFs of ?SetProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1801A1B8C
 * Callers:
 *     ?ProcessSetVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWRECEIVER_SETVISUAL@@@Z @ 0x1801A17B4 (-ProcessSetVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWR.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  char **v2; // rcx
  struct CProjectedShadowReceiver *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CProjectedShadowReceiver *)`CVisual::SetProjectedShadowReceiver'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~1u;
  else
    CSparseStorage::SetData(v2, 32, 8u, &v3);
}
