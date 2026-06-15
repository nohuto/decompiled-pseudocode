/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019960
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140019804 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14002F180 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x140040C18 (McTemplateU0.c)
 *     McTemplateU0zq @ 0x140040C54 (McTemplateU0zq.c)
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
  void *v33; // rcx
  CEndpointInstance *v34; // rbx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  _DWORD *v44; // rax
  unsigned __int64 v45; // r9
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  HANDLE *ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  int ppvb; // [rsp+20h] [rbp-E0h]
  int ppvc; // [rsp+20h] [rbp-E0h]
  int ppvd; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  void *v57; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v61; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v62; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  void **v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h]
  _DWORD *v67; // [rsp+88h] [rbp-78h]
  _WORD v68[12]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+BCh] [rbp-44h]
  __int64 v71; // [rsp+C0h] [rbp-40h]
  int v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+D0h] [rbp-30h]
  int v74; // [rsp+D4h] [rbp-2Ch]
  int v75; // [rsp+D8h] [rbp-28h]
  int v76; // [rsp+DCh] [rbp-24h]
  int v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E4h] [rbp-1Ch]
  int v79; // [rsp+E8h] [rbp-18h]
  int v80; // [rsp+ECh] [rbp-14h]
  int v81; // [rsp+F0h] [rbp-10h]
  int v82; // [rsp+F4h] [rbp-Ch]
  BOOL v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  int v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  int v89; // [rsp+180h] [rbp+80h] BYREF
  __int64 v90; // [rsp+188h] [rbp+88h] BYREF

  v86 = -2LL;
  v2 = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v58 = 0LL;
  v57 = 0LL;
  v90 = 0LL;
  if ( *((_DWORD *)a1 + 25) != 1 )
  {
    v61 = 0LL;
    v4 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v61);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v4,
        ppva);
LABEL_115:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v61);
      goto LABEL_60;
    }
    v59 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)v61 + 40LL))(v61, *((_QWORD *)a1 + 7), &v59);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v6,
        ppva);
LABEL_114:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v59);
      goto LABEL_115;
    }
    v60 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v59)(
           v59,
           &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
           &v60);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x161F,
        (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v7,
        ppva);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)v5,
        ppvd);
    }
    else
    {
      if ( v60 )
      {
        v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        v65 = 65LL;
        v66 = 0LL;
        v67 = 0LL;
        v9 = 0LL;
        v62 = 0LL;
        v10 = 0LL;
        v64 = 0LL;
        v11 = (*(__int64 (**)(void))(*(_QWORD *)v60 + 48LL))();
        v12 = v8[8];
        if ( v11 )
        {
          v44 = CoTaskMemAlloc(v12 + 32);
          v14 = v44;
          if ( v44 )
          {
            v9 = v44;
            v62 = v44;
            *v44 = v8[8] + 32;
            v44[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v9[2] = *((_DWORD *)a1 + 25);
            memcpy_0(v9 + 3, v8, v8[8] + 18LL);
            v15 = v8[8] + 32;
LABEL_11:
            v67 = v14;
            LODWORD(v66) = v15;
            if ( *((_DWORD *)a1 + 18) )
            {
              hObject = 0LL;
              ppv = &hObject;
              v47 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *))(*(_QWORD *)v59 + 24LL))(
                      v59,
                      &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                      1LL,
                      &v65);
              v5 = v47;
              if ( v47 >= 0 )
              {
                v48 = v90;
                v90 = 0LL;
                if ( v48 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                v49 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
                        hObject,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v90);
                v5 = v49;
                if ( v49 >= 0 )
                {
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&hObject);
                  goto LABEL_18;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x161F,
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  (const char *)(unsigned int)v49,
                  (int)&hObject);
                v45 = v5;
                v46 = 161LL;
              }
              else
              {
                v45 = (unsigned int)v47;
                v46 = 159LL;
              }
            }
            else
            {
              hObject = 0LL;
              ppv = &hObject;
              v16 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *))(*(_QWORD *)v59 + 24LL))(
                      v59,
                      &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                      1LL,
                      &v65);
              v5 = v16;
              if ( v16 < 0 )
              {
                v45 = (unsigned int)v16;
                v46 = 146LL;
              }
              else
              {
                v17 = v90;
                v90 = 0LL;
                if ( v17 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                v18 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
                        hObject,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v90);
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
                    memset_0(v68, 0, 0x40uLL);
                    v68[0] = 120;
                    v70 = 0x20000;
                    v69 = AEWMIGUID_ENDPOINT_ACTIVATION;
                    v68[2] = 1025;
                    v71 = 0LL;
                    v72 = 0;
                    v73 = *((_DWORD *)a1 + 34);
                    v74 = *((_DWORD *)a1 + 25);
                    v75 = *((_DWORD *)a1 + 18);
                    v76 = *((_DWORD *)a1 + 36);
                    v77 = *v8;
                    v78 = *((_DWORD *)v8 + 1);
                    v79 = v8[7];
                    v80 = v8[1];
                    v81 = *((_DWORD *)a1 + 8);
                    v82 = v21;
                    v83 = v19;
                    v84 = v20;
                    v85 = 0;
                    EtwLogTraceEvent(g_hAEWMITraceHandle, v68);
                  }
                  v22 = v57;
                  v57 = 0LL;
                  if ( v22 )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
                  v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v90)(
                          v90,
                          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
                          (__int64 *)&v57);
                  v5 = v23;
                  if ( v23 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x161F,
                      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                      (const char *)(unsigned int)v23,
                      (int)&hObject);
                    v43 = 181LL;
                  }
                  else
                  {
                    v24 = v58;
                    v58 = 0LL;
                    if ( v24 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                    v25 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v57)(
                            (__int64)v57,
                            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                            &v58);
                    v5 = v25;
                    if ( v25 >= 0 )
                    {
                      if ( v10 )
                        CoTaskMemFree(v10);
                      if ( v9 )
                        CoTaskMemFree(v9);
                      if ( v60 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                      if ( v59 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
                      if ( v61 )
                        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v61 + 16LL))(v61);
                      v2 = a2;
                      goto LABEL_37;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x161F,
                      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                      (const char *)(unsigned int)v25,
                      (int)&hObject);
                    v43 = 184LL;
                  }
                  goto LABEL_108;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x161F,
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  (const char *)(unsigned int)v18,
                  (int)&hObject);
                v45 = v5;
                v46 = 148LL;
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v46,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)v45,
              (int)ppv);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&hObject);
