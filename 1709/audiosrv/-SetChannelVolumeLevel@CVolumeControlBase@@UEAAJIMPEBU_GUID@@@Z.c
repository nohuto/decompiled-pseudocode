/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x1800685E8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18006A9F4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  unsigned __int64 v6; // r14
  int v7; // ebx
  CVolumeUnit *v8; // rax
  float DB; // xmm0_4
  __int64 v10; // rax
  CVolumeUnit *v11; // rax
  CVolumeUnit *v12; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+28h] [rbp-40h]

  v6 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v15 = 0;
  v7 = -2147024809;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 29) )
    goto LABEL_8;
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                        (_QWORD *)this + 10,
                        (unsigned int)v6);
  DB = CVolumeUnit::GetDB(v8);
  v10 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, (unsigned int)v6);
  if ( *(float *)(v10 + 8) > a3 || a3 > *(float *)(v10 + 12) )
    goto LABEL_8;
  v11 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         (unsigned int)v6);
  CVolumeUnit::SetDB(v11, a3);
  v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, (unsigned int)v6);
  if ( v7 < 0 )
  {
    v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v6);
    CVolumeUnit::SetDB(v12, DB);
  }
  else
  {
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 40LL))(
      *((_QWORD *)this + 16),
      0LL,
      a4);
  }
  if ( v7 < 0 )
LABEL_8:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetChannelVolumeLevel", 666, v7);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
