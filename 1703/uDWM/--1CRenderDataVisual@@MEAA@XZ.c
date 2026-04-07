/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x18001F090
 * Callers:
 *     ??1CImage@@EEAA@XZ @ 0x180019664 (--1CImage@@EEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x18001ABF0 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x18001B8B0 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??1CAccent@@MEAA@XZ @ 0x18001E450 (--1CAccent@@MEAA@XZ.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x18001EC10 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002ED4C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180037D44 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x1800395B0 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18003CB00 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180040EC8 (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180074D14 (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x18007C568 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x18007E4B0 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180082350 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18008B56C (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x18008BC88 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008C5EC (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x18008CD1C (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008D720 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x18008DC74 (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008E368 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x18008E7B0 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x18008F080 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x180093F44 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180095478 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009EF70 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x18009FF20 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
