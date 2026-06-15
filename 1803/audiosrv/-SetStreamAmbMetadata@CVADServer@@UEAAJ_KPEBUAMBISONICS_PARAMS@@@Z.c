/*
 * XREFs of ?SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z @ 0x1800C29E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::SetStreamAmbMetadata(CVADServer *this, __int64 a2, const struct AMBISONICS_PARAMS *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) )
  {
    v6 = -2004287487;
    v7 = 2363LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_20;
  }
  v8 = *((_QWORD *)this + 24);
  if ( !v8 )
  {
    v6 = -2004287487;
    v7 = 2364LL;
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(v8 + 56);
  if ( a2 != v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
        a2,
        v9);
    }
    v6 = -2147024809;
    v7 = 2369LL;
    goto LABEL_18;
  }
  v10 = *(_QWORD *)(v8 + 216);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, const struct AMBISONICS_PARAMS *))(*(_QWORD *)v10 + 24LL))(v10, a3);
    if ( v11 == -2005139384 )
      v11 = -2147024809;
    v6 = v11;
    if ( v11 >= 0 )
      goto LABEL_19;
  }
  else
  {
    v6 = -2147024809;
  }
  AudSrvTraceLoggingErrorHelper("CAudioStream::SetAmbMetadata", 826, v6);
  if ( v6 < 0 )
  {
    v7 = 2376LL;
    goto LABEL_18;
  }
LABEL_19:
  v6 = 0;
LABEL_20:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
