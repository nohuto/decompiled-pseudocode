/*
 * XREFs of ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180050D58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18004CBD8 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1800B8D34 (--4-$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatm.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800B9014 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetWindowBackgroundTreatment(
        struct CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  struct CSpriteVisualContent *Resource; // rdi
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct CComposition *v9; // rbp
  CWindowBackgroundTreatment *v10; // rax
  CWindowBackgroundTreatment *v11; // rax
  struct CWindowBackgroundTreatment *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CSpriteVisualContent *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) == 0LL )
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x984u);
  }
  else
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)this);
    v13 = WindowBackgroundTreatmentInternal;
    if ( !WindowBackgroundTreatmentInternal
      || *((struct CSpriteVisualContent **)WindowBackgroundTreatmentInternal + 8) != Resource )
    {
      ReleaseInterface<IBitmapLock>((__int64 *)&v13);
      v9 = this[2];
      v13 = 0LL;
      v10 = (CWindowBackgroundTreatment *)operator new(0x198uLL);
      if ( v10 )
        v11 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v10, v9, Resource);
      else
        v11 = 0LL;
      Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=(&v13, v11);
      if ( v13 )
      {
        CVisual::SetWindowBackgroundTreatmentInternal((CVisual *)this, v13);
        CVisual::PropagateFlags((__int64)this, 5u, 0);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x55u);
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x98Du);
      }
    }
  }
  return v3;
}
