/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004EB0
 * Callers:
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140006670 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x1400023A0 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F250 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140036474 (WPP_SF_DDD.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003B9D8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  _BOOL8 (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v6; // r9
  CAudioDeviceGraph *v7; // rcx
  __int64 (*v8)(void); // rax
  int v9; // eax
  int v10; // edi
  int v11; // esi
  unsigned int v12; // edx
  int v14; // [rsp+20h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  char v16; // [rsp+38h] [rbp-70h]
  __int128 v17; // [rsp+40h] [rbp-68h]
  __int128 v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+60h] [rbp-48h]
  __int128 v20; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v19 = *(_OWORD *)((char *)this - 56);
  v20 = v19;
  EtwEventActivityIdControl(4LL, &v20);
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_BOOL8 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)a2 + 136LL);
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
    v17 = *(_OWORD *)((char *)this - 56);
    v18 = v17;
    EtwEventActivityIdControl(4LL, &v18);
    v7 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
    v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 120LL);
    if ( (char *)v8 == (char *)CAudioDeviceGraph::Stop )
      v9 = CAudioDeviceGraph::Stop(v7);
    else
      v9 = v8();
    v10 = v9;
    v11 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
    {
      v12 = v9 < 0 ? 2 : 4;
      if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v12 )
      {
        v14 = 0;
        WPP_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          35LL,
          &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
          *((unsigned int *)this + 8));
      }
    }
    if ( v10 < 0 )
      v11 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 8) = v11;
    EtwEventActivityIdControl(4LL, &v18);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x371,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
        (const char *)(unsigned int)v10,
        v14);
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v20);
  return 0LL;
}
