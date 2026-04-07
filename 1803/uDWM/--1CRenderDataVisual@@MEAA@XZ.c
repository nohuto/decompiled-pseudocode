/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180017CE4
 * Callers:
 *     ??1CImage@@EEAA@XZ @ 0x18000D7B4 (--1CImage@@EEAA@XZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x1800109C0 (--1CAccent@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180011ED4 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180013840 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180014350 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180017840 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002357C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180031C80 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x18003BA08 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x18003D610 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180070404 (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x180078468 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x18007FF80 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180083030 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x1800830C0 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18008D7F0 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x18008E278 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008FE90 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x180090B94 (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800916C0 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x180091CB8 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800923A8 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800927F0 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800930D0 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x180098BE4 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x18009A08C (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800A5540 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800A6518 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180014180 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  CResource *(__fastcall *v3)(CResource *, char); // rax

  *this = (volatile signed __int32 *)&CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[30];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v3 = **(CResource *(__fastcall ***)(CResource *, char))v2;
      if ( v3 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1);
      else
        v3((CResource *)v2, 1);
    }
    this[30] = 0LL;
  }
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
