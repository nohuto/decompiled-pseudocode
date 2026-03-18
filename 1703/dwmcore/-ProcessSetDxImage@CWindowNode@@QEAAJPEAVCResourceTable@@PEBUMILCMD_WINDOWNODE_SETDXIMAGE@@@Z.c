/*
 * XREFs of ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x180053DF8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18003454C (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180050588 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800B0F54 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxImage(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXIMAGE *a3)
{
  CFlipChain *v4; // rdi
  __int64 v5; // rdx
  CFlipChain **v7; // r14
  int v8; // ebx
  CFlipChain *v9; // rcx
  __int64 Resource; // rax
  CFlipChain *v12; // rax
  int v13; // eax

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  Resource = CResourceTable::GetResource(a2, v5, 96LL);
  if ( Resource )
    v4 = (CFlipChain *)(Resource - 16);
  if ( v4 )
  {
LABEL_2:
    v7 = (CFlipChain **)((char *)this + 896);
    v8 = 0;
    v9 = (CFlipChain *)*((_QWORD *)this + 112);
    if ( v4 != v9 )
    {
      if ( v9 && CFlipChain::DisplayBufferReady(v9) )
      {
        CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 113);
        v12 = *v7;
        *v7 = 0LL;
        *((_QWORD *)this + 113) = v12;
      }
      else
      {
        CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 112);
      }
      v13 = CResource::RegisterNotifier(
              this,
              (struct CResource *)(((unsigned __int64)v4 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)));
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6A1u);
      }
      else
      {
        *v7 = v4;
        *((_BYTE *)this + 984) = 0;
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
        CWindowNode::CleanUpPendingUpdates(this, 0);
      }
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x674u);
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x670u);
  }
  return (unsigned int)v8;
}
