/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800C1FF4
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x1800C55F0 (AudioServerNotifyStreamSuspensionState.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180060024 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::NotifyStreamSuspensionStateChanged(CVADServer *this, __int64 a2, unsigned __int8 a3)
{
  const struct _TlgProvider_t *v5; // rdi
  const WCHAR *v6; // rax
  wchar_t *ClientFriendlyName; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-69h] BYREF
  char v16; // [rsp+40h] [rbp-61h]
  __int128 v17; // [rsp+48h] [rbp-59h]
  __int64 v18; // [rsp+58h] [rbp-49h]
  __int128 v19; // [rsp+60h] [rbp-41h]
  char v20; // [rsp+70h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-29h] BYREF
  unsigned __int8 *v22; // [rsp+98h] [rbp-9h]
  int v23; // [rsp+A0h] [rbp-1h]
  int v24; // [rsp+A4h] [rbp+3h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+A8h] [rbp+7h]
  int v26; // [rsp+B0h] [rbp+Fh]
  int v27; // [rsp+B4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  unsigned __int8 v31; // [rsp+118h] [rbp+77h] BYREF

  v31 = a3;
  v18 = -2LL;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                    (__int64)this,
                                                    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v22 = &v31;
    v23 = 1;
    v24 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL)
                                                                               + 80LL))(*((_QWORD *)this + 24) + 8LL);
    p_lpCriticalSection = &lpCriticalSection;
    v26 = 8;
    v27 = 0;
    v6 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21));
    TlgCreateWsz(&pDesc, v6);
    ClientFriendlyName = CAudioStream::GetClientFriendlyName(*((CAudioStream **)this + 24));
    TlgCreateWsz(&v29, ClientFriendlyName);
    TlgWrite(v5, &unk_180145829, v8, v9, 6u, &pData);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *(_QWORD *)&v17 = this;
  *((_QWORD *)&v17 + 1) = &v31;
  v19 = v17;
  v20 = 1;
  if ( v31 )
  {
    v10 = (*(__int64 (__fastcall **)(CVADServer *, __int64, __int64))(*(_QWORD *)this + 72LL))(this, a2, 3LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1983LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_15;
    }
LABEL_14:
    v11 = 0;
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 104) != 1 )
    goto LABEL_14;
  if ( *((_BYTE *)this + 456) )
  {
    v10 = (*(__int64 (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)this + 88LL))(this, 3LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1991LL;
      goto LABEL_10;
    }
  }
  *(_QWORD *)&v17 = this;
  BYTE8(v17) = 1;
  v13 = (*(__int64 (__fastcall **)(CVADServer *, __int64, __int64))(*(_QWORD *)this + 64LL))(this, a2, 3LL);
  v11 = v13;
  if ( v13 >= 0 )
    goto LABEL_14;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7CA,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v13);
  if ( *((_BYTE *)this + 456) )
    (*(void (__fastcall **)(CVADServer *))(*(_QWORD *)this + 96LL))(this);
LABEL_15:
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 304LL))(
    *((_QWORD *)this + 21),
    *((_QWORD *)this + 24),
    v31);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
