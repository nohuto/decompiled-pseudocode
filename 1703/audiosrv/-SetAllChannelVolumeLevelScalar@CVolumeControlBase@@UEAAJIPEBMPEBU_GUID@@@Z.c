/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x1800865A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18003B800 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4)
{
  int v8; // edi
  __int64 v9; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v12 = 0;
  v8 = -2147024809;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 < *((_DWORD *)this + 29) )
  {
    v9 = 0LL;
    if ( a2 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(unsigned int)v9 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v8 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v9), a3[v9]);
        if ( v8 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      v8 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
          *((_QWORD *)this + 16),
          0LL,
          a4);
        goto LABEL_10;
      }
    }
  }
  AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetAllChannelVolumeLevelScalar", 883, v8);
LABEL_10:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
