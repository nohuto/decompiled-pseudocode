/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440
 * Callers:
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003AF20 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180003F8C (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18003AC90 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18003ACFC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18003B800 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18003B8BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     pow @ 0x180049B90 (pow.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800878A0 (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x180087954 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x180087A80 (WPP_SF_qgg.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rdi
  int v2; // esi
  int v3; // eax
  __int64 *v4; // rdx
  __int64 v5; // r8
  float v6; // xmm8_4
  float v7; // xmm9_4
  unsigned int v8; // ebx
  double v9; // xmm11_8
  double v10; // xmm12_8
  __int64 v11; // rdx
  __int64 v12; // r8
  float v13; // xmm14_4
  float v14; // xmm13_4
  double v15; // xmm7_8
  double v16; // xmm6_8
  unsigned int i; // r14d
  double *v18; // rbx
  double v19; // xmm6_8
  double v20; // xmm0_8
  ATL::CAtlException *v22; // rbx
  __int64 v23; // [rsp+0h] [rbp-158h] BYREF
  __int64 v24; // [rsp+20h] [rbp-138h]
  float v25; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-114h]
  int v27; // [rsp+48h] [rbp-110h]
  float v28; // [rsp+4Ch] [rbp-10Ch]
  float v29; // [rsp+50h] [rbp-108h]
  _DWORD v30[6]; // [rsp+58h] [rbp-100h] BYREF
  double v31; // [rsp+70h] [rbp-E8h]
  double v32; // [rsp+78h] [rbp-E0h]
  double v33; // [rsp+80h] [rbp-D8h]
  double v34; // [rsp+88h] [rbp-D0h]
  __int64 v35; // [rsp+90h] [rbp-C8h]
  ATL::CAtlException *v36; // [rsp+98h] [rbp-C0h] BYREF
  float v38; // [rsp+168h] [rbp+10h] BYREF
  float v39; // [rsp+170h] [rbp+18h] BYREF
  float v40; // [rsp+178h] [rbp+20h] BYREF

  v35 = -2LL;
  v1 = this;
  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, this);
  }
  if ( !*((_QWORD *)v1 + 31) )
    goto LABEL_35;
  v3 = *((_DWORD *)v1 + 69);
  *((_DWORD *)v1 + 29) = v3;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, v1, v3);
  }
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((void **)v1 + 10, 0LL);
  if ( !*((_QWORD *)v1 + 31) )
  {
LABEL_35:
    v2 = -2147418113;
LABEL_39:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 0x43Eu, v2);
    return (unsigned int)v2;
  }
  v6 = FLOAT_1000_0;
  v7 = FLOAT_N1000_0;
  v8 = 0;
  v9 = DOUBLE_20_0;
  v10 = DOUBLE_10_0;
  while ( 1 )
  {
    v26 = v8;
    if ( v8 >= *((_DWORD *)v1 + 29) )
      break;
    *(float *)&v24 = FLOAT_1_5;
    CVolumeUnit::SetDBRange(v30);
    CVolumeUnit::SetWiper((CVolumeUnit *)v30, 0.0);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 31) + 32LL))(
           *((_QWORD *)v1 + 31),
           0LL,
           &v38,
           &v39,
           &v40);
    if ( v2 < 0 )
      goto LABEL_39;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v24) = v8;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, v1, v24, v38, v39, v40);
    }
    v30[0] = 1;
    v13 = v38;
    *(float *)&v30[2] = v38;
    v14 = v39;
    *(float *)&v30[3] = v39;
    *(float *)&v30[4] = v40;
    *(float *)&v30[5] = v39;
    v15 = pow(v10, v38 / v9);
    v34 = v15;
    v16 = pow(v10, v14 / v9);
    v33 = v16;
    v31 = CVolumeUnit::TaperFromScalar((CVolumeUnit *)v30, v15, v16);
    v32 = CVolumeUnit::TaperFromScalar((CVolumeUnit *)v30, v16, v16);
    v6 = fminf(v13, v6);
    v28 = v6;
    v7 = fmaxf(v14, v7);
    v29 = v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 31) + 40LL))(
           *((_QWORD *)v1 + 31),
           v8,
           &v25);
    if ( v2 < 0 )
      goto LABEL_39;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_14242717b50d32756585d53851505e56_Traceguids,
        v1,
        v8,
        v25);
    }
    v30[1] = fmaxf(fminf(v25, v14), v13);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((__int64)v1 + 80, v8, (__int64)v30);
    }
    catch ( ATL::CAtlException *v36 )
    {
      v4 = &v23;
      v22 = v36;
      if ( *(_DWORD *)v36 == -1073741571 )
        _o__resetstkoflw();
      v27 = *(_DWORD *)v22;
      v2 = v27;
      if ( v27 < 0 )
        goto LABEL_39;
      v1 = this;
      v6 = v28;
      v7 = v29;
      v8 = v26;
      v9 = DOUBLE_20_0;
      v10 = DOUBLE_10_0;
    }
    ++v8;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, v1, v6, v7);
  }
  for ( i = 0; i < *((_DWORD *)v1 + 29); ++i )
  {
    if ( (unsigned __int64)i >= *((_QWORD *)v1 + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v18 = (double *)(*((_QWORD *)v1 + 10) + 56LL * i);
    v19 = pow(v10, v7 / v9);
    v20 = pow(v10, v6 / v9);
    v18[3] = CVolumeUnit::TaperFromScalar((CVolumeUnit *)v18, v20, v19);
    v18[4] = CVolumeUnit::TaperFromScalar((CVolumeUnit *)v18, v19, v19);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_39;
  return (unsigned int)v2;
}
