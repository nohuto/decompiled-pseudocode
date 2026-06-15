/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012400
 * Callers:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140004940 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 * Callees:
 *     ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140002070 (-IsLoopback@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000E540 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002EC2C (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_DDD @ 0x140034B94 (WPP_SF_DDD.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsLoopback; // al
  __int64 v6; // r9
  int v7; // eax
  char *v8; // rdi
  struct ISaDeviceCallback *v9; // rdx
  CAudioDeviceGraph *v10; // rcx
  __int64 (__fastcall *v11)(CAudioDeviceGraph *, struct ISaDeviceCallback *); // rax
  int v12; // eax
  int v13; // ebx
  int v14; // esi
  int v16; // [rsp+20h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v18; // [rsp+38h] [rbp-21h]
  __int128 v19; // [rsp+40h] [rbp-19h]
  __int128 v20; // [rsp+50h] [rbp-9h] BYREF
  __int128 v21; // [rsp+60h] [rbp+7h]
  __int128 v22; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

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
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids, a2);
    }
LABEL_18:
    v13 = 0;
    goto LABEL_19;
  }
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (unsigned int)(*((_DWORD *)this + 11) + 1);
  *((_DWORD *)this + 11) = v6;
  v7 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids, v6);
    v7 = *((_DWORD *)this + 11);
  }
  if ( v7 != 1 )
    goto LABEL_16;
  v8 = (char *)this - 304;
  if ( *((_DWORD *)this + 8) )
  {
    v13 = CSystemAudioDeviceSharedBase::SetGraphState((char *)this - 304, 2LL);
  }
  else
  {
    v19 = *(_OWORD *)(v8 + 248);
    v20 = v19;
    EtwEventActivityIdControl(4LL, &v20);
    v9 = (struct ISaDeviceCallback *)((unsigned __int64)(v8 + 296) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64));
    v10 = (CAudioDeviceGraph *)*((_QWORD *)v8 + 41);
    v11 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct ISaDeviceCallback *))(*(_QWORD *)v10 + 112LL);
    if ( v11 == CAudioDeviceGraph::Start )
      v12 = CAudioDeviceGraph::Start(v10, v9);
    else
      v12 = v11(v10, v9);
    v13 = v12;
    v14 = 3;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v12 >> 31) & 0xFFFFFFFE) + 4) )
    {
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids,
        *((unsigned int *)v8 + 84),
        3,
        v12);
    }
    if ( v13 < 0 )
      v14 = *((_DWORD *)v8 + 84);
    *((_DWORD *)v8 + 84) = v14;
    EtwEventActivityIdControl(4LL, &v20);
  }
  if ( v13 >= 0 )
  {
LABEL_16:
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32B,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v13,
    v16);
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_19:
  EtwEventActivityIdControl(4LL, &v22);
  return (unsigned int)v13;
}
