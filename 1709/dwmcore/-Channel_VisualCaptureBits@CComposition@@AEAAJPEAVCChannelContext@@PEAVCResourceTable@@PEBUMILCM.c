/*
 * XREFs of ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x180127D88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180051E5C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180137E08 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x18013B89C (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Channel_VisualCaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  CVisual *Resource; // rax
  signed int VisualTree; // eax
  unsigned __int64 v10; // rcx
  struct CVisualTree *v11; // rdi
  VisualCaptureBitsResponse *v12; // rax
  struct WICRect v14; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v14 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v5, 0x86u);
  VisualTree = CVisual::GetVisualTree(Resource, &v15);
  v11 = v15;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, VisualTree, 0x8C3u);
  }
  else
  {
    v12 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v10);
    if ( v12 )
      v12 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v12,
              this[10],
              a2,
              0LL,
              v11,
              &v14,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              *((void **)a4 + 3),
              *((void **)a4 + 4));
    if ( v12 )
    {
      CResponseItem::ReleaseResponseRef(v12);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x8D1u);
  }
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_9:
  if ( v11 )
    CMILRefCountBase::Release(v11);
  return 0LL;
}
