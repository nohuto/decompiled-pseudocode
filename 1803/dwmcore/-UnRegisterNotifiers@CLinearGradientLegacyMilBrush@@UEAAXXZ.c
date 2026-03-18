/*
 * XREFs of ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1801AC260
 * Callers:
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1801AB27C (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENT.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801B2FF8 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  this[14] = 0LL;
  v2 = this[17];
  if ( v2 )
  {
    operator delete(v2);
    this[17] = 0LL;
    *((_DWORD *)this + 33) = 0;
  }
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
}
