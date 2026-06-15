/*
 * XREFs of ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800262F4
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x18002CB50 (AudioServerNotifyStreamSuspensionState.c)
 * Callees:
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180019370 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18001B6D4 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026000 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::NotifyStreamSuspensionStateChanged(CVADServer *this, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rdi
  CAudioStream *v6; // rcx
  __int64 (*v7)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v9; // rcx
  __int64 (*v10)(void); // rax
  const WCHAR *Identifier; // rax
  wchar_t *ClientFriendlyName; // rax
  __int64 (__fastcall *v13)(__int64, __int64, int); // rax
  int v14; // eax
  unsigned int v15; // edi
  struct CAudioStream *v16; // rdx
  CAudioSession *v17; // rcx
  __int64 (__fastcall *v18)(CAudioSession *, struct CAudioStream *, int); // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+28h] [rbp-E0h]
  WINBOOL fPending; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending_8[4]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  CVADServer *v32; // [rsp+78h] [rbp-90h]
  char v33; // [rsp+80h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-80h]
  char v35; // [rsp+98h] [rbp-70h]
  unsigned __int16 *v36; // [rsp+A8h] [rbp-60h] BYREF
  int v37; // [rsp+B0h] [rbp-58h]
  int v38; // [rsp+B4h] [rbp-54h]
  void *v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C4h] [rbp-44h]
  unsigned __int8 *v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+D4h] [rbp-34h]
  __int64 *v45; // [rsp+D8h] [rbp-30h]
  int v46; // [rsp+E0h] [rbp-28h]
  int v47; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]
  unsigned __int8 v51; // [rsp+148h] [rbp+40h] BYREF

  v51 = a3;
  v31 = -2LL;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v42 = &v51;
    v43 = 1;
    v44 = 0;
    v6 = (CAudioStream *)(*((_QWORD *)this + 24) + 8LL);
    v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 80LL);
    if ( (char *)v7 == (char *)CAudioStream::GetUniqueStreamIdentifier )
      UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v6);
    else
      UniqueStreamIdentifier = v7();
    v28 = UniqueStreamIdentifier;
    v45 = &v28;
    v46 = 8;
    v47 = 0;
    v9 = (CAudioSession *)*((_QWORD *)this + 21);
    v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 64LL);
    if ( (char *)v10 == (char *)CAudioSession::GetIdentifier )
      Identifier = CAudioSession::GetIdentifier(v9);
    else
      Identifier = (const WCHAR *)v10();
    TlgCreateWsz(&pDesc, Identifier);
    ClientFriendlyName = CAudioStream::GetClientFriendlyName(*((CAudioStream **)this + 24));
    TlgCreateWsz(&v49, ClientFriendlyName);
    fPending_8[0] = ((unsigned int)&unk_18010F33F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    fPending_8[1] = 4;
    *(_QWORD *)&fPending_8[2] = 0LL;
    v36 = *(unsigned __int16 **)(v5 + 8);
    v37 = *v36;
    v38 = 2;
    v39 = &unk_18010F34A;
    v40 = 94;
    v41 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), fPending_8, 0LL, 0LL, 6, &v36);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  LOBYTE(v30) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *(_QWORD *)fPending_8 = this;
  *(_QWORD *)&fPending_8[2] = &v51;
  v34 = *(_OWORD *)fPending_8;
  v35 = 1;
  if ( v51 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)this + 72LL);
    if ( v13 == CVADServer::StopStream )
      v14 = CVADServer::StopStream((__int64)this, a2, 3);
    else
      v14 = v13((__int64)this, a2, 3);
    v15 = v14;
    if ( v14 >= 0 )
      goto LABEL_13;
    v20 = (unsigned int)v14;
    v21 = 1871LL;
    goto LABEL_28;
  }
  if ( *((_DWORD *)this + 100) != 1 )
  {
LABEL_13:
    v15 = 0;
    goto LABEL_14;
  }
  if ( *((_BYTE *)this + 440) )
  {
    v22 = (*(__int64 (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)this + 88LL))(this, 3LL);
    v15 = v22;
    if ( v22 < 0 )
    {
      v20 = (unsigned int)v22;
      v21 = 1879LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v21,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v20,
        v24);
      goto LABEL_14;
    }
  }
  v32 = this;
  v33 = 1;
  v23 = (*(__int64 (__fastcall **)(CVADServer *, __int64, __int64))(*(_QWORD *)this + 64LL))(this, a2, 3LL);
  v15 = v23;
  if ( v23 >= 0 )
  {
    if ( *((_BYTE *)this + 440) )
      (*(void (__fastcall **)(CVADServer *))(*(_QWORD *)this + 96LL))(this);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x75A,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v23,
    v24);
  if ( *((_BYTE *)this + 440) )
    (*(void (__fastcall **)(CVADServer *))(*(_QWORD *)this + 96LL))(this);
LABEL_14:
  v16 = (struct CAudioStream *)*((_QWORD *)this + 24);
  v17 = (CAudioSession *)*((_QWORD *)this + 21);
  v18 = *(__int64 (__fastcall **)(CAudioSession *, struct CAudioStream *, int))(*(_QWORD *)v17 + 296LL);
  if ( v18 == CAudioSession::NotifyStreamSuspensionStateChanged )
    CAudioSession::NotifyStreamSuspensionStateChanged(v17, v16, v51);
  else
    v18(v17, v16, v51);
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  return v15;
}
