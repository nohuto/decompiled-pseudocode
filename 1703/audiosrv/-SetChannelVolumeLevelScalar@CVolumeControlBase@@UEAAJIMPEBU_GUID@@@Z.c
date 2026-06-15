/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180086820
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18003B800 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18007C460 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180084F98 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r14
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  float DB; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v14; // [rsp+28h] [rbp-40h]

  v5 = -2147024809;
  v6 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v14 = 0;
  v8 = -2147024809;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 29) )
  {
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetChannelVolumeLevelScalar", 822, v8);
LABEL_16:
    v5 = v8;
    goto LABEL_17;
  }
  if ( a3 >= 0.0 && a3 <= 1.0 )
  {
    if ( v6 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(56LL * (unsigned int)v6 + *((_QWORD *)this + 10)));
    if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v8 = CVolumeUnit::SetWiper((CVolumeUnit *)(v10 + v9), a3);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, (unsigned int)v6);
      if ( v8 < 0 )
      {
        if ( (unsigned __int64)(unsigned int)v6 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v6), DB);
      }
      else
      {
        CVolumeControlBase::RecalcMasterFromChannelLevels(this);
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
          *((_QWORD *)this + 16),
          0LL,
          a4);
      }
      if ( v8 >= 0 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
  AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetChannelVolumeLevelScalar", 790, -2147024809);
LABEL_17:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
