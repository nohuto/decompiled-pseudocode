/*
 * XREFs of ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180085844
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180085080 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18003ACFC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x18003B8BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18003B9CC (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18007C460 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 *     WPP_SF_qg @ 0x1800879D0 (WPP_SF_qg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 *v3; // rdx
  __int64 v4; // r8
  float v5; // xmm6_4
  unsigned int i; // esi
  __int64 v7; // rdx
  float v8; // xmm3_4
  ATL::CAtlException *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-98h] BYREF
  __int64 v15; // [rsp+48h] [rbp-90h]
  __int64 v16; // [rsp+50h] [rbp-88h]
  __int64 v17; // [rsp+58h] [rbp-80h]
  ATL::CAtlException *v18; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v19[56]; // [rsp+68h] [rbp-70h] BYREF
  int v21; // [rsp+F0h] [rbp+18h]
  float v22; // [rsp+F8h] [rbp+20h]

  v17 = -2LL;
  v1 = this;
  v13 = 0LL;
  v12 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  pvar = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v13);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, 0LL, &v12);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x32u,
          (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
          v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
             v12,
             &PKEY_AudioEndpoint_Default_VolumeInDb,
             &pvar);
      if ( v2 >= 0 )
      {
        if ( (_WORD)pvar == 19 )
        {
          v5 = (float)(int)v15 * 0.000015258789;
          v22 = v5;
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, v1, v5);
          }
          for ( i = 0; i < *((_DWORD *)v1 + 29); ++i )
          {
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v19, (__int64)v3);
            if ( *((_DWORD *)v1 + 72) == 4 )
              v8 = FLOAT_30_0;
            else
              v8 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v19, v7, -96.0, v8, SLODWORD(FLOAT_1_5));
            CVolumeUnit::SetDB((CVolumeUnit *)v19, v5);
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((__int64)v1 + 80, i, (__int64)v19);
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
              v5 = v22;
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
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadDefaultVolumeForEndpoint", 1682, v2);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v2;
}
