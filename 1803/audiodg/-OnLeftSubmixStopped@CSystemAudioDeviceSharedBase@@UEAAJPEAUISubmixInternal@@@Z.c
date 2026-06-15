/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012270
 * Callers:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140004940 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 * Callees:
 *     ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140002070 (-IsLoopback@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000DFD0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_DDD @ 0x140034B94 (WPP_SF_DDD.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsLoopback; // al
  int v6; // r15d
  __int64 v7; // r9
  int v8; // eax
  CAudioDeviceGraph *v9; // rcx
  __int64 (*v10)(void); // rax
  int v11; // eax
  int v12; // ebx
  int v14; // [rsp+20h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v16; // [rsp+38h] [rbp-21h]
  __int128 v17; // [rsp+40h] [rbp-19h]
  __int128 v18; // [rsp+50h] [rbp-9h] BYREF
  __int128 v19; // [rsp+60h] [rbp+7h]
  __int128 v20; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v19 = *(_OWORD *)((char *)this - 56);
  v20 = v19;
  EtwEventActivityIdControl(4LL, &v20);
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
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids, a2);
    }
LABEL_16:
    v12 = 0;
    goto LABEL_17;
  }
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = 1;
  v7 = (unsigned int)(*((_DWORD *)this + 11) - 1);
  *((_DWORD *)this + 11) = v7;
  v8 = v7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids, v7);
    v8 = *((_DWORD *)this + 11);
  }
  if ( v8 )
    goto LABEL_14;
  v17 = *(_OWORD *)((char *)this - 56);
  v18 = v17;
  EtwEventActivityIdControl(4LL, &v18);
  v9 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 128LL);
  if ( (char *)v10 == (char *)CAudioDeviceGraph::Pause )
    v11 = CAudioDeviceGraph::Pause(v9);
  else
    v11 = v10();
  v12 = v11;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v11 >> 31) & 0xFFFFFFFE) + 4) )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34LL,
      &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids,
      *((unsigned int *)this + 8),
      1,
      v11);
  }
  if ( v12 < 0 )
    v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v6;
  EtwEventActivityIdControl(4LL, &v18);
  if ( v12 >= 0 )
  {
LABEL_14:
    if ( v16 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34C,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v12,
    v14);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_17:
  EtwEventActivityIdControl(4LL, &v20);
  return (unsigned int)v12;
}
