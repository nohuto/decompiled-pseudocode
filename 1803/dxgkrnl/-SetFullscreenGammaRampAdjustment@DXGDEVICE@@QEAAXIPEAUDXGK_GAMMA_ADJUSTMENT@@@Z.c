/*
 * XREFs of ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C018C148
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1C0166D70 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGDEVICE::SetFullscreenGammaRampAdjustment(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGK_GAMMA_ADJUSTMENT *a3)
{
  __int64 v3; // rdi
  void *v6; // rcx

  v3 = a2;
  v6 = (void *)*((_QWORD *)this + a2 + 187);
  if ( v6 )
    operator delete(v6);
  *((_QWORD *)this + v3 + 187) = a3;
}
