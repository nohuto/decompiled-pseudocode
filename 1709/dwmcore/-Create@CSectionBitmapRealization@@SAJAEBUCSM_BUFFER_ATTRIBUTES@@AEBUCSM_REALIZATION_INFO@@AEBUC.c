/*
 * XREFs of ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D0D58
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CSectionBitmapRealization@@KAPEAX_K@Z @ 0x180087B98 (--2CSectionBitmapRealization@@KAPEAX_K@Z.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x180087CF0 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180087E60 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_REALIZATION_INFO *a2,
        const struct CSM_SYSMEM_SECTION_INFO *a3,
        struct CBitmapRealization **a4)
{
  CSectionBitmapRealization *v8; // rax
  CSectionBitmapRealization *v9; // rbx
  unsigned int v10; // edi
  signed int v11; // eax

  *a4 = 0LL;
  v8 = (CSectionBitmapRealization *)CSectionBitmapRealization::operator new();
  if ( v8 )
    v9 = CSectionBitmapRealization::CSectionBitmapRealization(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = CSectionBitmapRealization::EnsureBitmapCacheSource(v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x25u);
      (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      *a4 = v9;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x22u);
  }
  return v10;
}
