/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180068A70
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180067E30 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18006953C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180069810 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18006A60C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18006A9F4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18006AA14 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  int v3; // esi
  unsigned int i; // edi
  int *v5; // rbx
  ATL::CAtlException *v6; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v7[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = this;
  if ( !*((_DWORD *)this + 29) )
    return 0LL;
  v3 = 0;
  if ( (int)CVolumeSoftware::LoadVolumeState(this) < 0 && (int)CVolumeSoftware::LoadDefaultVolumeForEndpoint(v1) < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x35u,
        (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids,
        *((const wchar_t **)v1 + 8));
    }
    for ( i = 0; i < *((_DWORD *)v1 + 29); ++i )
    {
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v7);
      CVolumeUnit::SetDBRange(v7);
      CVolumeUnit::SetDB((CVolumeUnit *)v7, 0.0);
      v3 = 0;
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 80, i, v7);
      }
      catch ( ATL::CAtlException *v6 )
      {
        v5 = (int *)v6;
        if ( *(_DWORD *)v6 == -1073741571 )
          _o__resetstkoflw();
        v3 = *v5;
        if ( *v5 < 0 )
          goto LABEL_16;
        v1 = this;
      }
    }
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v3 < 0 )
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 1802, v3);
  return (unsigned int)v3;
}
