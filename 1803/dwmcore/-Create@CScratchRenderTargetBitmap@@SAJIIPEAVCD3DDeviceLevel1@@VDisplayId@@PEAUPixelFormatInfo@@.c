/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B9954
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180078678 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800B9DF0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800B9E78 (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        unsigned int a1,
        unsigned int a2,
        struct CD3DDeviceLevel1 *a3,
        unsigned int a4,
        struct PixelFormatInfo *a5,
        bool a6,
        CHwTextureRenderTarget **a7)
{
  LPVOID v11; // rax
  __int64 v12; // rax
  CHwTextureRenderTarget *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  const char *v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  *a7 = 0LL;
  v11 = HeapAlloc(WPF::g_processHeap, 0, 0x130uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v11, a4);
  v13 = (CHwTextureRenderTarget *)v12;
  if ( v12 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)(v12 + 160));
    v18 = 24;
    v17 = "DWM Scratch Rendertarget";
    v14 = CHwTextureRenderTarget::Init(v13, a3, (const struct CResourceTag *)&v17, a1, a2, a5, a6);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x23u);
      CScratchRenderTargetBitmap::Release(v13);
    }
    else
    {
      *((_BYTE *)v13 + 296) = 1;
      *a7 = v13;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu);
  }
  return v15;
}
