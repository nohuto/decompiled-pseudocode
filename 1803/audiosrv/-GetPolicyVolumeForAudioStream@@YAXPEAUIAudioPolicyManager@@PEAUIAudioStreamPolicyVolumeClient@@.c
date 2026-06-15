/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002FE90
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180096968 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 * Callees:
 *     ?GetEndpointId@CAudioStream@@UEAAPEBGXZ @ 0x18002DF30 (-GetEndpointId@CAudioStream@@UEAAPEBGXZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x180047B00 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 a1, CAudioStream *a2, __int64 a3, float *a4, __int64 *a5)
{
  struct IAudioPolicyManager *v8; // r15
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm0_4
  _BOOL8 (__fastcall *v12)(CAudioStream *); // rax
  void (*v13)(void); // rax
  float v14; // xmm0_4
  bool (__fastcall *v15)(CAudioStream *); // rax
  void (__fastcall *v17)(CAudioSession *__hidden, float *, __int64 *); // rax
  CAudioSession *v18; // rcx
  void (*v19)(void); // rax
  char *v20; // rbx
  float v21; // xmm0_4
  __int64 v22; // rbx
  unsigned int v23; // eax
  float v24; // xmm0_4
  float v25; // xmm0_4
  const unsigned __int16 *(__fastcall *v26)(CAudioSession *__hidden); // rax
  CAudioStream *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 *v31; // rbx
  const unsigned __int16 *(__fastcall *v32)(CAudioStream *); // rax
  CAudioStream *v33; // rcx
  __int64 v34; // rdx
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rbx
  unsigned int v38; // eax
  float v39; // xmm6_4
  __int64 v40; // rax
  float v41; // xmm6_4
  float v42; // xmm0_4
  __int64 result; // rax
  __int64 v44; // rax
  const WCHAR *v45; // rbx
  const WCHAR *v46; // rdx
  __int64 v47; // rcx
  const unsigned __int16 *(__fastcall *v48)(CAudioStream *); // rax
  __int64 EndpointId; // rax
  const WCHAR *v50; // rcx
  void (__fastcall *v51)(CAudioSession *__hidden); // rax
  CAudioSession *v52; // rcx
  __int64 *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  float v56; // xmm0_4
  int v57; // [rsp+28h] [rbp-E0h]
  __int64 *v58; // [rsp+38h] [rbp-D0h] BYREF
  float v59; // [rsp+40h] [rbp-C8h] BYREF
  int v60; // [rsp+48h] [rbp-C0h] BYREF
  int v61; // [rsp+4Ch] [rbp-BCh] BYREF
  int v62; // [rsp+50h] [rbp-B8h] BYREF
  int v63; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h] BYREF
  CAudioSession *v65; // [rsp+60h] [rbp-A8h] BYREF
  float v66; // [rsp+68h] [rbp-A0h] BYREF
  int v67; // [rsp+6Ch] [rbp-9Ch] BYREF
  _DWORD v68[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v69; // [rsp+80h] [rbp-88h]
  __int64 v70; // [rsp+88h] [rbp-80h]
  char v71[4]; // [rsp+90h] [rbp-78h] BYREF
  float v72; // [rsp+94h] [rbp-74h]
  char v73; // [rsp+98h] [rbp-70h]
  float v74; // [rsp+9Ch] [rbp-6Ch]
  __int64 v75; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v76; // [rsp+A8h] [rbp-60h] BYREF
  int v77; // [rsp+B0h] [rbp-58h]
  int v78; // [rsp+B4h] [rbp-54h]
  void *v79; // [rsp+B8h] [rbp-50h]
  int v80; // [rsp+C0h] [rbp-48h]
  int v81; // [rsp+C4h] [rbp-44h]
  const WCHAR *v82; // [rsp+C8h] [rbp-40h]
  int v83; // [rsp+D0h] [rbp-38h]
  int v84; // [rsp+D4h] [rbp-34h]
  const WCHAR *v85; // [rsp+D8h] [rbp-30h]
  int v86; // [rsp+E0h] [rbp-28h]
  int v87; // [rsp+E4h] [rbp-24h]
  float *v88; // [rsp+E8h] [rbp-20h]
  __int64 v89; // [rsp+F0h] [rbp-18h]
  int *v90; // [rsp+F8h] [rbp-10h]
  __int64 v91; // [rsp+100h] [rbp-8h]
  float *v92; // [rsp+108h] [rbp+0h]
  __int64 v93; // [rsp+110h] [rbp+8h]
  int *v94; // [rsp+118h] [rbp+10h]
  __int64 v95; // [rsp+120h] [rbp+18h]
  int *v96; // [rsp+128h] [rbp+20h]
  __int64 v97; // [rsp+130h] [rbp+28h]
  int *v98; // [rsp+138h] [rbp+30h]
  __int64 v99; // [rsp+140h] [rbp+38h]
  __int64 *v100; // [rsp+148h] [rbp+40h]
  __int64 v101; // [rsp+150h] [rbp+48h]
  int *v102; // [rsp+158h] [rbp+50h]
  __int64 v103; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v70 = -2LL;
  v8 = g_PolicyManager;
  v60 = 1065353216;
  v61 = 1065353216;
  v62 = 1065353216;
  v63 = 1065353216;
  LODWORD(v64) = 1065353216;
  v59 = 1.0;
  *a4 = 1.0;
  v58 = 0LL;
  v9 = (*(__int64 (__fastcall **)(CAudioStream *, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v58);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v9,
      v57);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v58 + 120))(v58) )
    v10 = 0.0;
  else
    v10 = FLOAT_1_0;
  v66 = v10;
  v11 = v10 * *a4;
  *a4 = v11;
  if ( v11 > 0.0 )
  {
    v12 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 72LL);
    if ( v12 == CAudioStream::GetDataFlow )
    {
      v13 = *(void (**)(void))(*((_QWORD *)a2 - 1) + 64LL);
      if ( (char *)v13 != (char *)CAudioStream::IsCaptureStream )
        v13();
    }
    else if ( v12(a2) == 2 )
    {
      goto LABEL_25;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2) )
      v14 = FLOAT_1_0;
    else
      v14 = (*(float (__fastcall **)(__int64 *))(*v58 + 200))(v58);
    v60 = LODWORD(v14);
    *a4 = v14 * *a4;
    v65 = 0LL;
    (*(void (__fastcall **)(CAudioStream *, CAudioSession **))(*(_QWORD *)a2 + 32LL))(a2, &v65);
    if ( v65 && !(*(unsigned __int8 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2) )
    {
      v15 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 48LL);
      if ( !(v15 == CAudioStream::IsUnduckable ? *((_BYTE *)a2 + 34) : ((__int64 (__fastcall *)(CAudioStream *))v15)(a2)) )
      {
        v17 = *(void (__fastcall **)(CAudioSession *__hidden, float *, __int64 *))(*(_QWORD *)v65 + 88LL);
        if ( v17 == CAudioSession::GetDuckingManagerGain )
          CAudioSession::GetDuckingManagerGain(v65, &v59, a5);
        else
          v17(v65, &v59, a5);
        *a4 = v59 * *a4;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v58 + 456))(v58)
      || !(*(unsigned __int8 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v58 + 464))(v58) )
    {
      *a4 = *a4 * 0.0;
    }
    v18 = v65;
    if ( v65 )
    {
      v19 = *(void (**)(void))(*(_QWORD *)v65 + 16LL);
      if ( (char *)v19 == (char *)CAudioSession::Release )
      {
        v20 = (char *)v65 + 32;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v65 + 10, 0xFFFFFFFF) == 1 )
        {
          v51 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v20 + 32LL);
          v52 = (CAudioSession *)((char *)v18 + 32);
          if ( v51 == CAudioSession::FinalRelease )
            CAudioSession::FinalRelease(v52);
          else
            v51(v52);
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
        }
      }
      else
      {
        v19();
      }
    }
  }
