/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000B6D4
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x18002A140 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _QWORD *a2)
{
  struct CInteraction *InteractionInternal; // rax
  _QWORD *v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx

  *a2 = 0LL;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    v4 = *((_QWORD *)InteractionInternal + 12);
    v5 = 0LL;
    if ( v4 )
      v5 = *(_QWORD *)(v4 + 96);
    *v3 = v5;
  }
  return (struct _LUID)v3;
}
