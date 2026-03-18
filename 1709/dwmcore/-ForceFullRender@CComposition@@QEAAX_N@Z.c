/*
 * XREFs of ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x1800B054C
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1801287A0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::ForceFullRender(CComposition *this, char a2)
{
  CRenderTargetManager *v2; // rcx

  v2 = (CRenderTargetManager *)*((_QWORD *)this + 9);
  if ( a2 )
    CRenderTargetManager::ForceDDAFullRender(v2);
  else
    CRenderTargetManager::ForceFullRender(v2);
}
