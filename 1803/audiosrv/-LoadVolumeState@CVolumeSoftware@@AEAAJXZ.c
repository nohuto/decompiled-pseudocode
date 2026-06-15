/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800A2D30
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800A2130 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18004DE0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18004E450 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E51C (--0CVolumeUnit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800A0B54 (WPP_SF_qS.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 *v3; // rdx
  __int64 v4; // r14
  __int64 i; // rsi
  __int64 v6; // rdx
  float v7; // xmm3_4
  size_t v8; // rdx
  ATL::CAtlException *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-90h] BYREF
  __int64 v14; // [rsp+40h] [rbp-88h]
  __int64 v15; // [rsp+48h] [rbp-80h]
  __int64 v16; // [rsp+50h] [rbp-78h]
  __int64 v17; // [rsp+58h] [rbp-70h]
  ATL::CAtlException *v18; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v19[96]; // [rsp+68h] [rbp-60h] BYREF
  int v21; // [rsp+E0h] [rbp+18h]
  __int64 v22; // [rsp+E8h] [rbp+20h] BYREF

  v17 = -2LL;
  v1 = this;
  v12 = 0LL;
  v22 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  pvar = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v12);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v22);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
             v22,
             &PKEY_APO_MasterVolumeLevel,
             &pvar);
      if ( v2 >= 0 )
      {
        if ( (_WORD)pvar == 65 && (unsigned int)v14 == 4LL * *((unsigned int *)v1 + 31) )
        {
          v4 = v15;
          v16 = v15;
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v1 + 31); i = (unsigned int)(i + 1) )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                48LL,
                &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
                v1,
                i,
                *(float *)(v4 + 4 * i));
            }
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v19, (__int64)v3);
            if ( *((_DWORD *)v1 + 74) == 4 )
              v7 = FLOAT_30_0;
            else
              v7 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v19, v6, -96.0, v7, SLODWORD(FLOAT_1_5));
            CVolumeUnit::SetDB((CVolumeUnit *)v19, *(float *)(v4 + 4 * i));
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
                (_QWORD *)v1 + 11,
                v8,
                (__int64)v19);
            }
            catch ( ATL::CAtlException *v18 )
            {
              v3 = &v11;
              v10 = v18;
              if ( *(_DWORD *)v18 == -1073741571 )
                _o__resetstkoflw();
              v21 = *(_DWORD *)v10;
              v2 = *(_DWORD *)v10;
              if ( v21 < 0 )
                break;
              v1 = this;
              v4 = v16;
            }
          }
        }
        else
        {
          v2 = -2147023728;
        }
      }
    }
  }
  PropVariantClear(&pvar);
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadVolumeState", 1778, v2);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v2;
}