LABEL_25:
  if ( *a4 <= 0.0 || (*(unsigned int (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 56LL))(a2) == 21 )
    goto LABEL_53;
  v21 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v8 + 360LL))(v8)
     && dword_180151400[(*(unsigned int (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 56LL))(a2)]
      ? 0.0
      : FLOAT_1_0;
  v61 = LODWORD(v21);
  *a4 = v21 * *a4;
  v22 = *(_QWORD *)v8;
  v23 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 56LL))(a2);
  v24 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v22 + 80))(v8, v23)
      ? (*(float (__fastcall **)(__int64 *))(*v58 + 208))(v58)
      : FLOAT_1_0;
  v62 = LODWORD(v24);
  *a4 = v24 * *a4;
  v25 = (*(float (__fastcall **)(struct IAudioPolicyManager *, CAudioStream *))(*(_QWORD *)v8 + 368LL))(v8, a2) * *a4;
  *a4 = v25;
  if ( v25 <= 0.0 )
    goto LABEL_53;
  v26 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)a2 + 40LL);
  if ( v26 == CAudioStream::GetEndpointId )
  {
    v27 = (CAudioStream *)*((_QWORD *)a2 + 7);
    v26 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v27 + 72LL);
    if ( v26 == CAudioSession::GetEndpointId )
    {
      v28 = *((_QWORD *)v27 + 82);
      goto LABEL_35;
    }
  }
  else
  {
    v27 = a2;
  }
  v28 = (__int64)v26(v27);
