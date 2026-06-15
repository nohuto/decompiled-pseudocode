/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18004DA80
 * Callers:
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18004E0B0 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18004DD9C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18004DE0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18004E3BC (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18004E450 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E51C (--0CVolumeUnit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x1800A511C (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x1800A5248 (WPP_SF_qgg.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
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
  ATL::CAtlException *v15; // rbx
  __int64 v16; // [rsp+0h] [rbp-108h] BYREF
  __int64 v17; // [rsp+20h] [rbp-E8h]
  float v18; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-C4h]
  int v20; // [rsp+48h] [rbp-C0h]
  float v21; // [rsp+4Ch] [rbp-BCh]
  float v22; // [rsp+50h] [rbp-B8h]
  __int64 v23; // [rsp+58h] [rbp-B0h]
  ATL::CAtlException *v24; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v25[128]; // [rsp+68h] [rbp-A0h] BYREF
  float v27; // [rsp+118h] [rbp+10h] BYREF
  float v28; // [rsp+120h] [rbp+18h] BYREF
  float v29; // [rsp+128h] [rbp+20h] BYREF

  v23 = -2LL;
  v1 = this;
  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this);
  }
  if ( !*((_QWORD *)v1 + 32) )
    goto LABEL_27;
  v3 = *((_DWORD *)v1 + 71);
  *((_DWORD *)v1 + 31) = v3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v17) = v3;
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, v1);
  }
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 88, 0LL);
  if ( !*((_QWORD *)v1 + 32) )
  {
LABEL_27:
    v2 = -2147418113;
LABEL_28:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 1243, v2);
    return (unsigned int)v2;
  }
  v6 = FLOAT_1000_0;
  v7 = FLOAT_N1000_0;
  for ( i = 0; ; ++i )
  {
    v19 = i;
    if ( i >= *((_DWORD *)v1 + 31) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v25);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 32) + 32LL))(
           *((_QWORD *)v1 + 32),
           0LL,
           &v29,
           &v28,
           &v27);
    if ( v2 < 0 )
      goto LABEL_28;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v17) = i;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v1, v17, v29, v28, v27);
    }
    *(float *)&v17 = v27;
    v11 = v28;
    v12 = v29;
    CVolumeUnit::SetDBRange(v25);
    v6 = fminf(v12, v6);
    v21 = v6;
    v7 = fmaxf(v11, v7);
    v22 = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 32) + 40LL))(
           *((_QWORD *)v1 + 32),
           i,
           &v18);
    if ( v2 < 0 )
      goto LABEL_28;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
        v1,
        i,
        v18);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v25, v18);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 88, i, v25);
    }
    catch ( ATL::CAtlException *v24 )
    {
      v4 = &v16;
      v15 = v24;
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      v20 = *(_DWORD *)v15;
      v2 = v20;
      if ( v20 < 0 )
        goto LABEL_28;
      v1 = this;
      v6 = v21;
      v7 = v22;
      i = v19;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, v1, v6, v7);
  }
  for ( j = 0; j < *((_DWORD *)v1 + 31); ++j )
  {
    if ( (unsigned __int64)j >= *((_QWORD *)v1 + 12) )
      ATL::AtlThrowImpl(-2147024809);
    CVolumeUnit::SetTaperOverallRange((CVolumeUnit *)(*((_QWORD *)v1 + 11) + 56LL * j), v6, v7);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_28;
  return (unsigned int)v2;
}
