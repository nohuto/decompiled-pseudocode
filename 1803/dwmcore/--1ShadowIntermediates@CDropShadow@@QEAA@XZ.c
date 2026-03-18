/*
 * XREFs of ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x180188E14
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x180188D40 (--1CDropShadow@@UEAA@XZ.c)
 *     ?_Freenode@?$_List_buy@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@@Z @ 0x18018AE20 (-_Freenode@-$_List_buy@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::~ShadowIntermediates(CDropShadow::ShadowIntermediates *this)
{
  CResource *v2; // rcx

  v2 = (CResource *)*((_QWORD *)this + 3);
  if ( v2 )
    CResource::UnRegisterNotifierInternal(v2, *((struct CResource **)this + 4));
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this);
}