LABEL_109:
            if ( v10 )
              CoTaskMemFree(v10);
            if ( v9 )
              CoTaskMemFree(v9);
            goto LABEL_113;
          }
          v43 = 125LL;
        }
        else
        {
          v13 = CoTaskMemAlloc(v12 + 64);
          v14 = v13;
          if ( v13 )
          {
            v10 = v13;
            v64 = (void **)v13;
            *v13 = v8[8] + 64;
            v13[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v10[2] = *((_DWORD *)a1 + 25);
            *(_OWORD *)(v10 + 3) = *(_OWORD *)((char *)a1 + 104);
            *(_OWORD *)(v10 + 7) = *(_OWORD *)((char *)a1 + 152);
            memcpy_0(v10 + 11, v8, v8[8] + 18LL);
            v15 = v8[8] + 64;
            goto LABEL_11;
          }
          v43 = 110LL;
        }
        v5 = -2147024882;
LABEL_108:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v43,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)v5,
          ppva);
        goto LABEL_109;
      }
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)0x80070057LL,
        ppva);
    }
LABEL_113:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v60);
    goto LABEL_114;
  }
  v39 = *((_QWORD *)a1 + 8);
  if ( !v39 )
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
  v58 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
  v40 = v90;
  v90 = 0LL;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v58)(
          v58,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v90);
  v5 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v41,
      (int)ppv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v5,
      ppvb);
    goto LABEL_60;
  }
  v57 = 0LL;
  v42 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v58)(
          v58,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          (__int64 *)&v57);
  v5 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v42,
      (int)ppv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v5,
      ppvc);
    goto LABEL_60;
  }
LABEL_37:
  v89 = 0;
  v26 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v90 + 40LL))(v90, &v89);
  v5 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v26,
      (int)ppv);
    goto LABEL_60;
  }
  if ( v89 )
  {
    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 48LL))(v58, 0x40000LL);
    v5 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v27,
        (int)ppv);
      goto LABEL_60;
    }
  }
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v90 + 24LL))(
          v90,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v5 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v28,
      (int)ppv);
    goto LABEL_60;
  }
  v29 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v29;
  v62 = v29;
  if ( v29 )
  {
    v31 = v57;
    v32 = (void *)*((_QWORD *)a1 + 4);
    *v29 = 0LL;
    v29[3] = 0LL;
    v33 = *v29;
    if ( *v29 != v31 )
    {
      if ( v31 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 8LL))(v31);
        v33 = *v30;
      }
      if ( v33 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
      *v30 = v31;
    }
    v30[2] = 0LL;
    v30[1] = v32;
  }
  else
  {
    v30 = 0LL;
  }
  v34 = (CEndpointInstance *)v30;
  v64 = v30;
  if ( v30 )
  {
    v63 = 0LL;
    v35 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v58)(
            v58,
            &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
            &v63);
    if ( v35 >= 0 )
    {
      hObject = 0LL;
      v36 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v63 + 64LL))(v63, &hObject);
      v5 = v36;
      if ( v36 < 0 )
      {
        v50 = 221LL;
      }
      else
      {
        v62 = hObject;
        v36 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
                v30 + 3,
                &v62);
        v5 = v36;
        if ( v36 >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_55;
        }
        v50 = 224LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v36,
        (int)ppv);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_56;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v35,
      (int)ppv);
LABEL_55:
    v34 = 0LL;
    v64 = 0LL;
    *v2 = (struct CEndpointInstance *)v30;
    v5 = 0;
LABEL_56:
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
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
  if ( v34 )
    CEndpointInstance::`scalar deleting destructor'(v34, v37);
LABEL_60:
  if ( v90 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
  if ( v57 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0();
  return v5;
}
