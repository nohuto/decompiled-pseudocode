/*
 * XREFs of ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180013148
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x180010344 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x180013108 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetWindowBackgroundTreatment(
        struct CComposition **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CSpriteVisualContent *Resource; // rdi
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  struct CComposition *v9; // rbx
  CWindowBackgroundTreatment *v10; // rax
  struct CWindowBackgroundTreatment *v11; // rdi
  struct CWindowBackgroundTreatment *v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CSpriteVisualContent *)CResourceTable::GetResource(a2, v5, 81LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x8C1u);
  }
  else
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)this);
    v13 = WindowBackgroundTreatmentInternal;
    if ( !WindowBackgroundTreatmentInternal
      || *((struct CSpriteVisualContent **)WindowBackgroundTreatmentInternal + 7) != Resource )
    {
      ReleaseInterface<IBitmapLock>(&v13);
      v9 = this[2];
      v10 = (CWindowBackgroundTreatment *)operator new(0x178uLL);
      if ( v10 )
        v11 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v10, v9, Resource);
      else
        v11 = 0LL;
      if ( v11 )
      {
        (*(void (__fastcall **)(struct CWindowBackgroundTreatment *))(*(_QWORD *)v11 + 8LL))(v11);
        v4 = 0;
        CVisual::SetWindowBackgroundTreatmentInternal((CVisual *)this, v11);
        CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0, 0);
      }
      else
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8CAu);
      }
    }
  }
  return v4;
}
