/*
 * XREFs of ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18017959C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180145520 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180179B54 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetCompositionSurface(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *a3)
{
  void *v3; // r8
  signed int v5; // eax
  unsigned int v6; // edi
  signed int v7; // eax
  CMILCOMBase *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  if ( v3
    && (v5 = CCompositionSurfaceManager::CreateCompositionSurfaceBitmap(
               (CCompositionSurfaceManager *)(*((_QWORD *)this[2] + 10) + 16LL),
               this[2],
               v3,
               &v9),
        v6 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x81Du);
  }
  else
  {
    v7 = CWindowNode::SetFlipExBitmap((CWindowNode *)this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x820u);
  }
  return v6;
}
