/*
 * XREFs of ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18009CA54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180099410 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A9818 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180165398 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxImage(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXIMAGE *a3)
{
  CFlipChain *v4; // rdi
  __int64 v5; // rdx
  CFlipChain **v7; // r14
  signed int v8; // ebx
  CFlipChain *v9; // rcx
  __int64 Resource; // rax
  CFlipChain *v12; // rax
  signed int v13; // eax

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  Resource = CResourceTable::GetResource(a2, v5, 50LL);
  if ( Resource )
    v4 = (CFlipChain *)(Resource - 16);
  if ( v4 )
  {
LABEL_2:
    v7 = (CFlipChain **)((char *)this + 920);
    v8 = 0;
    v9 = (CFlipChain *)*((_QWORD *)this + 115);
    if ( v4 != v9 )
    {
      if ( v9 && CFlipChain::DisplayBufferReady(v9) )
      {
        CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 928);
        v12 = *v7;
        *v7 = 0LL;
        *((_QWORD *)this + 116) = v12;
      }
      else
      {
        CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 920);
      }
      v13 = CResource::RegisterNotifier(
              this,
              (struct CResource *)(((unsigned __int64)v4 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)));
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x68Du);
      }
      else
      {
        *v7 = v4;
        *((_BYTE *)this + 1008) = 0;
        CVisual::PropagateFlags((__int64)this, 5u, 0);
        CWindowNode::CleanUpPendingUpdates(this, 0);
      }
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x660u);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x65Cu);
  }
  return (unsigned int)v8;
}
