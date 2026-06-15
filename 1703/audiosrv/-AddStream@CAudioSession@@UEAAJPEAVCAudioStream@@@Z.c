/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18008A2F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180019540 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?GetType@CAudioStream@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x180019E10 (-GetType@CAudioStream@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A150 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002553C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // rdi
  CAudioSession *v3; // rbx
  int updated; // esi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  CAudioStream *v8; // rcx
  void (*v9)(void); // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  struct CAudioStream **v14; // rcx
  unsigned int (__fastcall *v15)(CAudioStream *__hidden); // rax
  int v16; // esi
  __int64 (*v17)(void); // rax
  int Type; // eax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(CAudioSession *); // rax
  int *v22; // rbx
  __int64 v23; // rax
  const void *v24; // r9
  void *v25; // rcx
  size_t v26; // r8
  ATL::CAtlException *v27; // [rsp+38h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v28; // [rsp+40h] [rbp-58h] BYREF
  char v29; // [rsp+48h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-48h] BYREF
  CAudioSession *v31; // [rsp+58h] [rbp-40h]
  struct CAudioStream *v32; // [rsp+60h] [rbp-38h]

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 256LL))(g_PolicyManager);
  v28 = (LPCRITICAL_SECTION)((char *)v3 + 48);
  v29 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v28);
  updated = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 272);
  LOBYTE(v31) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = 0LL;
  v6 = *((_QWORD *)v3 + 40);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)v3 + 39);
      if ( *(struct CAudioStream **)(v7 + 8 * v5) == v2 )
        break;
      if ( ++v5 >= v6 )
        goto LABEL_11;
    }
    if ( v5 >= v6 )
      ATL::AtlThrowImpl(-2147024809);
    v8 = *(CAudioStream **)(v7 + 8 * v5);
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 72LL);
    if ( (char *)v9 == (char *)CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference(v8);
    else
      v9();
    v10 = v5 + 1;
    if ( v5 + 1 < v5 || v5 == -1LL || (v11 = *((_QWORD *)v3 + 40), v10 > v11) )
      ATL::AtlThrowImpl(-2147024809);
    v12 = v11 - v10;
    if ( v12 )
    {
      v23 = *((_QWORD *)v3 + 39);
      v24 = (const void *)(v23 + 8 * v10);
      v25 = (void *)(v23 + 8 * v5);
      v26 = 8 * v12;
      if ( 8 * v12 )
      {
        if ( !v25 || !v24 )
        {
          *(_DWORD *)_o__errno(v25, v12, v26, v24) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v25, v24, v26);
      }
    }
    --*((_QWORD *)v3 + 40);
    updated = 0;
  }
LABEL_11:
  if ( (_BYTE)v31 )
    LeaveCriticalSection(lpCriticalSection);
  if ( updated < 0 )
  {
    if ( v29 )
      LeaveCriticalSection(v28);
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v3, v2);
    }
    try
    {
      v13 = *((_QWORD *)v3 + 13);
      if ( v13 >= *((_QWORD *)v3 + 14)
        && !(unsigned __int8)ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer(
                               (char *)v3 + 96,
                               v13 + 1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      v14 = (struct CAudioStream **)(*((_QWORD *)v3 + 12) + 8 * v13);
      if ( v14 )
        *v14 = v2;
      ++*((_QWORD *)v3 + 13);
    }
    catch ( ATL::CAtlException *v27 )
    {
      v22 = (int *)v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        _o__resetstkoflw();
      updated = *v22;
      if ( *v22 < 0 )
      {
        if ( v29 )
          LeaveCriticalSection(v28);
        (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
        goto LABEL_47;
      }
      v3 = this;
      v2 = a2;
    }
    v15 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v2 + 64LL);
    if ( v15 == CAudioStream::AddClientReference )
      CAudioStream::AddClientReference(v2);
    else
      v15(v2);
    v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 104LL))(g_PolicyManager);
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 109) + 96LL))(*((_QWORD *)v3 + 109))
      && *((_DWORD *)v2 + 134) == v16 )
    {
      *((_DWORD *)v3 + 154) = 1;
    }
    if ( g_DuckingManager
      && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 109) + 96LL))(*((_QWORD *)v3 + 109))
      && *((_DWORD *)v3 + 154) )
    {
      *((_DWORD *)v2 + 134) = v16;
    }
    v17 = *(__int64 (**)(void))(*((_QWORD *)v2 + 1) + 48LL);
    if ( v17 == CAudioStream::GetType )
      Type = CAudioStream::GetType();
    else
      Type = v17();
    if ( !Type && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 109) + 344LL))(*((_QWORD *)v3 + 109)) )
      *((_DWORD *)v2 + 134) = 19;
    ++*((_DWORD *)v3 + 22);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        69LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((unsigned int *)v3 + 22));
    }
    updated = CAudioStream::UpdateStreamPriority(v2);
    *((_DWORD *)v2 + 21) = *((_DWORD *)v3 + 88);
    v19 = *((_QWORD *)v2 + 26);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    if ( v29 )
      LeaveCriticalSection(v28);
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
    v31 = v3;
    v32 = v2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v3 + 632));
    v20 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 16LL);
    if ( v20 == CAudioSession::Release )
      CAudioSession::Release(v3);
    else
      v20(v3);
    SetEvent(*((HANDLE *)v2 + 65));
  }
LABEL_47:
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::AddStream", 0xD30u, updated);
  return (unsigned int)updated;
}
