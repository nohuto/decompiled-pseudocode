/*
 * XREFs of ?SetDxImage@CWindowNode@@AEAAJPEAVCFlipChain@@@Z @ 0x18011A31C
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180099410 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A9818 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180165398 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetDxImage(CWindowNode *this, struct CFlipChain *a2)
{
  __int64 *v2; // rsi
  CFlipChain *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rax
  signed int v8; // eax

  v2 = (__int64 *)((char *)this + 920);
  v4 = (CFlipChain *)*((_QWORD *)this + 115);
  v5 = 0;
  if ( a2 != v4 )
  {
    if ( v4 && CFlipChain::DisplayBufferReady(v4) )
    {
      CResource::UnRegisterNotifier<CImageSource *>(this, (_QWORD *)this + 116);
      v7 = *v2;
      *v2 = 0LL;
      *((_QWORD *)this + 116) = v7;
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x68Du);
    }
    else
    {
      *v2 = (__int64)a2;
      *((_BYTE *)this + 1008) = 0;
      CVisual::PropagateFlags((__int64)this, 5u, 0);
      CWindowNode::CleanUpPendingUpdates(this, 0);
    }
  }
  return v5;
}
