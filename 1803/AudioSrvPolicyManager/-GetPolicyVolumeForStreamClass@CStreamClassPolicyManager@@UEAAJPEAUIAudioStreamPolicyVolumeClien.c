/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x180023070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000B058 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x1800245F0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x180027DC4 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        bool *a3,
        float *a4,
        __int64 *a5)
{
  int v8; // eax
  signed int PBMRelatedAudioStreamCategory; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  struct IAudioProcess *v12; // rbx
  unsigned int v13; // eax
  const unsigned __int16 *v14; // rdi
  struct IAudioProcess *v15; // rbx
  int v16; // r15d
  int v17; // eax
  struct IAudioProcess *v19; // [rsp+30h] [rbp-20h] BYREF
  TSSession *v20; // [rsp+38h] [rbp-18h] BYREF
  CStreamClassPolicyGainsWrapper *v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v23; // [rsp+78h] [rbp+28h] BYREF

  v21[1] = (CStreamClassPolicyGainsWrapper *)-2LL;
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, struct IAudioProcess **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v19);
  PBMRelatedAudioStreamCategory = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 77LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)v10);
    goto LABEL_18;
  }
  v12 = v19;
  v13 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  v23 = 0;
  if ( v13 >= 0x15 )
  {
    PBMRelatedAudioStreamCategory = -2147024809;
LABEL_6:
    v11 = 81LL;
LABEL_15:
    v10 = (unsigned int)PBMRelatedAudioStreamCategory;
    goto LABEL_16;
  }
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v12, v13, &v23);
  if ( PBMRelatedAudioStreamCategory < 0 )
    goto LABEL_6;
  v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 40LL))(a2);
  v15 = v19;
  v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 104LL))(v19);
  LODWORD(v15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v15 + 48LL))(v15);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = TsSessionFromSessionId((unsigned int)v15, 1, 0LL, &v20);
  if ( v17 )
  {
    PBMRelatedAudioStreamCategory = (unsigned __int16)v17 | 0x80070000;
    if ( v17 <= 0 )
      PBMRelatedAudioStreamCategory = v17;
  }
  else
  {
    PBMRelatedAudioStreamCategory = TSSession::GetStreamClassPolicyGainsForEndpoint(v20, v14, v21);
    if ( PBMRelatedAudioStreamCategory >= 0 )
      PBMRelatedAudioStreamCategory = CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
                                        v21[0],
                                        v23,
                                        v16,
                                        a3,
                                        a4,
                                        a5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    v11 = 85LL;
    goto LABEL_15;
  }
  PBMRelatedAudioStreamCategory = 0;
LABEL_18:
  if ( v19 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)PBMRelatedAudioStreamCategory;
}
