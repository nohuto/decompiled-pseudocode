/*
 * XREFs of ??1CRenderDataVisual@@MEAA@XZ @ 0x180014FF4
 * Callers:
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18000C810 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x1800108D0 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x180012960 (--1CAccent@@MEAA@XZ.c)
 *     ??1CImage@@EEAA@XZ @ 0x1800137C4 (--1CImage@@EEAA@XZ.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180013FC0 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180014F60 (--_GCRenderDataVisual@@MEAAPEAXI@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002328C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18002F154 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x1800398AC (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x18006975C (--1CLivePreview@@MEAA@XZ.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x180071B98 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800757F0 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x180075860 (--1CAccentBlurBehind@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180079E20 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x180079EB0 (--_ECDesktopWindowReplacement@@UEAAPEAXI@Z.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18008470C (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x180085180 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x180086DC8 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x180087ABC (--1CTetherVisual@@MEAA@XZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180088600 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x180088BFC (--1CFlickVisual@@MEAA@XZ.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800892E8 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x180089730 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x18008A000 (--_GCTouchVisual@@MEAAPEAXI@Z.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x180090434 (--1CScreenRotation@@MEAA@XZ.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180091984 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x18009D010 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x18009DFC0 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderDataVisual::~CRenderDataVisual(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  void *(__fastcall *v3)(CResource *__hidden, unsigned int); // rax

  *this = (volatile signed __int32 *)&CRenderDataVisual::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[30];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      v3 = **(void *(__fastcall ***)(CResource *__hidden, unsigned int))v2;
      if ( v3 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v2, 1u);
      else
        v3((CResource *)v2, 1u);
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
