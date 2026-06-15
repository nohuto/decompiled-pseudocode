/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18006A510
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006A258 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18006B29C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  CVolumeUnit *v10; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v13 = 0;
  v8 = -2147024809;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 < *((_DWORD *)this + 29) )
  {
    v9 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v10 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                               (_QWORD *)this + 10,
                               v9);
        v8 = CVolumeUnit::SetWiper(v10, *a3);
        if ( v8 < 0 )
          break;
        ++v9;
        ++a3;
        if ( v9 >= a2 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      v8 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 40LL))(
          *((_QWORD *)this + 16),
          0LL,
          a4);
        goto LABEL_8;
      }
    }
  }
  AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetAllChannelVolumeLevelScalar", 883, v8);
LABEL_8:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
