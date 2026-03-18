/*
 * XREFs of ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18014A004
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x18015DDB0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18016DCB8 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CComposition::Channel_VisualCaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  CVisual *Resource; // rax
  int VisualTree; // eax
  unsigned __int64 v10; // rcx
  struct CVisualTree *v11; // rdi
  int v12; // r9d
  VisualCaptureBitsResponse *v13; // rax
  unsigned int v14; // eax
  struct WICRect v16; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v16 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v5, 0x97u);
  VisualTree = CVisual::GetVisualTree(Resource, &v17);
  v11 = v17;
  v12 = VisualTree;
  if ( VisualTree < 0 )
  {
    v14 = 2229;
  }
  else
  {
    v13 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v10);
    if ( v13 )
      v13 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v13,
              this[10],
              a2,
              0LL,
              v11,
              &v16,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              *((void **)a4 + 3),
              *((void **)a4 + 4));
    if ( v13 )
    {
      CResponseItem::ReleaseResponseRef(v13);
      goto LABEL_9;
    }
    v14 = 2243;
    v12 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14);
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_9:
  if ( v11 )
    CMILRefCountBase::Release(v11);
  return 0LL;
}
