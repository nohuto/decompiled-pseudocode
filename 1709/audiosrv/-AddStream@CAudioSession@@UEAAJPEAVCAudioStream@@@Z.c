/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180070260 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001B42C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x18001CAD0 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18001D380 (-GetType@CAudioStream@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18001D390 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x180030228 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800317A8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // rdi
  CAudioSession *v3; // rsi
  unsigned int (__fastcall *v4)(CAudioStream *__hidden); // rax
  __int64 (__fastcall *v5)(CAudioStream *__hidden, struct IAudioProcess **); // rax
  CAudioStream *v6; // rcx
  int v7; // r15d
  __int64 (__fastcall *v8)(char *); // rax
  char *v9; // rcx
  int Type; // eax
  int updated; // r14d
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(CAudioSession *); // rax
  void *v14; // rdx
  ATL::CAtlException *v16; // rbx
  ATL::CAtlException *v17; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-58h] BYREF
  CAudioSession *v19; // [rsp+48h] [rbp-50h]
  struct CAudioStream *v20; // [rsp+50h] [rbp-48h]
  struct CAudioStream *v22; // [rsp+A8h] [rbp+10h] BYREF
  int v23; // [rsp+B0h] [rbp+18h]
  struct IAudioProcess *v24; // [rsp+B8h] [rbp+20h] BYREF

  v22 = a2;
  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 256LL))(g_PolicyManager);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 48);
  LOBYTE(v19) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v3, v2);
  }
  try
  {
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)v3 + 96, &v22);
  }
  catch ( ATL::CAtlException *v17 )
  {
    v16 = v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v16;
    updated = v23;
    if ( v23 < 0 )
    {
      if ( (_BYTE)v19 )
        LeaveCriticalSection(lpCriticalSection);
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
      goto LABEL_27;
    }
    v3 = this;
    v2 = v22;
  }
  v4 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 56LL);
  if ( v4 == CAudioStream::AddClientReference )
    CAudioStream::AddClientReference(v2);
  else
    v4(v2);
  v24 = 0LL;
  v5 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioProcess **))(*((_QWORD *)v2 + 1) + 24LL);
  v6 = (struct CAudioStream *)((char *)v2 + 8);
  if ( v5 == CAudioStream::GetProcess )
    CAudioStream::GetProcess(v6, &v24);
  else
    v5(v6, &v24);
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 104LL))(g_PolicyManager);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 96LL))(v24)
    && *((_DWORD *)v2 + 134) == v7 )
  {
    *((_DWORD *)v3 + 136) = 1;
  }
  if ( g_DuckingManager
    && !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 96LL))(v24)
    && *((_DWORD *)v3 + 136) )
  {
    *((_DWORD *)v2 + 134) = v7;
  }
  v8 = *(__int64 (__fastcall **)(char *))(*((_QWORD *)v2 + 1) + 56LL);
  v9 = (char *)v2 + 8;
  if ( (char *)v8 == (char *)CAudioStream::GetType )
    Type = CAudioStream::GetType(v9);
  else
    Type = v8(v9);
  if ( !Type && (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 352LL))(v24) )
    *((_DWORD *)v2 + 134) = 19;
  ++*((_DWORD *)v3 + 22);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      62LL,
      &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      *((unsigned int *)v3 + 22));
  }
  updated = CAudioStream::UpdateStreamPriority(v2);
  *((_DWORD *)v2 + 20) = *((_DWORD *)v3 + 70);
  v12 = *((_QWORD *)v2 + 26);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  if ( v24 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( (_BYTE)v19 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  lpCriticalSection = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
  v19 = v3;
  v20 = v2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
    (LPCRITICAL_SECTION)v3 + 14,
    (void (__fastcall ***)(_QWORD, CAudioSessionManager **))&lpCriticalSection);
  v13 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 16LL);
  if ( v13 == CAudioSession::Release )
    CAudioSession::Release(v3);
  else
    v13(v3);
  wil::details::SetEvent(*((wil::details **)v2 + 65), v14);
LABEL_27:
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::AddStream", 0xCFEu, updated);
  return (unsigned int)updated;
}
