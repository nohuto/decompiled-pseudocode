/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800A3C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18004E374 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  float *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v14; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  float DB; // [rsp+60h] [rbp+20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 >= *((_DWORD *)this + 31) )
  {
    v7 = 616LL;
LABEL_17:
    v11 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_18;
  }
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * a2));
  v9 = (float *)(*((_QWORD *)this + 11) + 56 * v8);
  if ( v9[2] > a3 || a3 > v9[3] )
  {
    v7 = 621LL;
    goto LABEL_17;
  }
  if ( v8 >= *((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  CVolumeUnit::SetDB((CVolumeUnit *)v9, a3);
  v10 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      0LL,
      a4);
    if ( a5 )
      *a5 = DB == a3;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v10);
    if ( (unsigned __int64)a2 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * a2), DB);
  }
LABEL_18:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
