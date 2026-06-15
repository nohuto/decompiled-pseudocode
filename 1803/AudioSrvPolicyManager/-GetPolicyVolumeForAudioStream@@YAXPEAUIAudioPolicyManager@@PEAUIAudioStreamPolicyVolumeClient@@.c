/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002F700
 * Callers:
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002F2E0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180019C98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 *a1, __int64 a2, __int64 a3, float *a4)
{
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 v13; // rbx
  unsigned int v14; // eax
  float v15; // xmm0_4
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  float v21; // xmm0_4
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  float v27; // xmm7_4
  __int64 result; // rax
  float v29; // xmm0_4
  __int64 *v30; // [rsp+28h] [rbp-69h] BYREF
  float v31; // [rsp+30h] [rbp-61h] BYREF
  __int64 v32; // [rsp+38h] [rbp-59h] BYREF
  int v33; // [rsp+40h] [rbp-51h]
  int v34; // [rsp+44h] [rbp-4Dh]
  int v35; // [rsp+48h] [rbp-49h]
  int v36; // [rsp+4Ch] [rbp-45h]
  int v37; // [rsp+50h] [rbp-41h]
  float v38; // [rsp+54h] [rbp-3Dh]
  __int64 v39; // [rsp+58h] [rbp-39h]
  _BYTE v40[4]; // [rsp+60h] [rbp-31h] BYREF
  float v41; // [rsp+64h] [rbp-2Dh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]

  v39 = -2LL;
  v33 = 1065353216;
  v34 = 1065353216;
  v35 = 1065353216;
  v36 = 1065353216;
  v37 = 1065353216;
  v31 = 1.0;
  *a4 = 1.0;
  v30 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v30);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v7);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v30 + 120))(v30) )
    v8 = 0.0;
  else
    v8 = FLOAT_1_0;
  v38 = v8;
  v9 = v8 * *a4;
  *a4 = v9;
  if ( v9 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
      v10 = FLOAT_1_0;
    else
      v10 = (*(float (__fastcall **)(__int64 *))(*v30 + 200))(v30);
    v33 = LODWORD(v10);
    *a4 = v10 * *a4;
    v32 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v32);
    if ( v32
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v32 + 88LL))(v32, &v31, 0LL);
      *a4 = v31 * *a4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v30 + 456))(v30)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v30 + 464))(v30) )
    {
      *a4 = *a4 * 0.0;
    }
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    v11 = (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 360))(a1)
       && dword_180040130[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)]
        ? 0.0
        : FLOAT_1_0;
    v34 = LODWORD(v11);
    v12 = v11 * *a4;
    *a4 = v12;
    v13 = *a1;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v13 + 80))(a1, v14) )
      (*(void (__fastcall **)(__int64 *))(*v30 + 208))(v30);
    else
      v12 = FLOAT_1_0;
    v35 = LODWORD(v12);
    *a4 = v12 * *a4;
    v15 = (*(float (__fastcall **)(__int64 *, __int64))(*a1 + 368))(a1, a2) * *a4;
    *a4 = v15;
    if ( v15 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v16 = *a1;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v16 + 120))(a1, v17) )
        {
          v15 = FLOAT_1_0;
        }
        else
        {
          v18 = v30;
          v19 = *v30;
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v19 + 216))(v18, v20);
        }
        v36 = LODWORD(v15);
        v21 = v15 * *a4;
        *a4 = v21;
        v22 = *a1;
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v22 + 144))(a1, v23) )
        {
          v24 = v30;
          v25 = *v30;
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v25 + 224))(v24, v26);
        }
        else
        {
          v21 = FLOAT_1_0;
        }
        v37 = LODWORD(v21);
        *a4 = v21 * *a4;
        (*(void (__fastcall **)(__int64 *, __int64, _BYTE *))(*a1 + 56))(a1, a2, v40);
        v27 = FLOAT_1_0;
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*v30 + 184))(v30) )
        {
          if ( v40[0] )
            v27 = 0.0;
          else
            v27 = v41;
        }
        *a4 = v27 * *a4;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v29 = *a4;
    if ( *a4 != 0.0 )
      v29 = FLOAT_1_0;
    *a4 = v29;
  }
  if ( v30 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  return result;
}
