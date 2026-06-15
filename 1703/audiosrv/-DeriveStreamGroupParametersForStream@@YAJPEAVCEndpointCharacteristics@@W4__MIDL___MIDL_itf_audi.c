/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180004470
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Idd @ 0x1800ADE30 (WPP_SF_Idd.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecParam@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1800AE320 (-CreateInstance@CAecAttributes@@SAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4AecPara.c)
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
  __int64 v16; // rbp
  unsigned __int16 *v17; // rsi
  __int64 v18; // rbx
  void *v19; // rax
  void *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  void *v23; // rcx
  void *v24; // rax
  void *v25; // rdi
  LPVOID *v26; // rbx
  LPVOID v27; // rsi
  LPVOID v28; // rsi
  __int64 v29; // r8
  __int128 *v30; // rax
  unsigned __int8 v31; // bp
  unsigned __int8 v32; // r14
  __int64 v33; // xmm0_8
  __int64 v34; // rcx
  __int64 v35; // rax
  LPVOID *v36; // rsi
  int Instance; // eax
  int v39; // [rsp+20h] [rbp-68h]
  void *v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int128 v42; // [rsp+40h] [rbp-48h] BYREF
  char v43; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LPVOID pv; // [rsp+90h] [rbp+8h] BYREF

  v41 = -2LL;
  a5 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x342,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v14,
      v39);
  }
  else
  {
    pv = 0LL;
    v16 = wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)&v42, (__int64)&pv);
    v17 = Src;
    v18 = Src[8];
    v19 = CoTaskMemAlloc(v18 + 18);
    v20 = v19;
    if ( v19 )
    {
      memcpy_0(v19, v17, v18 + 18);
      v15 = 0;
    }
    else
    {
      v15 = -2147024882;
    }
    *(_QWORD *)(v16 + 8) = v20;
    if ( v43 )
    {
      v21 = *((_QWORD *)&v42 + 1);
      v22 = (_QWORD *)v42;
      v23 = *(void **)v42;
      if ( *((_QWORD *)&v42 + 1) != *(_QWORD *)v42 )
      {
        if ( v23 )
          CoTaskMemFree(v23);
        *v22 = v21;
      }
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x345,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v15,
        v39);
    }
    else
    {
      v24 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v25 = v24;
      if ( v24 )
      {
        memset(v24, 0, 0x40uLL);
        *(_QWORD *)v25 = 0LL;
        *((_QWORD *)v25 + 2) = 0LL;
        *((_QWORD *)v25 + 7) = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      v26 = (LPVOID *)v25;
      v40 = v25;
      if ( v25 )
      {
        v27 = a5;
        a5 = 0LL;
        CoTaskMemFree(*(LPVOID *)v25);
        *(_QWORD *)v25 = v27;
        *((_BYTE *)v25 + 49) = a2 == 3;
        v28 = pv;
        pv = 0LL;
        CoTaskMemFree(*((LPVOID *)v25 + 2));
        *((_QWORD *)v25 + 2) = v28;
        *((_QWORD *)v25 + 3) = a4;
        v30 = a6;
        *((_OWORD *)v25 + 2) = *a6;
        v31 = a7;
        *((_BYTE *)v25 + 48) = a7;
        v32 = a8;
        *((_BYTE *)v25 + 50) = a8;
        *((_DWORD *)v25 + 2) = a3;
        v42 = *v30;
        v33 = v42;
        *((_QWORD *)v25 + 7) = 0LL;
        v34 = v33 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
        if ( v33 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
          v34 = *((_QWORD *)&v42 + 1) - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
        if ( v34 )
        {
          v35 = v33 - *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1;
          if ( v33 == *(_QWORD *)&GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data1 )
            v35 = *((_QWORD *)&v42 + 1) - *(_QWORD *)GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0.Data4;
          if ( v35 )
            goto LABEL_44;
        }
        if ( !a10 || (Instance = CAecAttributes::CreateInstance(0LL, 0LL), v15 = Instance, Instance >= 0) )
        {
LABEL_44:
          if ( a11 != (LPVOID **)&v40 )
          {
            v26 = 0LL;
            v36 = *a11;
            *a11 = (LPVOID *)v25;
            if ( v36 )
            {
              operator delete(v36[7], (const struct std::nothrow_t *)0x10);
              v36[7] = 0LL;
              CoTaskMemFree(v36[2]);
              v36[2] = 0LL;
              CoTaskMemFree(*v36);
              *v36 = 0LL;
              operator delete(v36, (const struct std::nothrow_t *)0x40);
            }
          }
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), v31, v29, a4, v31, v32, v40, v41, v42);
          }
          v15 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x353,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)Instance,
            v39);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x348,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v39);
        v15 = -2147024882;
      }
      if ( v26 )
      {
        operator delete(v26[7], (const struct std::nothrow_t *)0x10);
        v26[7] = 0LL;
        CoTaskMemFree(v26[2]);
        v26[2] = 0LL;
        CoTaskMemFree(*v26);
        *v26 = 0LL;
        operator delete(v26, (const struct std::nothrow_t *)0x40);
      }
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  if ( a5 )
    CoTaskMemFree(a5);
  return (unsigned int)v15;
}
