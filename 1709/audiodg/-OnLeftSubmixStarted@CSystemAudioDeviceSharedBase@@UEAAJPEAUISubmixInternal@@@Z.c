/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F410
 * Callers:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140010490 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 * Callees:
 *     ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140001350 (-IsLoopback@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000C710 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002FC38 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140035FA8 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsLoopback; // al
  __int64 v6; // r9
  char *v7; // rdi
  struct ISaDeviceCallback *v8; // rdx
  CAudioDeviceGraph *v9; // rcx
  __int64 (__fastcall *v10)(CAudioDeviceGraph *, struct ISaDeviceCallback *); // rax
  int v11; // eax
  int v12; // ebx
  int v13; // r14d
  int v15; // [rsp+20h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v17; // [rsp+38h] [rbp-21h]
  __int128 v18; // [rsp+40h] [rbp-19h]
  __int128 v19; // [rsp+50h] [rbp-9h] BYREF
  __int128 v20; // [rsp+60h] [rbp+7h]
  __int128 v21; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v20 = *(_OWORD *)((char *)this - 56);
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  v4 = *(bool (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 128LL);
  if ( v4 == CSubmixImpl::IsLoopback )
    IsLoopback = CSubmixImpl::IsLoopback(a2);
  else
    IsLoopback = v4(a2);
  if ( IsLoopback && !*((_DWORD *)this + 12) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, a2);
    }
LABEL_18:
    v12 = 0;
    goto LABEL_19;
  }
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = (unsigned int)(*((_DWORD *)this + 11) + 1);
  *((_DWORD *)this + 11) = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, v6);
  }
  if ( *((_DWORD *)this + 11) != 1 )
    goto LABEL_16;
  if ( *((_DWORD *)this + 8) )
  {
    v12 = CSystemAudioDeviceSharedBase::SetGraphState((char *)this - 304, 2LL);
  }
  else
  {
    v7 = (char *)this - 304;
    v18 = *(_OWORD *)((char *)this - 56);
    v19 = v18;
    EtwEventActivityIdControl(4LL, &v19);
    v8 = (struct ISaDeviceCallback *)((unsigned __int64)(v7 + 296) & ((unsigned __int128)-(__int128)(unsigned __int64)v7 >> 64));
    v9 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
    v10 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct ISaDeviceCallback *))(*(_QWORD *)v9 + 112LL);
    if ( v10 == CAudioDeviceGraph::Start )
      v11 = CAudioDeviceGraph::Start(v9, v8);
    else
      v11 = v10(v9, v8);
    v12 = v11;
    v13 = 3;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v11 >> 31) & 0xFFFFFFFE) + 4) )
    {
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        *((unsigned int *)v7 + 84),
        3,
        v11);
    }
    if ( v12 < 0 )
      v13 = *((_DWORD *)v7 + 84);
    *((_DWORD *)v7 + 84) = v13;
    EtwEventActivityIdControl(4LL, &v19);
  }
  if ( v12 >= 0 )
  {
LABEL_16:
    if ( v17 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x32D,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v12,
    v15);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_19:
  EtwEventActivityIdControl(4LL, &v21);
  return (unsigned int)v12;
}
