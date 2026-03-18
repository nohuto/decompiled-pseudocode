/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180054C94
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180092630 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _DWORD *a2)
{
  struct CInteraction *InteractionInternal; // rax
  _QWORD *v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx

  *a2 = 0;
  a2[1] = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    v4 = *((_QWORD *)InteractionInternal + 16);
    v5 = 0LL;
    if ( v4 )
      v5 = *(_QWORD *)(v4 + 128);
    *v3 = v5;
  }
  return (struct _LUID)v3;
}
