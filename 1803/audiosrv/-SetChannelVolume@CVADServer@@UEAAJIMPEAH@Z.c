/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800C26E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800B6440 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3, int *a4)
{
  CAudioStream *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x32u,
      (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
      this,
      a2,
      a3);
  }
  if ( a3 < 0.0 || a3 > 1.0 )
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9DD,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    return v9;
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( !v7 || !*((_DWORD *)this + 46) )
  {
    v9 = -2004287487;
    v11 = 2529LL;
    v10 = 2290679809LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    return v9;
  }
  v8 = CAudioStream::SetStreamChannelVolume(v7, a2, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 2530LL;
    goto LABEL_15;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
