/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F100
 * Callers:
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010740 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x140001660 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C200 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140035FA8 (WPP_SF_DDD.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003BD2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v6; // r9
  CAudioDeviceGraph *v7; // rcx
  __int64 (*v8)(void); // rax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-19h] BYREF
  char v15; // [rsp+38h] [rbp-11h]
  __int128 v16; // [rsp+40h] [rbp-9h]
  __int128 v17; // [rsp+50h] [rbp+7h] BYREF
  __int128 v18; // [rsp+60h] [rbp+17h]
  __int128 v19; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v18 = *(_OWORD *)((char *)this - 56);
  v19 = v18;
  EtwEventActivityIdControl(4LL, &v19);
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(bool (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 136LL);
  if ( v4 == CSubmixImpl::IsActive )
    IsActive = CSubmixImpl::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)this + 104LL))(
      this,
      a2);
  v6 = (unsigned int)(*((_DWORD *)this + 10) - 1);
  *((_DWORD *)this + 10) = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, v6);
  }
  if ( !*((_DWORD *)this + 10) && *((_DWORD *)this + 8) )
  {
    v16 = *(_OWORD *)((char *)this - 56);
    v17 = v16;
    EtwEventActivityIdControl(4LL, &v17);
    v7 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
    v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 120LL);
    if ( (char *)v8 == (char *)CAudioDeviceGraph::Stop )
      v9 = CAudioDeviceGraph::Stop(v7);
    else
      v9 = v8();
    v10 = v9;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v9 >> 31) & 0xFFFFFFFE) + 4) )
    {
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        *((unsigned int *)this + 8),
        0,
        v9);
    }
    if ( v10 < 0 )
      v11 = *((_DWORD *)this + 8);
    else
      v11 = 0;
    *((_DWORD *)this + 8) = v11;
    EtwEventActivityIdControl(4LL, &v17);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x371,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
        (const char *)(unsigned int)v10,
        v13);
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v19);
  return 0LL;
}
