/*
 * XREFs of ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180014190 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18008A2F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800164B0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x1800166B0 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800166C0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextValue@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAAEAPEAVCGainStage@@AEAPEAU__POSITION@@@Z @ 0x18008C68C (-GetNextValue@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTrait.c)
 *     WPP_SF_S_guid_ @ 0x1800906D4 (WPP_SF_S_guid_.c)
 *     WPP_SF_S_guid_g @ 0x180090750 (WPP_SF_S_guid_g.c)
 *     WPP_SF_Sg @ 0x18009086C (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::GetCurrentPolicyGain(
        CAudioSession *this,
        __int64 *a2,
        bool *a3,
        struct SessionPolicyGains *a4,
        __int64 *a5)
{
  float v5; // xmm6_4
  struct SessionPolicyGains *v6; // r15
  int v9; // r8d
  const unsigned __int16 *(__fastcall *v10)(CAudioSession *__hidden); // rax
  const unsigned __int16 *EndpointId; // rax
  const unsigned __int16 *(__fastcall *v12)(CAudioSession *__hidden); // rax
  const unsigned __int16 *v13; // rax
  __int64 v14; // rbx
  const unsigned __int16 *(__fastcall *v15)(CAudioSession *__hidden); // rax
  const unsigned __int16 *v16; // rax
  const unsigned __int16 *v17; // rdi
  __int64 (__fastcall *v18)(CAudioSession *__hidden, unsigned int *); // rax
  int ProcessId; // eax
  __int64 v20; // r13
  __int64 v21; // rax
  const WCHAR *v22; // r14
  const WCHAR *v23; // rcx
  const WCHAR *v24; // rcx
  __int64 v25; // rax
  const unsigned __int16 *(__fastcall *v26)(CAudioSession *__hidden); // rax
  __int64 Identifier; // rax
  const WCHAR *v28; // rcx
  __int64 v29; // rcx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 NextValue; // rax
  int v36; // r8d
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // edx
  int v40; // r8d
  __m128 v41; // xmm0
  __int64 v42; // rax
  unsigned int v43; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v48; // [rsp+58h] [rbp-A8h]
  _DWORD v49[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v51; // [rsp+70h] [rbp-90h]
  int v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+7Ch] [rbp-84h]
  void *v54; // [rsp+80h] [rbp-80h]
  int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+8Ch] [rbp-74h]
  const WCHAR *v57; // [rsp+90h] [rbp-70h]
  int v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+9Ch] [rbp-64h]
  const WCHAR *v60; // [rsp+A0h] [rbp-60h]
  int v61; // [rsp+A8h] [rbp-58h]
  int v62; // [rsp+ACh] [rbp-54h]
  struct SessionPolicyGains *v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  char *v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  char *v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  char *v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  char *v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  char *v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  const WCHAR *v75; // [rsp+110h] [rbp+10h]
  int v76; // [rsp+118h] [rbp+18h]
  int v77; // [rsp+11Ch] [rbp+1Ch]
  unsigned int *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]

  v5 = FLOAT_1_0;
  v6 = a4;
  Context = a4;
  if ( a2 )
    *a5 = *a2;
  else
    *a5 = 0LL;
  *a3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 504);
  v48 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 69) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 37, v9, *((_QWORD *)this + 108), SLOBYTE(DOUBLE_1_0));
    }
    if ( *((_QWORD *)this + 69) )
    {
      v31 = *((_DWORD *)this + 140);
      v32 = 0;
      if ( v31 )
      {
        v33 = *((_QWORD *)this + 68);
        while ( !*(_QWORD *)(v33 + 8LL * v32) )
        {
          if ( ++v32 >= v31 )
            goto LABEL_43;
        }
        v34 = *(_QWORD *)(v33 + 8LL * v32);
      }
      else
      {
LABEL_43:
        v34 = 0LL;
      }
      v46 = v34;
      if ( v34 )
      {
        do
        {
          NextValue = ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::GetNextValue(
                        (char *)this + 544,
                        &v46);
          v37 = *(_QWORD *)NextValue;
          v38 = *(_QWORD *)(*(_QWORD *)NextValue + 16LL) - MutePolicyGuid;
          if ( !v38 )
            v38 = *(_QWORD *)(v37 + 24) - *((_QWORD *)&MutePolicyGuid + 1);
          if ( v38 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 24LL))(v37) )
            {
              if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 39, v40, *((_QWORD *)this + 108), v37 + 16);
              }
              *a3 = 1;
            }
            else
            {
              v41 = (__m128)*(unsigned int *)(v37 + 48);
              if ( v5 > v41.m128_f32[0] )
              {
                if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_S_guid_g(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    v39,
                    v40,
                    *((_QWORD *)this + 108),
                    v37 + 16,
                    *(_OWORD *)&_mm_cvtps_pd(v41));
                }
                v42 = *(_QWORD *)(v37 + 40);
                v5 = *(float *)(v37 + 48);
                if ( v42 > *a5 )
                  *a5 = v42;
              }
            }
          }
          else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38, v36, *((_QWORD *)this + 108), v37 + 16);
          }
        }
        while ( v46 );
        v6 = (struct SessionPolicyGains *)Context;
      }
    }
  }
  if ( v48 )
    LeaveCriticalSection(lpCriticalSection);
  *((_DWORD *)v6 + 1) = 1065353216;
  *(float *)v6 = v5;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 109) + 120LL))(*((_QWORD *)this + 109)) )
    *((_DWORD *)v6 + 1) = 0;
  *((float *)v6 + 2) = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 109) + 192LL))(*((_QWORD *)this + 109));
  *((float *)v6 + 3) = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 109) + 200LL))(*((_QWORD *)this + 109));
  v10 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v10 == CAudioSession::GetEndpointId )
    EndpointId = CAudioSession::GetEndpointId(this);
  else
    EndpointId = v10(this);
  *((float *)v6 + 4) = (*(float (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 109) + 208LL))(
                         *((_QWORD *)this + 109),
                         EndpointId);
  v12 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v12 == CAudioSession::GetEndpointId )
    v13 = CAudioSession::GetEndpointId(this);
  else
    v13 = v12(this);
  *((float *)v6 + 5) = (*(float (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 109) + 216LL))(
                         *((_QWORD *)this + 109),
                         v13);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 109) + 72LL))(*((_QWORD *)this + 109));
  v15 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
  if ( v15 == CAudioSession::GetEndpointId )
    v16 = CAudioSession::GetEndpointId(this);
  else
    v16 = v15(this);
  v17 = v16;
  v18 = *(__int64 (__fastcall **)(CAudioSession *__hidden, unsigned int *))(*(_QWORD *)this + 128LL);
  if ( v18 == CAudioSession::GetProcessId )
    ProcessId = CAudioSession::GetProcessId(this, &v43);
  else
    ProcessId = v18(this, &v43);
  if ( ProcessId >= 0 )
  {
    InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
    if ( fPending )
    {
      Context = qword_18012BF30;
      qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
    }
    v20 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v20 > 5u )
    {
      LODWORD(v21) = 0;
      v22 = &word_1800EAD74;
      v23 = &word_1800EAD74;
      if ( v14 )
      {
        v23 = (const WCHAR *)v14;
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)(v14 + 2 * v21) );
      }
      v57 = v23;
      v59 = 0;
      v58 = 2 * v21 + 2;
      LODWORD(v21) = 0;
      v24 = &word_1800EAD74;
      if ( v17 )
      {
        v24 = v17;
        v21 = -1LL;
        do
          ++v21;
        while ( v17[v21] );
      }
      v60 = v24;
      v61 = 2 * v21 + 2;
      v62 = 0;
      v67 = (char *)v6 + 8;
      v69 = (char *)v6 + 12;
      v71 = (char *)v6 + 16;
      v73 = (char *)v6 + 20;
      v25 = *(_QWORD *)this;
      v63 = v6;
      v64 = 4LL;
      v65 = (char *)v6 + 4;
      v26 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(v25 + 64);
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      if ( v26 == CAudioSession::GetIdentifier )
        Identifier = (__int64)CAudioSession::GetIdentifier(this);
      else
        Identifier = (__int64)v26(this);
      v28 = (const WCHAR *)Identifier;
      LODWORD(Identifier) = 0;
      if ( v28 )
      {
        v22 = v28;
        Identifier = -1LL;
        do
          ++Identifier;
        while ( v28[Identifier] );
      }
      v75 = v22;
      v76 = 2 * Identifier + 2;
      v78 = &v43;
      v77 = 0;
      v79 = 4LL;
      v49[1] = 5;
      v51 = *(unsigned __int16 **)(v20 + 8);
      v49[0] = ((unsigned int)&unk_1800F8D82 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v29 = *(_QWORD *)(v20 + 32);
      v50 = 0LL;
      v52 = *v51;
      v54 = &unk_1800F8D8D;
      v53 = 2;
      v55 = 219;
      v56 = 1;
      EtwEventWriteTransfer(v29, v49, 0LL, 0LL);
    }
  }
  return 0LL;
}
