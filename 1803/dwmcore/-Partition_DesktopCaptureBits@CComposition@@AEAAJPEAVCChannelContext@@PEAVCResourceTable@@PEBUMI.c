/*
 * XREFs of ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18014A640
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x180152314 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x18015DDB0 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18016DCB8 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CComposition::Partition_DesktopCaptureBits(
        CRenderTargetManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  int DesktopRenderTarget; // eax
  unsigned __int64 v8; // rcx
  struct IRenderTargetResource *v9; // rdi
  CResponseItem *v10; // rax
  VisualCaptureBitsResponse *v11; // rsi
  struct CVisualTree *v12; // rax
  unsigned int v13; // ecx
  struct WICRect v15; // [rsp+50h] [rbp-28h] BYREF
  struct IRenderTargetResource *v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = 0LL;
  DesktopRenderTarget = CRenderTargetManager::FindDesktopRenderTarget(this[9], *(HMONITOR *)((char *)a4 + 4), &v16);
  v9 = v16;
  if ( DesktopRenderTarget < 0 )
  {
    v13 = 1350;
  }
  else
  {
    v15 = *(struct WICRect *)((char *)a4 + 12);
    v10 = (CResponseItem *)VisualCaptureBitsResponse::operator new(v8);
    v11 = v10;
    if ( v10 )
    {
      v12 = (struct CVisualTree *)(*(__int64 (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 288LL))(v9);
      v10 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v11,
              this[10],
              a2,
              v9,
              v12,
              &v15,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
              *((void **)a4 + 4),
              *((void **)a4 + 5));
    }
    if ( v10 )
    {
      CResponseItem::ReleaseResponseRef(v10);
      goto LABEL_9;
    }
    DesktopRenderTarget = -2147024882;
    v13 = 1369;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DesktopRenderTarget, v13);
  SetEvent(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 5));
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
