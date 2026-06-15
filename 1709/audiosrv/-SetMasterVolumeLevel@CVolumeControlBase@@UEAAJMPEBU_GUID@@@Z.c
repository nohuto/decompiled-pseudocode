/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18005B3BC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x1800685E8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18006A9F4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     WPP_SF_qg_guid_ @ 0x18006BBE4 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(CVolumeControlBase *this, float a2, const struct _GUID *a3)
{
  __int64 v5; // rax
  float v6; // xmm9_4
  int v7; // xmm10_4
  float v8; // xmm8_4
  int v9; // ebx
  CVolumeUnit *v10; // rax
  int v11; // r8d
  CVolumeUnit *v12; // rax
  float DB; // xmm6_4
  CVolumeUnit *v14; // rax
  float v15; // xmm6_4
  __int64 v16; // rax
  CVolumeUnit *v17; // rax
  CVolumeUnit *v18; // rax
  unsigned int v19; // esi
  float i; // xmm7_4
  CVolumeUnit *v21; // rax
  float v22; // xmm0_4
  CVolumeUnit *v23; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v26; // [rsp+38h] [rbp-60h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v26 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
         (_QWORD *)this + 10,
         *((unsigned int *)this + 28));
  v6 = *(float *)(v5 + 8);
  v7 = *(_DWORD *)(v5 + 16);
  if ( v6 > a2 || (v8 = *(float *)(v5 + 12), a2 > v8) )
  {
    v9 = -2147024809;
  }
  else
  {
    v9 = 0;
    v10 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    if ( a2 == CVolumeUnit::GetDB(v10) )
      goto LABEL_19;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qg_guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22,
        v11,
        (_DWORD)this,
        COERCE_UNSIGNED_INT64(a2),
        (__int64)a3);
    }
    v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    DB = CVolumeUnit::GetDB(v12);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
    *((float *)this + 52) = DB;
    *((float *)this + 53) = v6;
    *((float *)this + 54) = v8;
    *((_DWORD *)this + 55) = v7;
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v15 = CVolumeUnit::GetDB(v14);
    v16 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
            (_QWORD *)this + 10,
            *((unsigned int *)this + 28));
    if ( *(float *)(v16 + 8) > a2 || a2 > *(float *)(v16 + 12) )
    {
      v9 = -2147024809;
    }
    else
    {
      v17 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      CVolumeUnit::SetDB(v17, a2);
      v18 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      v19 = 0;
      for ( i = CVolumeUnit::GetDB(v18) - v15; v19 < *((_DWORD *)this + 29); ++v19 )
      {
        if ( v19 != *((_DWORD *)this + 28) )
        {
          v21 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 v19);
          v22 = CVolumeUnit::GetDB(v21);
          v23 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 v19);
          CVolumeUnit::SetDB(v23, v22 + i);
        }
      }
      v9 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v9 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 40LL))(
          *((_QWORD *)this + 16),
          0LL,
          a3);
        goto LABEL_19;
      }
    }
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetMasterVolumeLevel", 602, v9);
  }
LABEL_19:
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
