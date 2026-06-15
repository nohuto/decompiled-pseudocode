/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019610
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019B74 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400301AC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x140042AB4 (McTemplateU0.c)
 *     McTemplateU0zq @ 0x140042AF0 (McTemplateU0zq.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r15
  HRESULT v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // r15
  _DWORD *v9; // rdi
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  BOOL v19; // esi
  int v20; // r12d
  int v21; // r13d
  void *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  void **v29; // rax
  void **v30; // rdi
  void *v31; // rbx
  void *v32; // rsi
  CEndpointInstance *v33; // rbx
  int v34; // eax
  int v35; // eax
  unsigned int v36; // edx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  _DWORD *v43; // rax
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  HANDLE *ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  int ppvb; // [rsp+20h] [rbp-E0h]
  int ppvc; // [rsp+20h] [rbp-E0h]
  int ppvd; // [rsp+20h] [rbp-E0h]
  int ppve; // [rsp+20h] [rbp-E0h]
  int ppvf; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  void *v58; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v62; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  void **v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  __int64 v67; // [rsp+80h] [rbp-80h]
  _DWORD *v68; // [rsp+88h] [rbp-78h]
  _QWORD v69[8]; // [rsp+90h] [rbp-70h] BYREF
  int v70; // [rsp+D0h] [rbp-30h]
  int v71; // [rsp+D4h] [rbp-2Ch]
  int v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+DCh] [rbp-24h]
  int v74; // [rsp+E0h] [rbp-20h]
  int v75; // [rsp+E4h] [rbp-1Ch]
  int v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+ECh] [rbp-14h]
  int v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F4h] [rbp-Ch]
  BOOL v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  int v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  int v86; // [rsp+180h] [rbp+80h] BYREF
  __int64 v87; // [rsp+188h] [rbp+88h] BYREF

  v83 = -2LL;
  v2 = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v59 = 0LL;
  v58 = 0LL;
  v87 = 0LL;
  if ( *((_DWORD *)a1 + 25) != 1 )
  {
    v62 = 0LL;
    v4 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v62);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x57,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v4,
        ppva);
LABEL_114:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v62);
      goto LABEL_60;
    }
    v60 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)v62 + 40LL))(v62, *((_QWORD *)a1 + 7), &v60);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v6,
        ppva);
LABEL_113:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v60);
      goto LABEL_114;
    }
    v61 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v60)(
           v60,
           &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
           &v61);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v7,
        ppva);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)v5,
        ppvd);
    }
    else
    {
      if ( v61 )
      {
        v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        v66 = 65LL;
        v67 = 0LL;
        v68 = 0LL;
        v9 = 0LL;
        v63 = 0LL;
        v10 = 0LL;
        v65 = 0LL;
        v11 = (*(__int64 (**)(void))(*(_QWORD *)v61 + 48LL))();
        v12 = v8[8];
        if ( v11 )
        {
          v43 = CoTaskMemAlloc(v12 + 32);
          v14 = v43;
          if ( v43 )
          {
            v9 = v43;
            v63 = v43;
            *v43 = v8[8] + 32;
            v43[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v9[2] = *((_DWORD *)a1 + 25);
            memcpy_0(v9 + 3, v8, v8[8] + 18LL);
            v15 = v8[8] + 32;
            goto LABEL_11;
          }
          v42 = 125LL;
        }
        else
        {
          v13 = CoTaskMemAlloc(v12 + 64);
          v14 = v13;
          if ( v13 )
          {
            v10 = v13;
            v65 = (void **)v13;
            *v13 = v8[8] + 64;
            v13[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v10[2] = *((_DWORD *)a1 + 25);
            *(_OWORD *)(v10 + 3) = *(_OWORD *)((char *)a1 + 104);
            *(_OWORD *)(v10 + 7) = *(_OWORD *)((char *)a1 + 152);
            memcpy_0(v10 + 11, v8, v8[8] + 18LL);
            v15 = v8[8] + 64;
LABEL_11:
            v68 = v14;
            LODWORD(v67) = v15;
            if ( *((_DWORD *)a1 + 18) )
            {
              hObject = 0LL;
              ppv = &hObject;
              v46 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *))(*(_QWORD *)v60 + 24LL))(
                      v60,
                      &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                      1LL,
                      &v66);
              v5 = v46;
              if ( v46 >= 0 )
              {
                v47 = v87;
                v87 = 0LL;
                if ( v47 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
                v48 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
                        hObject,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v87);
                v5 = v48;
                if ( v48 >= 0 )
                {
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&hObject);
                  goto LABEL_18;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x15E1,
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  (const char *)(unsigned int)v48,
                  (int)&hObject);
                v44 = v5;
                v45 = 161LL;
              }
              else
              {
                v44 = (unsigned int)v46;
                v45 = 159LL;
              }
            }
            else
            {
              hObject = 0LL;
              ppv = &hObject;
              v16 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *))(*(_QWORD *)v60 + 24LL))(
                      v60,
                      &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                      1LL,
                      &v66);
              v5 = v16;
              if ( v16 < 0 )
              {
                v44 = (unsigned int)v16;
                v45 = 146LL;
              }
              else
              {
                v17 = v87;
                v87 = 0LL;
                if ( v17 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                v18 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
                        hObject,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v87);
                v5 = v18;
                if ( v18 >= 0 )
                {
                  if ( hObject )
                    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)hObject + 16LL))(hObject);
