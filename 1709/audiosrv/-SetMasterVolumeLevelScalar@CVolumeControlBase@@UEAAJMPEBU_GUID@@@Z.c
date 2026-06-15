/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x1800098F4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18005B3BC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x1800685E8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18006A9F4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18006B29C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     WPP_SF_qdg @ 0x18006BA64 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x18006BAB8 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x18006BBE4 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x18006BCA0 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3)
{
  int v5; // ebx
  CVolumeUnit *v6; // rax
  int v7; // r8d
  CVolumeUnit *v8; // rax
  float DB; // xmm10_4
  CVolumeUnit *v10; // rax
  _DWORD *v11; // rax
  int v12; // xmm9_4
  int v13; // xmm8_4
  int v14; // xmm7_4
  CVolumeUnit *v15; // rax
  float v16; // xmm0_4
  CVolumeUnit *v17; // rax
  float v18; // xmm8_4
  CVolumeUnit *v19; // rax
  double v20; // xmm2_8
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int i; // ebx
  CVolumeUnit *v24; // rax
  float v25; // xmm7_4
  CVolumeUnit *v26; // rax
  double v27; // xmm2_8
  CVolumeUnit *v28; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-78h] BYREF
  char v31; // [rsp+48h] [rbp-70h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v5 = 0;
  v31 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v5 = -2147024809;
  }
  else
  {
    v6 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (_QWORD *)this + 10,
                          *((unsigned int *)this + 28));
    if ( a2 != CVolumeUnit::GetWiper(v6) )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qg_guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          23,
          v7,
          (_DWORD)this,
          COERCE_UNSIGNED_INT64(a2),
          (__int64)a3);
      }
      v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 10,
                            *((unsigned int *)this + 28));
      DB = CVolumeUnit::GetDB(v8);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          24LL,
          &WPP_a99c65f464be33b31308c514a5524983_Traceguids,
          this,
          *((_DWORD *)this + 28),
          a2);
      }
      v10 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      v5 = CVolumeUnit::SetWiper(v10, a2);
      if ( v5 < 0 )
        goto LABEL_27;
      v11 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                        (_QWORD *)this + 10,
                        *((unsigned int *)this + 28));
      v12 = v11[4];
      v13 = v11[3];
      v14 = v11[2];
      v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      v16 = CVolumeUnit::GetDB(v15);
      AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
      *((float *)this + 52) = v16;
      *((_DWORD *)this + 53) = v14;
      *((_DWORD *)this + 54) = v13;
      *((_DWORD *)this + 55) = v12;
      v17 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      v18 = CVolumeUnit::GetDB(v17) - DB;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v19 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (_QWORD *)this + 10,
                               *((unsigned int *)this + 28));
        v20 = CVolumeUnit::GetDB(v19);
        WPP_SF_qggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v21, v22, this, v18, *(_QWORD *)&v20, DB);
      }
      for ( i = 0; i < *((_DWORD *)this + 29); ++i )
      {
        if ( i != *((_DWORD *)this + 28) )
        {
          v24 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 i);
          v25 = CVolumeUnit::GetDB(v24) + v18;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v26 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                   (_QWORD *)this + 10,
                                   i);
            v27 = CVolumeUnit::GetDB(v26);
            WPP_SF_qdgg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              26LL,
              &WPP_a99c65f464be33b31308c514a5524983_Traceguids,
              this,
              i,
              *(_QWORD *)&v27,
              v25);
          }
          v28 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 i);
          CVolumeUnit::SetDB(v28, v25);
        }
      }
      v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v5 < 0 )
LABEL_27:
        AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetMasterVolumeLevelScalar", 754, v5);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 40LL))(
          *((_QWORD *)this + 16),
          0LL,
          a3);
    }
  }
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
