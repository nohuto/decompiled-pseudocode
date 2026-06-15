/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F280
 * Callers:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140010490 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 * Callees:
 *     ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140001350 (-IsLoopback@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000BA50 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140035FA8 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsLoopback; // al
  int v6; // r15d
  __int64 v7; // r9
  CAudioDeviceGraph *v8; // rcx
  __int64 (*v9)(void); // rax
  int v10; // eax
  int v11; // ebx
  int v13; // [rsp+20h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v15; // [rsp+38h] [rbp-21h]
  __int128 v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+50h] [rbp-9h] BYREF
  __int128 v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v18 = *(_OWORD *)((char *)this - 56);
  v19 = v18;
  EtwEventActivityIdControl(4LL, &v19);
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
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, a2);
    }
LABEL_16:
    v11 = 0;
    goto LABEL_17;
  }
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = 1;
  v7 = (unsigned int)(*((_DWORD *)this + 11) - 1);
  *((_DWORD *)this + 11) = v7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, v7);
  }
  if ( *((_DWORD *)this + 11) )
    goto LABEL_14;
  v16 = *(_OWORD *)((char *)this - 56);
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  v8 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 128LL);
  if ( (char *)v9 == (char *)CAudioDeviceGraph::Pause )
    v10 = CAudioDeviceGraph::Pause(v8);
  else
    v10 = v9();
  v11 = v10;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v10 >> 31) & 0xFFFFFFFE) + 4) )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
      *((unsigned int *)this + 8),
      1,
      v10);
  }
  if ( v11 < 0 )
    v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v6;
  EtwEventActivityIdControl(4LL, &v17);
  if ( v11 >= 0 )
  {
LABEL_14:
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x34E,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v11,
    v13);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_17:
  EtwEventActivityIdControl(4LL, &v19);
  return (unsigned int)v11;
}
