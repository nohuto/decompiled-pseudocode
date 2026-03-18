/*
 * XREFs of ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180182E20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x18007D48C (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::GetBrushRealizationInternal(
        CSolidColorLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  signed int RealizedColor; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _D3DCOLORVALUE v9; // [rsp+30h] [rbp-18h] BYREF

  RealizedColor = CSolidColorLegacyMilBrush::GetRealizedColor(this, &v9);
  v6 = RealizedColor;
  if ( RealizedColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RealizedColor, 0x3Fu);
  }
  else
  {
    v7 = *((_QWORD *)this + 18);
    *((struct _D3DCOLORVALUE *)this + 11) = *(struct _D3DCOLORVALUE *)&v9.r;
    (*(void (**)(void))(v7 + 48))();
    *a3 = (struct CMILBrush *)(((unsigned __int64)this + 144) & -(__int64)((CSolidColorLegacyMilBrush *)((char *)this + 120) != 0LL));
  }
  return v6;
}
