/*
 * XREFs of ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18006953C
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
 *     WPP_SF_qg @ 0x18006BB94 (WPP_SF_qg.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  float v5; // xmm6_4
  unsigned int i; // esi
  ATL::CAtlException *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-A0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-98h] BYREF
  __int64 v12; // [rsp+48h] [rbp-90h]
  __int64 v13; // [rsp+50h] [rbp-88h]
  __int64 v14; // [rsp+58h] [rbp-80h]
  ATL::CAtlException *v15; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v16[56]; // [rsp+68h] [rbp-70h] BYREF
  int v18; // [rsp+F0h] [rbp+18h]
  float v19; // [rsp+F8h] [rbp+20h]

  v14 = -2LL;
  v1 = this;
  v10 = 0LL;
  v9 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      (__int64)&WPP_a99c65f464be33b31308c514a5524983_Traceguids,
      this,
      *((_QWORD *)this + 8));
  }
  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)v1 + 8),
         &v10);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
             v9,
             &PKEY_AudioEndpoint_Default_VolumeInDb,
             &pvar);
      if ( v2 >= 0 )
      {
        if ( (_WORD)pvar == 19 )
        {
          v5 = (float)(int)v12 * 0.000015258789;
          v19 = v5;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, v1, v5);
          }
          for ( i = 0; i < *((_DWORD *)v1 + 29); ++i )
          {
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v16);
            CVolumeUnit::SetDBRange(v16);
            CVolumeUnit::SetDB((CVolumeUnit *)v16, v5);
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 80, i, v16);
            }
            catch ( ATL::CAtlException *v15 )
            {
              v8 = v15;
              if ( *(_DWORD *)v15 == -1073741571 )
                _o__resetstkoflw();
              v18 = *(_DWORD *)v8;
              v2 = *(_DWORD *)v8;
              if ( v18 < 0 )
                break;
              v1 = this;
              v5 = v19;
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
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v2;
}
