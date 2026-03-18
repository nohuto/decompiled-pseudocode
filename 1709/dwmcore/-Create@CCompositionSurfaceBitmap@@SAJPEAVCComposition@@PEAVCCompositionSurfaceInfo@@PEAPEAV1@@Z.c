/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18015DCD0
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180145520 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180028534 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCompositionSurfaceBitmap@@KAPEAX_K@Z @ 0x1800BE768 (--2CCompositionSurfaceBitmap@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  CMILCOMBase *v6; // rax
  CMILCOMBase *v7; // rbx
  unsigned int v8; // edi
  signed int updated; // eax

  *a3 = 0LL;
  v6 = (CMILCOMBase *)CCompositionSurfaceBitmap::operator new();
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 2) = a1;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *((_QWORD *)v6 + 19) = 0LL;
    *(_QWORD *)v6 = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
    *((_QWORD *)v6 + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
    *((_QWORD *)v6 + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
    *((_QWORD *)v6 + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
    *((_QWORD *)v6 + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    CMILCOMBase::InternalAddRef(v7);
    updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(v7, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x24u);
      CMILCOMBase::InternalRelease(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x21u);
  }
  return v8;
}
