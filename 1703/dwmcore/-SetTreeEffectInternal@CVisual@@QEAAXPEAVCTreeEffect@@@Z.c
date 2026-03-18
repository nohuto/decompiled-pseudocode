/*
 * XREFs of ?SetTreeEffectInternal@CVisual@@QEAAXPEAVCTreeEffect@@@Z @ 0x1800130C8
 * Callers:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180013ECC (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800140B0 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTreeEffectInternal(CVisual *this, struct CTreeEffect *a2)
{
  struct CTreeEffect *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CTreeEffect *)`CVisual::SetTreeEffectInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x10000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 0x10u, 8u, &v2);
}
