/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0041424
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006EC4C (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(struct OBJECT **this)
{
  struct OBJECT *v1; // rax
  struct OBJECT *v3; // rcx

  v1 = *this;
  v3 = (struct OBJECT *)*((_QWORD *)*this + 16);
  if ( v3 != v1 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  *((_QWORD *)*this + 15) = (char *)*this + 136;
  *((_QWORD *)*this + 16) = *this;
}
