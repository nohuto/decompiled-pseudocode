/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180028800
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180028534 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800B9F78 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // rdi
  struct CCompositionSurfaceInfo *v4; // rbx
  int v7; // eax
  int v8; // edi
  int updated; // eax
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0LL;
  v12 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start);
  if ( v3 )
  {
    v7 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
           (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 16LL),
           v3,
           &v12);
    v11 = v7;
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x301u);
      v4 = v12;
      goto LABEL_8;
    }
    v4 = v12;
  }
  updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(this, v4);
  v11 = updated;
  v8 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x307u);
  }
  else
  {
    *((_BYTE *)this + 146) = *((_DWORD *)a3 + 4) != 0;
    *((_BYTE *)this + 147) = *((_DWORD *)a3 + 5) != 0;
  }
LABEL_8:
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  TranslateDXGIorD3DErrorInContext(v8, 11, &v11);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop);
  return v11;
}