LABEL_35:
  if ( !v28 )
    goto LABEL_53;
  v29 = *(_QWORD *)v8;
  v30 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 56LL))(a2);
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v29 + 120))(v8, v30) )
  {
    v35 = FLOAT_1_0;
    goto LABEL_41;
  }
  v31 = v58;
  v32 = *(const unsigned __int16 *(__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 40LL);
  if ( v32 != CAudioStream::GetEndpointId )
  {
    v33 = a2;
    goto LABEL_87;
  }
  v33 = (CAudioStream *)*((_QWORD *)a2 + 7);
  v32 = *(const unsigned __int16 *(__fastcall **)(CAudioStream *))(*(_QWORD *)v33 + 72LL);
  if ( v32 != CAudioSession::GetEndpointId )
  {
LABEL_87:
    v34 = (__int64)v32(v33);
    goto LABEL_40;
  }
  v34 = *((_QWORD *)v33 + 82);
LABEL_40:
  v35 = (*(float (__fastcall **)(__int64 *, __int64))(*v31 + 216))(v31, v34);
LABEL_41:
  v63 = LODWORD(v35);
  v36 = v35 * *a4;
  *a4 = v36;
  v37 = *(_QWORD *)v8;
  v38 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 56LL))(a2);
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v37 + 144))(v8, v38) )
  {
    v53 = v58;
    v54 = *v58;
    v55 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 40LL))(a2);
    (*(void (__fastcall **)(__int64 *, __int64))(v54 + 224))(v53, v55);
  }
  else
  {
    v36 = FLOAT_1_0;
  }
  *(float *)&v64 = v36;
  *a4 = v36 * *a4;
  (*(void (__fastcall **)(struct IAudioPolicyManager *, CAudioStream *, char *))(*(_QWORD *)v8 + 56LL))(v8, a2, v71);
  v39 = FLOAT_1_0;
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v58 + 184))(v58) )
  {
    v39 = v71[0] ? 0.0 : v72;
    if ( a5 )
    {
      v40 = *a5;
      if ( *a5 <= v75 )
        v40 = v75;
      *a5 = v40;
    }
  }
  v41 = v39 * *a4;
  *a4 = v41;
  if ( v73 )
    v42 = 0.0;
  else
    v42 = v74;
  *a4 = v41 * v42;
LABEL_53:
  result = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v56 = *a4;
    if ( *a4 != 0.0 )
      v56 = FLOAT_1_0;
    *a4 = v56;
  }
  if ( a3 && *(_DWORD *)a3 > 4u )
  {
    v44 = (*(__int64 (__fastcall **)(__int64 *))(*v58 + 72))(v58);
    v45 = &word_180133238;
    v46 = &word_180133238;
    LODWORD(v47) = 0;
    if ( v44 )
    {
      v46 = (const WCHAR *)v44;
      v47 = -1LL;
      do
        ++v47;
      while ( *(_WORD *)(v44 + 2 * v47) );
    }
    v82 = v46;
    v83 = 2 * v47 + 2;
    v84 = 0;
    v48 = *(const unsigned __int16 *(__fastcall **)(CAudioStream *))(*(_QWORD *)a2 + 40LL);
    if ( v48 == CAudioStream::GetEndpointId )
      EndpointId = (__int64)CAudioStream::GetEndpointId(a2);
    else
      EndpointId = (__int64)v48(a2);
    v50 = (const WCHAR *)EndpointId;
    LODWORD(EndpointId) = 0;
    if ( v50 )
    {
      v45 = v50;
      EndpointId = -1LL;
      do
        ++EndpointId;
      while ( v50[EndpointId] );
    }
    v85 = v45;
    v86 = 2 * EndpointId + 2;
    v87 = 0;
    v88 = &v66;
    v89 = 4LL;
    v90 = &v60;
    v91 = 4LL;
    v92 = &v59;
    v93 = 4LL;
    v94 = &v61;
    v95 = 4LL;
    v96 = &v62;
    v97 = 4LL;
    v98 = &v63;
    v99 = 4LL;
    v100 = &v64;
    v101 = 4LL;
    v67 = (*(__int64 (__fastcall **)(__int64 *))(*v58 + 40))(v58);
    v102 = &v67;
    v103 = 4LL;
    v68[0] = ((unsigned int)&unk_1801482FC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v68[1] = 4;
    v69 = 0LL;
    v76 = *(unsigned __int16 **)(a3 + 8);
    v77 = *v76;
    v78 = 2;
    v79 = &unk_180148307;
    v80 = 207;
    v81 = 1;
    result = EtwEventWriteTransfer(*(_QWORD *)(a3 + 32), v68, 0LL, 0LL, 12, &v76, (_DWORD)v58);
  }
  if ( v58 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v58 + 16))(v58);
  return result;
}
