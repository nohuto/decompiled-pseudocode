/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180019D70
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B070 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Idd @ 0x1800D3D24 (WPP_SF_Idd.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800D59E0 (-CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecPara.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        LPVOID a5,
        __int128 *a6,
        char a7,
        char a8,
        unsigned __int16 *Src,
        int a10,
        LPVOID **a11)
{
  int v14; // eax
  int v15; // esi
  unsigned __int16 *v16; // rsi
  __int64 v17; // rdi
  void *v18; // rax
  void *v19; // rbx
  void *v20; // rdi
  LPVOID *v21; // rbx
  LPVOID v22; // rsi
  void *v23; // rsi
  __int64 v24; // r8
  __int128 *v25; // rax
  unsigned __int8 v26; // bp
  unsigned __int8 v27; // r14
  LPVOID *v28; // rsi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int Instance; // eax
  int v35; // [rsp+20h] [rbp-58h]
  void *v36; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+38h] [rbp-40h]
  __int128 v38; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *pv; // [rsp+80h] [rbp+8h]

  v37 = -2LL;
  a5 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x369,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v14,
      v35);
    goto LABEL_21;
  }
  pv = 0LL;
  v16 = Src;
  v17 = Src[8];
  v18 = CoTaskMemAlloc(v17 + 18);
  v19 = v18;
  if ( v18 )
  {
    memcpy_0(v18, v16, v17 + 18);
    v15 = 0;
  }
  else
  {
    v15 = -2147024882;
  }
  if ( v19 )
    pv = v19;
  if ( v15 >= 0 )
  {
    v20 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v20 )
    {
      *((_QWORD *)v20 + 1) = 0LL;
      *((_QWORD *)v20 + 3) = 0LL;
      *((_QWORD *)v20 + 4) = 0LL;
      *((_QWORD *)v20 + 5) = 0LL;
      *((_QWORD *)v20 + 6) = 0LL;
      *(_QWORD *)v20 = 0LL;
      *((_QWORD *)v20 + 2) = 0LL;
      *((_QWORD *)v20 + 7) = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    v21 = (LPVOID *)v20;
    v36 = v20;
    if ( v20 )
    {
      v22 = a5;
      a5 = 0LL;
      CoTaskMemFree(*(LPVOID *)v20);
      *(_QWORD *)v20 = v22;
      *((_BYTE *)v20 + 49) = a2 == 3;
      v23 = pv;
      pv = 0LL;
      CoTaskMemFree(*((LPVOID *)v20 + 2));
      *((_QWORD *)v20 + 2) = v23;
      *((_QWORD *)v20 + 3) = a4;
      v25 = a6;
      *((_OWORD *)v20 + 2) = *a6;
      v26 = a7;
      *((_BYTE *)v20 + 48) = a7;
      v27 = a8;
      *((_BYTE *)v20 + 50) = a8;
      *((_DWORD *)v20 + 2) = a3;
      v38 = *v25;
      *((_QWORD *)v20 + 7) = 0LL;
      if ( !a10 )
        goto LABEL_11;
      v30 = v38 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( (_QWORD)v38 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v30 = *((_QWORD *)&v38 + 1) - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      if ( !v30 )
        goto LABEL_39;
      v31 = v38 - *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1;
      if ( (_QWORD)v38 == *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 )
        v31 = *((_QWORD *)&v38 + 1) - *(_QWORD *)GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data4;
      if ( v31 )
      {
        v32 = v38 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
        if ( (_QWORD)v38 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
          v32 = *((_QWORD *)&v38 + 1) - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
        if ( v32 )
          goto LABEL_11;
        v33 = 2LL;
      }
      else
      {
LABEL_39:
        v33 = 0LL;
      }
      Instance = CAecAttributes::CreateInstance(0LL, v33);
      v15 = Instance;
      if ( Instance >= 0 )
      {
LABEL_11:
        if ( a11 != (LPVOID **)&v36 )
        {
          v21 = 0LL;
          v28 = *a11;
          *a11 = (LPVOID *)v20;
          if ( v28 )
          {
            operator delete(v28[7], (const struct std::nothrow_t *)0x10);
            v28[7] = 0LL;
            CoTaskMemFree(v28[2]);
            v28[2] = 0LL;
            CoTaskMemFree(*v28);
            *v28 = 0LL;
            operator delete(v28, (const struct std::nothrow_t *)0x40);
          }
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), v26, v24, a4, v26, v27, v36, v37);
        }
        v15 = 0;
        goto LABEL_17;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)Instance,
        v35);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL,
        v35);
      v15 = -2147024882;
    }
LABEL_17:
    if ( v21 )
    {
      operator delete(v21[7], (const struct std::nothrow_t *)0x10);
      v21[7] = 0LL;
      CoTaskMemFree(v21[2]);
      v21[2] = 0LL;
      CoTaskMemFree(*v21);
      *v21 = 0LL;
      operator delete(v21, (const struct std::nothrow_t *)0x40);
    }
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v15,
    v35);
LABEL_19:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_21:
  if ( a5 )
    CoTaskMemFree(a5);
  return (unsigned int)v15;
}
