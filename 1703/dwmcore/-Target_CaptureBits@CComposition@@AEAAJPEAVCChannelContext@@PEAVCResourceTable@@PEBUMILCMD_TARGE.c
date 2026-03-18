/*
 * XREFs of ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18005C198
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800AFBF0 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800B01C4 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800B0660 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComposition::Target_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TARGET_CAPTUREBITS *a4)
{
  float v5; // xmm6_4
  unsigned int v7; // edx
  struct IRenderTargetResource *v9; // r14
  volatile signed __int32 *v10; // rdi
  CResponseItem *v12; // rbp
  __int64 Resource; // r9
  unsigned int v14; // edx
  CaptureBitsResponse *v15; // rcx
  struct CaptureBitsResponse *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  CVisual *v20; // rax
  bool v21; // r8
  float v22; // xmm2_4
  int VisualTree; // eax
  struct WICRect v24; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct CVisualTree *v26; // [rsp+B8h] [rbp+20h] BYREF

  v5 = FLOAT_1_0;
  v7 = *((_DWORD *)a4 + 1);
  v9 = 0LL;
  v10 = 0LL;
  v26 = 0LL;
  v12 = 0LL;
  Resource = CResourceTable::GetResource((__int64)a3, v7, 0x27u);
  if ( !Resource )
  {
    v18 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x974u);
    return v18;
  }
  v14 = *((_DWORD *)a4 + 11);
  v24 = (struct WICRect)*((_OWORD *)a4 + 1);
  if ( v14 )
  {
    v20 = (CVisual *)CResourceTable::GetResource((__int64)a3, v14, 0x1Fu);
    if ( !v20 || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)a4 + 1)) & _xmm), v22 < 0.0000011920929) )
    {
      v18 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x988u);
LABEL_10:
      if ( v12 )
        CResponseItem::ReleaseResponseRef(v12);
      goto LABEL_12;
    }
    VisualTree = CVisual::GetVisualTree(v20, &v26, v21);
    v18 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x98Cu);
      v10 = (volatile signed __int32 *)v26;
      goto LABEL_12;
    }
    v10 = (volatile signed __int32 *)v26;
    v5 = 1.0 / *((double *)a4 + 1);
  }
  else
  {
    v10 = *(volatile signed __int32 **)(Resource + 80);
    v26 = (struct CVisualTree *)v10;
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v10 = (volatile signed __int32 *)v26;
    }
    v9 = (struct IRenderTargetResource *)(Resource + 112);
  }
  v15 = (CaptureBitsResponse *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
  if ( !v15 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v16 = CaptureBitsResponse::CaptureBitsResponse(
          v15,
          this[5],
          a2,
          v9,
          (struct CVisualTree *)v10,
          v5,
          &v24,
          (enum DXGI_FORMAT)*((_DWORD *)a4 + 8),
          *(_QWORD *)((char *)a4 + 36));
  v12 = v16;
  if ( v16 )
  {
    v17 = CLegacySurfaceManager::AddCaptureBitsResponse((struct CSurfaceManager *)((char *)this[5] + 96), v16);
    v18 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x9A4u);
    goto LABEL_10;
  }
  v18 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x99Eu);
LABEL_12:
  if ( v10 )
    CMILRefCountBase::Release((CMILRefCountBase *)v10);
  return v18;
}
