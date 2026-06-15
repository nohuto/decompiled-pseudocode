/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x180019970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000695C (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001B3AC (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18002465C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamInfo *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  int v8; // eax
  signed int StreamClassPolicyGainsForEndpoint; // ebx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  struct IAudioProcess *v13; // rbx
  unsigned int v14; // eax
  int PBMRelatedAudioStreamCategory; // eax
  const unsigned __int16 *v16; // rdi
  struct IAudioProcess *v17; // rbx
  int v18; // r15d
  int v19; // eax
  struct IAudioProcess *v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  TSSession *v23; // [rsp+40h] [rbp-20h] BYREF
  CStreamClassPolicyGains *v24[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v26; // [rsp+88h] [rbp+28h] BYREF

  v24[1] = (CStreamClassPolicyGains *)-2LL;
  v22 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v22);
  StreamClassPolicyGainsForEndpoint = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4C,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_19;
  }
  v21 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL))(a2, &v21);
  StreamClassPolicyGainsForEndpoint = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 79LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)v11);
    goto LABEL_17;
  }
  v13 = v21;
  v14 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 48LL))(a2);
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v13, v14, &v26);
  StreamClassPolicyGainsForEndpoint = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    v11 = (unsigned int)PBMRelatedAudioStreamCategory;
    v12 = 83LL;
    goto LABEL_15;
  }
  v16 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
  v17 = v21;
  v18 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 104LL))(v21);
  LODWORD(v17) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v17 + 48LL))(v17);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = TsSessionFromSessionId((unsigned int)v17, 1, 0LL, &v23);
  if ( v19 )
  {
    StreamClassPolicyGainsForEndpoint = (unsigned __int16)v19 | 0x80070000;
    if ( v19 <= 0 )
      StreamClassPolicyGainsForEndpoint = v19;
  }
  else
  {
    StreamClassPolicyGainsForEndpoint = TSSession::GetStreamClassPolicyGainsForEndpoint(v23, v16, v24);
    if ( StreamClassPolicyGainsForEndpoint >= 0 )
      StreamClassPolicyGainsForEndpoint = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                            v24[0],
                                            v26,
                                            v18,
                                            a3,
                                            a4,
                                            a5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( StreamClassPolicyGainsForEndpoint < 0 )
  {
    v11 = (unsigned int)StreamClassPolicyGainsForEndpoint;
    v12 = 87LL;
    goto LABEL_15;
  }
  StreamClassPolicyGainsForEndpoint = 0;
LABEL_17:
  if ( v21 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_19:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)StreamClassPolicyGainsForEndpoint;
}
