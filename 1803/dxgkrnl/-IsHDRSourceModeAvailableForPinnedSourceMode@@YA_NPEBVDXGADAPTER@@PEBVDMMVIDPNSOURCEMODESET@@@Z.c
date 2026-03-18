/*
 * XREFs of ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C02267B0
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00AE0C8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024340 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 */

char __fastcall IsHDRSourceModeAvailableForPinnedSourceMode(
        const struct DXGADAPTER *a1,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  const struct DMMVIDPNSOURCEMODE *NextMode; // r8
  int v8; // eax

  v2 = *((_QWORD *)a2 + 18);
  if ( !v2 )
    return 0;
  v5 = *(_QWORD *)(v2 + 76);
  v6 = (_QWORD *)((char *)a2 + 48);
  NextMode = 0LL;
  if ( (_QWORD *)*v6 != v6 )
    NextMode = (const struct DMMVIDPNSOURCEMODE *)(*v6 - 8LL);
  if ( !NextMode )
    return 0;
  while ( 1 )
  {
    if ( *((_DWORD *)NextMode + 18) == 1 && v5 == *(_QWORD *)((char *)NextMode + 76) )
    {
      v8 = *((_DWORD *)NextMode + 24);
      if ( v8 == 113 || *((_DWORD *)a1 + 69) == 32902 && v8 == 35 )
        break;
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
    if ( !NextMode )
      return 0;
  }
  return 1;
}
