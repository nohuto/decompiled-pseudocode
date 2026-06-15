/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     _freea @ 0x1800183EC (_freea.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002B7F0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002FE90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034980 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  char v4; // r15
  float v5; // xmm6_4
  bool v6; // si
  CAudioStream *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CPerStreamVolumeAudioStream *v10; // rbx
  __int64 (__fastcall *v11)(CPerStreamVolumeAudioStream *, char, char); // rax
  LPCRITICAL_SECTION *v12; // rbx
  unsigned __int64 v13; // rax
  size_t v14; // rcx
  __int64 v15; // rax
  void *v16; // rsp
  int *v17; // rsi
  CPerStreamVolumeAudioStream *v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 (__fastcall *v21)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool); // rax
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  __int64 v26; // rdx
  void *v27; // r8
  LPVOID v28; // rax
  const struct _TlgProvider_t *v29; // r12
  struct _RTL_CRITICAL_SECTION *v30; // rax
  __int64 v31; // rcx
  const WCHAR *v32; // rax
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  int v35; // eax
  int *v36; // rax
  unsigned __int64 v37; // rax
  _DWORD *v38; // rax
  void *v39; // rcx
  _DWORD *v40; // r8
  __int64 v41; // rdx
  unsigned int i; // edx
  __int64 v43; // rcx
  CPerStreamVolumeAudioStream *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned __int64 v48; // rcx
  size_t v49; // rdx
  __int64 v50; // rax
  void *v51; // rsp
  _DWORD *v52; // rax
  bool v53; // zf
  _BYTE v54[32]; // [rsp+0h] [rbp-40h] BYREF
  UINT32 cData[2]; // [rsp+20h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-18h]
  int v57; // [rsp+40h] [rbp+0h] BYREF
  CPerStreamVolumeAudioStream *v58; // [rsp+48h] [rbp+8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+10h] BYREF
  char v60; // [rsp+58h] [rbp+18h]
  WINBOOL fPending; // [rsp+60h] [rbp+20h] BYREF
  int v62[2]; // [rsp+68h] [rbp+28h] BYREF
  union _RTL_RUN_ONCE *v63; // [rsp+70h] [rbp+30h] BYREF
  int v64; // [rsp+78h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+80h] [rbp+40h] BYREF
  int *v66; // [rsp+A0h] [rbp+60h]
  __int64 v67; // [rsp+A8h] [rbp+68h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+B0h] [rbp+70h]
  __int64 v69; // [rsp+B8h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+80h] BYREF
  WINBOOL *p_fPending; // [rsp+D0h] [rbp+90h]
  __int64 v72; // [rsp+D8h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+F8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  v58 = a2;
  *((_QWORD *)a2 + 9) = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
  v4 = 1;
  v60 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((float *)this + 212);
  v6 = *((_DWORD *)this + 213) != 0;
  if ( v60 )
    LeaveCriticalSection(lpCriticalSection);
  *(float *)&v57 = FLOAT_1_0;
  *(_QWORD *)v62 = 0LL;
  if ( v58 )
    v7 = (CPerStreamVolumeAudioStream *)((char *)v58 + 16);
  else
    v7 = 0LL;
  lpCriticalSection = 0LL;
  if ( InitOnceBeginInitialize(
         &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &fPending,
         (LPVOID *)&lpCriticalSection)
    && fPending )
  {
    v63 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    lpCriticalSection = (LPCRITICAL_SECTION)&qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v64 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v63, v26, v27);
  }
  GetPolicyVolumeForAudioStream(v8, v7, *(_QWORD *)&lpCriticalSection->LockCount, (float *)&v57, (__int64 *)v62);
  v10 = v58;
  *((_QWORD *)v58 + 13) = *(_QWORD *)v62;
  if ( *(float *)&v57 != *((float *)v10 + 25) )
  {
    *((float *)v10 + 25) = *(float *)&v57;
    if ( *((_QWORD *)v10 + 9) )
    {
      v28 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v9,
              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v29 = (const struct _TlgProvider_t *)*((_QWORD *)v28 + 1);
      if ( *(_DWORD *)v29 > 4u )
      {
        if ( TlgKeywordOn(*((TraceLoggingHProvider *)v28 + 1), 0x400000000000uLL) )
        {
          v67 = 4LL;
          v66 = &v57;
          v30 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v10 + 1) + 80LL))((__int64)v10 + 8);
          v31 = *((_QWORD *)v10 + 9);
          lpCriticalSection = v30;
          p_lpCriticalSection = &lpCriticalSection;
          v69 = 8LL;
          v32 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 64LL))(v31);
          TlgCreateWsz(&pDesc, v32);
          fPending = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 10) + 40LL))(*((_QWORD *)v10 + 10));
          p_fPending = &fPending;
          v72 = 4LL;
          TlgWrite(v29, &unk_180145537, v33, v34, 6u, &v65);
        }
      }
    }
  }
  v11 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, char, char))(*(_QWORD *)v58 + 104LL);
  if ( v11 == CPerStreamVolumeAudioStream::SetSessionMute )
  {
    *((_BYTE *)v58 + 664) = v6;
  }
  else
  {
    v35 = v11(v58, v6, 0);
    v23 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xABB,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v35,
        cData[0]);
