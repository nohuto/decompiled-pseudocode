/*
 * XREFs of ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C019E190
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1C017F700 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::SetFullscreenGammaRampAdjustment(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGK_GAMMA_ADJUSTMENT *a3)
{
  __int64 v3; // rdi
  void *v6; // rcx

  v3 = a2;
  v6 = (void *)*((_QWORD *)this + a2 + 185);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  *((_QWORD *)this + v3 + 185) = a3;
}
