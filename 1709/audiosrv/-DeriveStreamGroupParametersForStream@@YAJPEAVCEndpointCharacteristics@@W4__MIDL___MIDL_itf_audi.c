/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180007C00
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Idd @ 0x18009C7CC (WPP_SF_Idd.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x18009E4D0 (-CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecPara.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        LPVOID a5,
        _OWORD *a6,
        char a7,
        char a8,
        struct tWAVEFORMATEX *Src,
        int a10,
        LPVOID **a11)
{
  int v14; // eax
  int v15; // edi
  void *v16; // rcx
  struct tWAVEFORMATEX *v17; // rsi
  void *v18; // rax
  void *v19; // rsi
  LPVOID *v20; // rbx
  LPVOID v21; // rdi
  LPVOID v22; // rdi
  __int64 v23; // r8
  _OWORD *v24; // rax
  unsigned __int8 v25; // r15
  unsigned __int8 v26; // r12
  LPVOID *v27; // rdi
  char *v29; // rcx
  char *v30; // rcx
  char *v31; // rax
  __int64 v32; // rdx
  int Instance; // eax
  int v34; // [rsp+20h] [rbp-40h]
  void *v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+38h] [rbp-28h]
  struct tWAVEFORMATEX *v37[2]; // [rsp+40h] [rbp-20h] BYREF
  char v38; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  LPVOID pv; // [rsp+90h] [rbp+30h] BYREF

  v36 = -2LL;
  a5 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x34C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v14,
      v34);
    goto LABEL_22;
  }
  pv = 0LL;
  v37[0] = (struct tWAVEFORMATEX *)&pv;
  v37[1] = 0LL;
  v38 = 1;
  v15 = CloneWaveFormat(Src, &v37[1]);
  if ( v38 )
  {
    v16 = *(void **)v37[0];
    v17 = v37[1];
    if ( v37[1] != *(struct tWAVEFORMATEX **)v37[0] )
    {
      if ( v16 )
        CoTaskMemFree(v16);
      *(_QWORD *)v37[0] = v17;
    }
  }
  if ( v15 >= 0 )
  {
    v18 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x40uLL);
      *(_QWORD *)v19 = 0LL;
      *((_QWORD *)v19 + 2) = 0LL;
      *((_QWORD *)v19 + 7) = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = (LPVOID *)v19;
    v35 = v19;
    if ( v19 )
    {
      v21 = a5;
      a5 = 0LL;
      CoTaskMemFree(*(LPVOID *)v19);
      *(_QWORD *)v19 = v21;
      *((_BYTE *)v19 + 49) = a2 == 3;
      v22 = pv;
      pv = 0LL;
      CoTaskMemFree(*((LPVOID *)v19 + 2));
      *((_QWORD *)v19 + 2) = v22;
      *((_QWORD *)v19 + 3) = a4;
      v24 = a6;
      *((_OWORD *)v19 + 2) = *a6;
      v25 = a7;
      *((_BYTE *)v19 + 48) = a7;
      v26 = a8;
      *((_BYTE *)v19 + 50) = a8;
      *((_DWORD *)v19 + 2) = a3;
      *(_OWORD *)v37 = *v24;
      *((_QWORD *)v19 + 7) = 0LL;
      if ( !a10 )
        goto LABEL_12;
      v29 = (char *)v37[0] - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( v37[0] == *(struct tWAVEFORMATEX **)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v29 = (char *)v37[1] - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      if ( !v29 )
        goto LABEL_39;
      v30 = (char *)v37[0] - *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1;
      if ( v37[0] == *(struct tWAVEFORMATEX **)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 )
        v30 = (char *)v37[1] - *(_QWORD *)GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data4;
      if ( v30 )
      {
        v31 = (char *)v37[0] - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
        if ( v37[0] == *(struct tWAVEFORMATEX **)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
          v31 = (char *)v37[1] - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
        if ( v31 )
          goto LABEL_12;
        v32 = 2LL;
      }
      else
      {
LABEL_39:
        v32 = 0LL;
      }
      Instance = CAecAttributes::CreateInstance(0LL, v32);
      v15 = Instance;
      if ( Instance >= 0 )
      {
LABEL_12:
        if ( a11 != (LPVOID **)&v35 )
        {
          v20 = 0LL;
          v27 = *a11;
          *a11 = (LPVOID *)v19;
          if ( v27 )
          {
            operator delete(v27[7], (const struct std::nothrow_t *)0x10);
            v27[7] = 0LL;
            CoTaskMemFree(v27[2]);
            v27[2] = 0LL;
            CoTaskMemFree(*v27);
            *v27 = 0LL;
            operator delete(v27, (const struct std::nothrow_t *)0x40);
          }
        }
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), v25, v23, a4, v25, v26, v35, v36);
        }
        v15 = 0;
        goto LABEL_18;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x35D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)Instance,
        v34);
    }
    else
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x352,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL,
        v34);
    }
LABEL_18:
    if ( v20 )
    {
      operator delete(v20[7], (const struct std::nothrow_t *)0x10);
      v20[7] = 0LL;
      CoTaskMemFree(v20[2]);
      v20[2] = 0LL;
      CoTaskMemFree(*v20);
      *v20 = 0LL;
      operator delete(v20, (const struct std::nothrow_t *)0x40);
    }
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x34F,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v15,
    v34);
LABEL_20:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_22:
  if ( a5 )
    CoTaskMemFree(a5);
  return (unsigned int)v15;
}