LABEL_42:
      *((_QWORD *)v58 + 9) = 0LL;
      return v23;
    }
  }
  v12 = 0LL;
  lpCriticalSection = v2;
  v60 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v13 = 4LL * *((unsigned int *)this + 240);
  v14 = v13 + 16;
  if ( v13 + 16 < v13 )
    goto LABEL_79;
  if ( v14 <= 0x400 )
  {
    if ( v14 <= v13 )
      v14 = 0LL;
    v15 = v14 + 15;
    if ( v14 + 15 < v14 )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = &v57;
    if ( v54 == (_BYTE *)-64LL )
      goto LABEL_79;
    v57 = 52428;
    goto LABEL_19;
  }
  if ( v14 <= v13 )
    v14 = 0LL;
  v36 = (int *)malloc(v14);
  v17 = v36;
  if ( v36 )
  {
    *v36 = 56797;
LABEL_19:
    v17 += 4;
  }
  if ( !v17 )
  {
LABEL_79:
    v41 = 2755LL;
    goto LABEL_80;
  }
  v12 = (LPCRITICAL_SECTION *)v17;
  memcpy_0(v17, *((const void **)this + 121), 4LL * *((unsigned int *)this + 240));
  v18 = v58;
  if ( *((_QWORD *)this + 121) )
  {
    v19 = *((_DWORD *)this + 240);
    if ( v19 >= *((_DWORD *)v58 + 23) )
      goto LABEL_23;
  }
  v37 = 4LL * *((unsigned int *)v58 + 23);
  if ( !is_mul_ok(*((unsigned int *)v58 + 23), 4uLL) )
    v37 = -1LL;
  v38 = operator new[](v37, (const struct std::nothrow_t *)&std::nothrow);
  v39 = (void *)*((_QWORD *)this + 121);
  v40 = v38;
  *((_QWORD *)this + 121) = v38;
  if ( v39 )
  {
    operator delete(v39);
    v40 = (_DWORD *)*((_QWORD *)this + 121);
  }
  if ( v40 )
  {
    for ( i = 0; i < *((_DWORD *)this + 240); v40[v43] = v17[v43] )
      v43 = i++;
    v44 = v58;
    if ( i < *((_DWORD *)v58 + 23) )
    {
      v45 = *((_QWORD *)this + 121);
      do
      {
        v46 = i++;
        *(_DWORD *)(v45 + 4 * v46) = 1065353216;
        v44 = v58;
      }
      while ( i < *((_DWORD *)v58 + 23) );
    }
    v47 = *((_DWORD *)v44 + 23);
    *((_DWORD *)this + 240) = v47;
    v48 = 4LL * v47;
    v49 = v48 + 16;
    if ( v48 + 16 < v48 )
      v49 = 0LL;
    if ( v49 )
    {
      if ( v49 > 0x400 )
      {
        v52 = malloc(v49);
        v12 = (LPCRITICAL_SECTION *)v52;
        if ( v52 )
        {
          *v52 = 56797;
          v12 = (LPCRITICAL_SECTION *)(v52 + 4);
        }
      }
      else
      {
        v50 = v49 + 15;
        if ( v49 + 15 < v49 )
          v50 = 0xFFFFFFFFFFFFFF0LL;
        v51 = alloca(v50 & 0xFFFFFFFFFFFFFFF0uLL);
        v12 = (LPCRITICAL_SECTION *)&v57;
        if ( v54 != (_BYTE *)-64LL )
        {
          v57 = 52428;
          v12 = &lpCriticalSection;
        }
      }
    }
    else
    {
      v12 = 0LL;
    }
    v53 = v12 == (LPCRITICAL_SECTION *)v17;
    if ( v12 != (LPCRITICAL_SECTION *)v17 )
    {
      freea(v17);
      v53 = v12 == (LPCRITICAL_SECTION *)v17;
    }
    if ( v53 )
      v12 = (LPCRITICAL_SECTION *)v17;
    if ( v12 )
    {
      memcpy_0(v12, *((const void **)this + 121), 4LL * *((unsigned int *)this + 240));
      v18 = v58;
      v19 = *((_DWORD *)this + 240);
LABEL_23:
      if ( v60 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v18 = v58;
      }
      v20 = *(_QWORD *)v18;
      LOBYTE(pData) = 1;
      *(_QWORD *)cData = 0LL;
      v21 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool))(v20 + 96);
      if ( v21 == CPerStreamVolumeAudioStream::SetSessionVolume )
        v22 = CPerStreamVolumeAudioStream::SetSessionVolume(
                v18,
                v5,
                v19,
                (float *const)v12,
                *(__int64 *)cData,
                (bool)pData);
      else
        v22 = ((__int64 (__fastcall *)(CPerStreamVolumeAudioStream *, __int64 (__fastcall *)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool), _QWORD, LPCRITICAL_SECTION *))v21)(
                v18,
                CPerStreamVolumeAudioStream::SetSessionVolume,
                v19,
                v12);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF4,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v22,
          cData[0]);
      }
      else
      {
        v24 = CAudioSession::AddStream(this, v58);
        v23 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF6,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v24,
            cData[0]);
        }
        else
        {
          v4 = 0;
          v23 = 0;
        }
      }
      goto LABEL_30;
    }
    v41 = 2791LL;
  }
  else
  {
    v41 = 2769LL;
  }
LABEL_80:
  v23 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v41,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x8007000ELL,
    cData[0]);
  if ( v60 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_30:
  if ( v12 && *((_DWORD *)v12 - 4) == 56797 )
    free(v12 - 2);
  if ( v4 )
    goto LABEL_42;
  return v23;
}
