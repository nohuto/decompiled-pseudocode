/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005240
 * Callers:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x1400063F0 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 * Callees:
 *     ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140002090 (-IsLoopback@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F8B0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002FFF0 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_DDD @ 0x140036474 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
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
  __int64 (__fastcall *v10)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *); // rax
  int v11; // eax
  int v12; // ebx
  int v13; // esi
  unsigned int v14; // edx
  int v16; // [rsp+20h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  char v18; // [rsp+38h] [rbp-70h]
  __int128 v19; // [rsp+40h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h]
  __int128 v22; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v21 = *(_OWORD *)((char *)this - 56);
  v22 = v21;
  EtwEventActivityIdControl(4LL, &v22);
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
LABEL_26:
    v12 = 0;
    goto LABEL_27;
  }
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (unsigned int)(*((_DWORD *)this + 11) + 1);
  *((_DWORD *)this + 11) = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, v6);
  }
  if ( *((_DWORD *)this + 11) != 1 )
    goto LABEL_24;
  if ( *((_DWORD *)this + 8) )
  {
    v12 = CSystemAudioDeviceSharedBase::SetGraphState((char *)this - 304, 2LL);
  }
  else
  {
    v7 = (char *)this - 304;
    v19 = *(_OWORD *)((char *)this - 56);
    v20 = v19;
    EtwEventActivityIdControl(4LL, &v20);
    if ( this == (CSystemAudioDeviceSharedBase *)304 )
      v8 = 0LL;
    else
      v8 = (struct ISaDeviceCallback *)(v7 + 296);
    v9 = (CAudioDeviceGraph *)*((_QWORD *)v7 + 41);
    v10 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct ISaDeviceCallback *))(*(_QWORD *)v9 + 112LL);
    if ( v10 == CAudioDeviceGraph::Start )
      v11 = CAudioDeviceGraph::Start(v9, v8);
    else
      v11 = v10(v9, v8);
    v12 = v11;
    v13 = 3;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
    {
      v14 = v11 < 0 ? 2 : 4;
      if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v14 )
      {
        v16 = 3;
        WPP_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          35LL,
          &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
          *((unsigned int *)v7 + 84));
      }
    }
    if ( v12 < 0 )
      v13 = *((_DWORD *)v7 + 84);
    *((_DWORD *)v7 + 84) = v13;
    EtwEventActivityIdControl(4LL, &v20);
  }
  if ( v12 >= 0 )
  {
LABEL_24:
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x32D,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v12,
    v16);
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_27:
  EtwEventActivityIdControl(4LL, &v22);
  return (unsigned int)v12;
}