LABEL_18:
                  v19 = *((_DWORD *)a1 + 20) != 0;
                  v20 = *((_DWORD *)a1 + 24);
                  v21 = *((_DWORD *)a1 + 19);
                  if ( g_u32AEWMILogLevel >= 4 )
                  {
                    memset(v69, 0, sizeof(v69));
                    LOWORD(v69[0]) = 120;
                    HIDWORD(v69[5]) = 0x20000;
                    *(_OWORD *)&v69[3] = AEWMIGUID_ENDPOINT_ACTIVATION;
                    WORD2(v69[0]) = 1025;
                    v69[6] = 0LL;
                    LODWORD(v69[7]) = 0;
                    v70 = *((_DWORD *)a1 + 34);
                    v71 = *((_DWORD *)a1 + 25);
                    v72 = *((_DWORD *)a1 + 18);
                    v73 = *((_DWORD *)a1 + 36);
                    v74 = *v8;
                    v75 = *((_DWORD *)v8 + 1);
                    v76 = v8[7];
                    v77 = v8[1];
                    v78 = *((_DWORD *)a1 + 8);
                    v79 = v21;
                    v80 = v19;
                    v81 = v20;
                    v82 = 0;
                    EtwLogTraceEvent(g_hAEWMITraceHandle, v69);
                  }
                  v22 = v58;
                  v58 = 0LL;
                  if ( v22 )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
                  v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v87)(
                          v87,
                          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
                          &v58);
                  v5 = v23;
                  if ( v23 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x15E1,
                      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                      (const char *)(unsigned int)v23,
                      (int)&hObject);
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0xB5,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                      (const char *)v5,
                      ppve);
                  }
                  else
                  {
                    v24 = v59;
                    v59 = 0LL;
                    if ( v24 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                    v25 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v58)(
                            v58,
                            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                            &v59);
                    v5 = v25;
                    if ( v25 >= 0 )
                    {
                      if ( v10 )
                        CoTaskMemFree(v10);
                      if ( v9 )
                        CoTaskMemFree(v9);
                      if ( v61 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
                      if ( v60 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                      if ( v62 )
                        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v62 + 16LL))(v62);
                      v2 = a2;
                      goto LABEL_37;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x15E1,
                      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                      (const char *)(unsigned int)v25,
                      (int)&hObject);
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0xB8,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                      (const char *)v5,
                      ppvf);
                  }
                  goto LABEL_108;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x15E1,
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  (const char *)(unsigned int)v18,
                  (int)&hObject);
                v44 = v5;
                v45 = 148LL;
              }
            }
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v45,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)v44,
              (int)ppv);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&hObject);
LABEL_108:
            if ( v10 )
              CoTaskMemFree(v10);
            if ( v9 )
              CoTaskMemFree(v9);
            goto LABEL_112;
          }
          v42 = 110LL;
        }
        v5 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v42,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)0x8007000ELL,
          ppva);
        goto LABEL_108;
      }
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)0x80070057LL,
        ppva);
    }
LABEL_112:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v61);
    goto LABEL_113;
  }
  v38 = *((_QWORD *)a1 + 8);
  if ( !v38 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x80070057LL,
      (int)ppv);
    goto LABEL_60;
  }
  v59 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
  v39 = v87;
  v87 = 0LL;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  v40 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v59)(
          v59,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v87);
  v5 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v40,
      (int)ppv);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v5,
      ppvb);
    goto LABEL_60;
  }
  v58 = 0LL;
  v41 = (**(__int64 (__fastcall ***)(__int64, GUID *, void **))v59)(
          v59,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v58);
  v5 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v41,
      (int)ppv);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x51,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v5,
      ppvc);
    goto LABEL_60;
  }
LABEL_37:
  v86 = 0;
  v26 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 40LL))(v87, &v86);
  v5 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xBD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v26,
      (int)ppv);
    goto LABEL_60;
  }
  if ( v86 )
  {
    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 48LL))(v59, 0x40000LL);
    v5 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC3,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v27,
        (int)ppv);
      goto LABEL_60;
    }
  }
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v87 + 24LL))(
          v87,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v5 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCA,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v28,
      (int)ppv);
    goto LABEL_60;
  }
  v29 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v29;
  v63 = v29;
  if ( v29 )
  {
    v31 = v58;
    v32 = (void *)*((_QWORD *)a1 + 4);
    *v29 = 0LL;
    v29[3] = 0LL;
    if ( *v29 != v31 )
    {
      if ( v31 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( *v30 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)*v30 + 16LL))(*v30);
      *v30 = v31;
    }
    v30[2] = 0LL;
    v30[1] = v32;
  }
  else
  {
    v30 = 0LL;
  }
  v33 = (CEndpointInstance *)v30;
  v65 = v30;
  if ( v30 )
  {
    v64 = 0LL;
    v34 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v59)(
            v59,
            &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
            &v64);
    if ( v34 >= 0 )
    {
      hObject = 0LL;
      v35 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v64 + 64LL))(v64, &hObject);
      v5 = v35;
      if ( v35 < 0 )
      {
        v49 = 221LL;
      }
      else
      {
        v63 = hObject;
        v35 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
                v30 + 3,
                &v63);
        v5 = v35;
        if ( v35 >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_55;
        }
        v49 = 224LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v49,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v35,
        (int)ppv);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_56;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v34,
      (int)ppv);
LABEL_55:
    v33 = 0LL;
    v65 = 0LL;
    *v2 = (struct CEndpointInstance *)v30;
    v5 = 0;
LABEL_56:
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    goto LABEL_58;
  }
  v5 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)0x8007000ELL,
    (int)ppv);
LABEL_58:
  if ( v33 )
    CEndpointInstance::`scalar deleting destructor'(v33, v36);
LABEL_60:
  if ( v87 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
  if ( v58 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0();
  return v5;
}
