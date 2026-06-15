/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800A3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E28C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18004E374 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  CVolumeUnit *v10; // rcx
  int v11; // eax
  int v12; // eax
  BOOL v13; // eax
  BOOL *v14; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v17; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  float DB; // [rsp+70h] [rbp+30h]

  if ( a3 < 0.0 || a3 > 1.0 )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v7;
  }
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 < *((_DWORD *)this + 31) )
  {
    if ( (unsigned __int64)a2 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * a2));
    v11 = CVolumeUnit::SetWiper(v10, a3);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, a2);
      v7 = v12;
      if ( v12 >= 0 )
      {
        CVolumeControlBase::RecalcMasterFromChannelLevels(this);
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
          *((_QWORD *)this + 17),
          0LL,
          a4);
        if ( a5 )
        {
          if ( (unsigned __int64)a2 >= *((_QWORD *)this + 12) )
            ATL::AtlThrowImpl(-2147024809);
          v13 = DB == CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * a2));
          *v14 = v13;
        }
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x307,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
          (const char *)(unsigned int)v12);
        if ( (unsigned __int64)a2 >= *((_QWORD *)this + 12) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * a2), DB);
      }
      goto LABEL_19;
    }
    v9 = (unsigned int)v11;
    v8 = 769LL;
  }
  else
  {
    v7 = -2147024809;
    v8 = 764LL;
    v9 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)v9);
LABEL_19:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
