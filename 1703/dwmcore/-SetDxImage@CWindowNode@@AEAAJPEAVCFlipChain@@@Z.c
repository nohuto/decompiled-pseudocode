/*
 * XREFs of ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18012A668
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180053F34 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18003454C (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180050588 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800B0F54 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetDxImage(CWindowNode *this, struct CFlipChain *a2)
{
  struct CResource **v2; // rsi
  CFlipChain *v4; // rcx
  unsigned int v5; // ebx
  struct CResource *v7; // rax
  int v8; // eax

  v2 = (struct CResource **)((char *)this + 896);
  v4 = (CFlipChain *)*((_QWORD *)this + 112);
  v5 = 0;
  if ( a2 != v4 )
  {
    if ( v4 && CFlipChain::DisplayBufferReady(v4) )
    {
      CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 113);
      v7 = *v2;
      *v2 = 0LL;
      *((_QWORD *)this + 113) = v7;
    }
    else
    {
      CResource::UnRegisterNotifier<CImageSource *>(this, v2);
    }
    v8 = CResource::RegisterNotifier(
           this,
           (struct CResource *)(((unsigned __int64)a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6A1u);
    }
    else
    {
      *v2 = a2;
      *((_BYTE *)this + 984) = 0;
      CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
      CWindowNode::CleanUpPendingUpdates(this, 0);
    }
  }
  return v5;
}
