/*
 * XREFs of ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180069810
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180068A70 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qS @ 0x180066790 (WPP_SF_qS.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180067E30 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18006A60C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18006A9F4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18006AA14 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     WPP_SF_qdg @ 0x18006BA64 (WPP_SF_qdg.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadVolumeState(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 v3; // r14
  __int64 i; // rsi
  __int64 v5; // rdx
  ATL::CAtlException *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-98h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+40h] [rbp-88h]
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int64 v12; // [rsp+50h] [rbp-78h]
  __int64 v13; // [rsp+58h] [rbp-70h]
  ATL::CAtlException *v14; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v15[96]; // [rsp+68h] [rbp-60h] BYREF
  int v17; // [rsp+E0h] [rbp+18h]
  __int64 v18; // [rsp+E8h] [rbp+20h] BYREF

  v13 = -2LL;
  v1 = this;
  v8 = 0LL;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  pvar = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v8);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, 0LL, &v18);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
             v18,
             &PKEY_APO_MasterVolumeLevel,
             &pvar);
      if ( v2 >= 0 )
      {
        if ( (_WORD)pvar == 65 && (unsigned int)v10 == 4LL * *((unsigned int *)v1 + 29) )
        {
          v3 = v11;
          v12 = v11;
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v1 + 29); i = (unsigned int)(i + 1) )
          {
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                48LL,
                &WPP_a99c65f464be33b31308c514a5524983_Traceguids,
                v1,
                i,
                *(float *)(v3 + 4 * i));
            }
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v15);
            CVolumeUnit::SetDBRange(v15);
            CVolumeUnit::SetDB((CVolumeUnit *)v15, *(float *)(v3 + 4 * i));
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 80, v5, v15);
            }
            catch ( ATL::CAtlException *v14 )
            {
              v7 = v14;
              if ( *(_DWORD *)v14 == -1073741571 )
                _o__resetstkoflw();
              v17 = *(_DWORD *)v7;
              v2 = *(_DWORD *)v7;
              if ( v17 < 0 )
                break;
              v1 = this;
              v3 = v12;
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
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadVolumeState", 1610, v2);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v2;
}
