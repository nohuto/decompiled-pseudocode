/*
 * XREFs of ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180128660
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x1801309A4 (-FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180137E08 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x18013B89C (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

__int64 __fastcall CComposition::Partition_DesktopCaptureBits(
        CRenderTargetManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  signed int DesktopRenderTarget; // eax
  unsigned __int64 v8; // rcx
  struct IRenderTargetResource *v9; // rdi
  CResponseItem *v10; // rax
  VisualCaptureBitsResponse *v11; // rsi
  struct CVisualTree *v12; // rax
  struct WICRect v14; // [rsp+50h] [rbp-28h] BYREF
  struct IRenderTargetResource *v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = 0LL;
  DesktopRenderTarget = CRenderTargetManager::FindDesktopRenderTarget(this[9], *(HMONITOR *)((char *)a4 + 4), &v15);
  v9 = v15;
  if ( DesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DesktopRenderTarget, 0x574u);
  }
  else
  {
    v14 = *(struct WICRect *)((char *)a4 + 12);
    v10 = (CResponseItem *)VisualCaptureBitsResponse::operator new(v8);
    v11 = v10;
    if ( v10 )
    {
      v12 = (struct CVisualTree *)(*(__int64 (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 296LL))(v9);
      v10 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v11,
              this[10],
              a2,
              v9,
              v12,
              &v14,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
              *((void **)a4 + 4),
              *((void **)a4 + 5));
    }
    if ( v10 )
    {
      CResponseItem::ReleaseResponseRef(v10);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x587u);
  }
  SetEvent(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 4));
  CloseHandle(*((HANDLE *)a4 + 5));
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
