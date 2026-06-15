/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800686D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180067E30 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18006A60C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18006A97C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18006A9F4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18006AA14 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18006B0F8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     WPP_SF_qdg @ 0x18006BA64 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x18006BB18 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x18006BC44 (WPP_SF_qgg.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rbx
  int v2; // edi
  int v3; // eax
  __int64 *v4; // rdx
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  float v11; // xmm7_4
  float v12; // xmm6_4
  unsigned int j; // esi
  CVolumeUnit *v14; // rax
  ATL::CAtlException *v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-108h] BYREF
  __int64 v18; // [rsp+20h] [rbp-E8h]
  float v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-C4h]
  int v21; // [rsp+48h] [rbp-C0h]
  float v22; // [rsp+4Ch] [rbp-BCh]
  float v23; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+58h] [rbp-B0h]
  ATL::CAtlException *v25; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v26[128]; // [rsp+68h] [rbp-A0h] BYREF
  float v28; // [rsp+118h] [rbp+10h] BYREF
  float v29; // [rsp+120h] [rbp+18h] BYREF
  float v30; // [rsp+128h] [rbp+20h] BYREF

  v24 = -2LL;
  v1 = this;
  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
  }
  if ( !*((_QWORD *)v1 + 31) )
    goto LABEL_6;
  v3 = *((_DWORD *)v1 + 69);
  *((_DWORD *)v1 + 29) = v3;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v18) = v3;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids,
      v1,
      v18);
  }
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 80, 0LL);
  if ( !*((_QWORD *)v1 + 31) )
  {
LABEL_6:
    v2 = -2147418113;
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 1086, v2);
    return (unsigned int)v2;
  }
  v6 = FLOAT_1000_0;
  v7 = FLOAT_N1000_0;
  for ( i = 0; ; ++i )
  {
    v20 = i;
    if ( i >= *((_DWORD *)v1 + 29) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v26);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 31) + 32LL))(
           *((_QWORD *)v1 + 31),
           0LL,
           &v30,
           &v29,
           &v28);
    if ( v2 < 0 )
      goto LABEL_36;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v18) = i;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v1, v18, v30, v29, v28);
    }
    *(float *)&v18 = v28;
    v11 = v29;
    v12 = v30;
    CVolumeUnit::SetDBRange(v26);
    v6 = fminf(v12, v6);
    v22 = v6;
    v7 = fmaxf(v11, v7);
    v23 = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 31) + 40LL))(
           *((_QWORD *)v1 + 31),
           i,
           &v19);
    if ( v2 < 0 )
      goto LABEL_36;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_a99c65f464be33b31308c514a5524983_Traceguids,
        v1,
        i,
        v19);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v26, v19);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 80, i, v26);
    }
    catch ( ATL::CAtlException *v25 )
    {
      v4 = &v17;
      v16 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v21 = *(_DWORD *)v16;
      v2 = v21;
      if ( v21 < 0 )
        goto LABEL_36;
      v1 = this;
      v6 = v22;
      v7 = v23;
      i = v20;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, v1, v6, v7);
  }
  for ( j = 0; j < *((_DWORD *)v1 + 29); ++j )
  {
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v1 + 10, j);
    CVolumeUnit::SetTaperOverallRange(v14, v6, v7);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_36;
  return (unsigned int)v2;
}
