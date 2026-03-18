/*
 * XREFs of ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180051D88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18004EBC4 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800B1C34 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetWindowBackgroundTreatment(
        struct CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  struct CSpriteVisualContent *Resource; // rdi
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct CComposition *v9; // rbp
  CWindowBackgroundTreatment *v10; // rax
  struct CWindowBackgroundTreatment *v11; // rdi
  struct CWindowBackgroundTreatment *v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CSpriteVisualContent *)CResourceTable::GetResource(a2, v5, 14LL)) == 0LL )
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x8F1u);
  }
  else
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)this);
    v13 = WindowBackgroundTreatmentInternal;
    if ( !WindowBackgroundTreatmentInternal
      || *((struct CSpriteVisualContent **)WindowBackgroundTreatmentInternal + 7) != Resource )
    {
      ReleaseInterface<IBitmapLock>((__int64 *)&v13);
      v9 = this[2];
      v10 = (CWindowBackgroundTreatment *)operator new(0x130uLL);
      if ( v10 )
        v11 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v10, v9, Resource);
      else
        v11 = 0LL;
      if ( v11 )
      {
        (*(void (__fastcall **)(struct CWindowBackgroundTreatment *))(*(_QWORD *)v11 + 8LL))(v11);
        CVisual::SetWindowBackgroundTreatmentInternal((CVisual *)this, v11);
        CVisual::PropagateFlags((__int64)this, 5u, 0);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x32u);
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8FAu);
      }
    }
  }
  return v3;
}
