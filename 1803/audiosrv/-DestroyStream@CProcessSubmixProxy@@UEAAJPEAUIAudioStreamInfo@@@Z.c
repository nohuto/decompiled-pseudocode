/*
 * XREFs of ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800448C0
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001EDF0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18002DFC0 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18002F0B0 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18002F680 (-IsLazyPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18002F690 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18002F6A0 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18002F700 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetStreamPriority@CAudioStream@@UEAAKXZ @ 0x18002F710 (-GetStreamPriority@CAudioStream@@UEAAKXZ.c)
 *     ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18002F720 (-GetType@CAudioStream@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800CAFA4 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800CB02C (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800CB0B0 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::DestroyStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  CProcessSubmixProxy *v10; // rax
  __int64 (__fastcall *v11)(CAudioStream *); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 v13; // rcx
  bool (__fastcall *v14)(CAudioStream *); // rax
  bool IsStrictPeriodicityClient; // al
  bool (__fastcall *v16)(CAudioStream *); // rax
  bool IsFormatSensitiveClient; // al
  bool (__fastcall *v18)(CAudioStream *); // rax
  bool IsLazyPeriodicityClient; // al
  __int64 (__fastcall *v20)(__int64); // rax
  int Type; // eax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(CAudioStream *, struct IStreamGroupProxy **); // rax
  __int64 (__fastcall *v24)(CAudioStream *); // rax
  unsigned int StreamPriority; // eax
  unsigned int v26; // r12d
  unsigned __int64 v27; // rcx
  struct IAudioStreamInfo **v28; // rsi
  struct IAudioStreamInfo **v29; // rdx
  unsigned __int64 v30; // rax
  struct IAudioStreamInfo **v31; // rdx
  __int64 (__fastcall *v32)(CAudioStream *, struct SYSTEM_AUDIO_STREAM *, int); // rax
  __int64 (__fastcall *v33)(__int64, unsigned int, unsigned int, unsigned int); // rax
  TLG_PENABLECALLBACK v35; // rdx
  PVOID v36; // r8
  int v37; // [rsp+28h] [rbp-E0h]
  struct IStreamGroupProxy *v38; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  CProcessSubmixProxy *v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h]
  _BYTE v46[96]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 *v47; // [rsp+D8h] [rbp-30h] BYREF
  int v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+E4h] [rbp-24h]
  void *v50; // [rsp+E8h] [rbp-20h]
  int v51; // [rsp+F0h] [rbp-18h]
  int v52; // [rsp+F4h] [rbp-14h]
  CProcessSubmixProxy **v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  __int64 *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  __int64 *v57; // [rsp+118h] [rbp+10h]
  __int64 v58; // [rsp+120h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v3 = (__int64 *)*((_QWORD *)this + 5);
  v5 = *v3;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v3, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v37);
  v8 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    qword_18018A2A8 = (__int64)qword_18018A2B8;
    byte_18018A2B0 = 1;
    TraceLoggingRegisterEx(qword_18018A2B8, v35, v36);
    dword_18018A2B4 = 1;
    (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v54 = 8LL;
    v56 = 8LL;
    v10 = 0LL;
    if ( this != (CProcessSubmixProxy *)8 )
      v10 = this;
    v41 = v10;
    v53 = &v41;
    v42 = *((_QWORD *)this + 24);
    v55 = &v42;
    v11 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 80LL);
    if ( v11 == CAudioStream::GetUniqueStreamIdentifier )
      UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a2);
    else
      UniqueStreamIdentifier = v11(a2);
    v43 = UniqueStreamIdentifier;
    v57 = &v43;
    v58 = 8LL;
    v44[1] = 4;
    v47 = *(unsigned __int16 **)(v9 + 8);
    v44[0] = ((unsigned int)&unk_180145A25 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v13 = *(_QWORD *)(v9 + 32);
    v45 = 0LL;
    v48 = *v47;
    v50 = &unk_180145A30;
    v49 = 2;
    v51 = 72;
    v52 = 1;
    EtwEventWriteTransfer(v13, v44, 0LL, 0LL, 5, &v47, (_DWORD)v38);
  }
  v14 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 136LL);
  if ( v14 == CAudioStream::IsStrictPeriodicityClient )
    IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(a2);
  else
    IsStrictPeriodicityClient = v14(a2);
  if ( IsStrictPeriodicityClient )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  v16 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 144LL);
  if ( v16 == CAudioStream::IsFormatSensitiveClient )
    IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(a2);
  else
    IsFormatSensitiveClient = v16(a2);
  if ( IsFormatSensitiveClient )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  v18 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 152LL);
  if ( v18 == CAudioStream::IsLazyPeriodicityClient )
    IsLazyPeriodicityClient = CAudioStream::IsLazyPeriodicityClient(a2);
  else
    IsLazyPeriodicityClient = v18(a2);
  if ( IsLazyPeriodicityClient )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
  if ( v20 == CAudioStream::GetType )
    Type = CAudioStream::GetType((__int64)a2);
  else
    Type = v20((__int64)a2);
  if ( Type != 2 )
    --*((_DWORD *)this + 28);
  v22 = *(_QWORD *)a2;
  v38 = 0LL;
  v23 = *(__int64 (__fastcall **)(CAudioStream *, struct IStreamGroupProxy **))(v22 + 120);
  if ( v23 == CAudioStream::GetStreamGroup )
    CAudioStream::GetStreamGroup(a2, &v38);
  else
    v23(a2, &v38);
  v24 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 72LL);
  if ( v24 == CAudioStream::GetStreamPriority )
    StreamPriority = CAudioStream::GetStreamPriority(a2);
  else
    StreamPriority = v24(a2);
  v26 = StreamPriority;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v27 = *((_QWORD *)this + 22);
  v28 = (struct IAudioStreamInfo **)*((_QWORD *)this + 21);
  if ( v28 != (struct IAudioStreamInfo **)v27 )
  {
    do
    {
      if ( *v28 == a2 )
        break;
      ++v28;
    }
    while ( v28 != (struct IAudioStreamInfo **)v27 );
    if ( v28 != (struct IAudioStreamInfo **)v27 )
    {
      v29 = v28 + 1;
      v30 = (v27 - (unsigned __int64)(v28 + 1) + 7) >> 3;
      if ( (unsigned __int64)(v28 + 1) > v27 )
        v30 = 0LL;
      if ( v30 )
      {
        do
        {
          if ( *v29 != a2 )
            *v28++ = *v29;
          ++v29;
          ++v8;
        }
        while ( v8 != v30 );
      }
    }
  }
  v31 = (struct IAudioStreamInfo **)*((_QWORD *)this + 22);
  if ( v28 != v31 )
  {
    memmove(v28, v31, 0LL);
    *((_QWORD *)this + 22) = v28;
  }
  memset_0(v46, 0, sizeof(v46));
  v32 = *(__int64 (__fastcall **)(CAudioStream *, struct SYSTEM_AUDIO_STREAM *, int))(*(_QWORD *)a2 + 112LL);
  if ( v32 == CAudioStream::SetAudioHandle )
    CAudioStream::SetAudioHandle(a2, (struct SYSTEM_AUDIO_STREAM *)v46, 0);
  else
    v32(a2, (struct SYSTEM_AUDIO_STREAM *)v46, 0);
  if ( this != (CProcessSubmixProxy *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v33 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v38 + 216LL);
  if ( v33 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
    CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v38, 2u, 0xFFFFFFFF, v26);
  else
    v33((__int64)v38, 2u, 0xFFFFFFFF, v26);
  if ( v38 )
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v38 + 16LL))(v38);
  return 0LL;
}
