/*
 * XREFs of ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C005A3A8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0080794 (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall XEPALOBJ::apalResetColorTable(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v3 != v1 )
    HmgDecrementShareReferenceCount(v3);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = *(_QWORD *)this + 136LL;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)this;
}
