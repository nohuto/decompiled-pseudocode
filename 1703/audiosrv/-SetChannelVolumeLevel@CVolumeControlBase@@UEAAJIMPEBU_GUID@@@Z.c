/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x1800866A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18007C460 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180084F98 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  unsigned __int64 v5; // rbp
  int v7; // edi
  float DB; // xmm0_4
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v12; // [rsp+28h] [rbp-40h]

  v5 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v12 = 0;
  v7 = -2147024809;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v5 >= *((_DWORD *)this + 29) )
    goto LABEL_16;
  if ( v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v5));
  if ( (unsigned __int64)(unsigned int)v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v9 = *((_QWORD *)this + 10) + 56LL * (unsigned int)v5;
  if ( *(float *)(v9 + 8) > a3 || a3 > *(float *)(v9 + 12) )
    goto LABEL_16;
  if ( (unsigned __int64)(unsigned int)v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  CVolumeUnit::SetDB((CVolumeUnit *)(56LL * (unsigned int)v5 + *((_QWORD *)this + 10)), a3);
  v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, (unsigned int)v5);
  if ( v7 < 0 )
  {
    if ( (unsigned __int64)(unsigned int)v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    CVolumeUnit::SetDB((CVolumeUnit *)(56LL * (unsigned int)v5 + *((_QWORD *)this + 10)), DB);
  }
  else
  {
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
      *((_QWORD *)this + 16),
      0LL,
      a4);
  }
  if ( v7 < 0 )
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetChannelVolumeLevel", 666, v7);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
