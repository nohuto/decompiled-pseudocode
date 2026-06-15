/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400120F0
 * Callers:
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140004BF0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x140002380 (-IsActive@CSubmixImpl@@UEAA_NXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000E090 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140034B94 (WPP_SF_DDD.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003A72C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  bool (__fastcall *v4)(CSubmixImpl *); // rax
  bool IsActive; // al
  __int64 v6; // r9
  int v7; // eax
  CAudioDeviceGraph *v8; // rcx
  __int64 (*v9)(void); // rax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-19h] BYREF
  char v16; // [rsp+38h] [rbp-11h]
  __int128 v17; // [rsp+40h] [rbp-9h]
  __int128 v18; // [rsp+50h] [rbp+7h] BYREF
  __int128 v19; // [rsp+60h] [rbp+17h]
  __int128 v20; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v19 = *(_OWORD *)((char *)this - 56);
  v20 = v19;
  EtwEventActivityIdControl(4LL, &v20);
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
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
  v7 = v6;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids, v6);
    v7 = *((_DWORD *)this + 10);
  }
  if ( !v7 && *((_DWORD *)this + 8) )
  {
    v17 = *(_OWORD *)((char *)this - 56);
    v18 = v17;
    EtwEventActivityIdControl(4LL, &v18);
    v8 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
    v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 120LL);
    if ( (char *)v9 == (char *)CAudioDeviceGraph::Stop )
      v10 = CAudioDeviceGraph::Stop(v8);
    else
      v10 = v9();
    v11 = v10;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v10 >> 31) & 0xFFFFFFFE) + 4) )
    {
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids,
        *((unsigned int *)this + 8),
        0,
        v10);
    }
    if ( v11 < 0 )
      v12 = *((_DWORD *)this + 8);
    else
      v12 = 0;
    *((_DWORD *)this + 8) = v12;
    EtwEventActivityIdControl(4LL, &v18);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x36F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
        (const char *)(unsigned int)v11,
        v14);
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v20);
  return 0LL;
}
