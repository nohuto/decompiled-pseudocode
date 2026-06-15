/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800A3AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180009650 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004DEFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E28C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ebp
  __int64 v13; // rsi
  CVolumeUnit *v14; // r15
  int v15; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v18; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 >= *((_DWORD *)this + 31) )
  {
    v9 = -2147024809;
    v10 = 817LL;
    v11 = 2147942487LL;
    goto LABEL_13;
  }
  v12 = 0;
  v13 = 0LL;
  if ( !a2 )
  {
LABEL_10:
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    v15 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    v9 = v15;
    if ( v15 < 0 )
    {
      v10 = 844LL;
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
      *((_QWORD *)this + 17),
      0LL,
      a4);
    if ( a5 )
      *a5 = v12 == 0;
    v9 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( (unsigned __int64)(unsigned int)v13 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    v14 = (CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * (unsigned int)v13);
    if ( CVolumeUnit::GetWiper(v14) == a3[v13] )
      goto LABEL_9;
    if ( (unsigned __int64)(unsigned int)v13 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    v15 = CVolumeUnit::SetWiper(v14, a3[v13]);
    v9 = v15;
    if ( v15 < 0 )
      break;
    ++v12;
LABEL_9:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= a2 )
      goto LABEL_10;
  }
  v10 = 828LL;
LABEL_12:
  v11 = (unsigned int)v15;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)v11);
LABEL_20:
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
