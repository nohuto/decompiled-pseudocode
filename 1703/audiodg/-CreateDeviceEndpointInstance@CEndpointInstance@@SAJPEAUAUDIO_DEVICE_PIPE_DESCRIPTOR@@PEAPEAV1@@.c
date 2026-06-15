/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001A900
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001AEE0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     TemplateEventDescriptor @ 0x14001AE28 (TemplateEventDescriptor.c)
 *     Template_zq @ 0x14001AE44 (Template_zq.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1400303B4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140030644 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r12
  int v4; // r13d
  CEndpointInstance *v5; // rdi
  char *v6; // r15
  int v7; // ebx
  __int64 v8; // rcx
  unsigned __int16 *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  int v15; // r12d
  CEndpointInstance *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rbx
  _DWORD *v21; // rbx
  unsigned int v22; // edx
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  char *v33; // [rsp+80h] [rbp-80h]
  LPVOID pv; // [rsp+88h] [rbp-78h]
  _QWORD v35[8]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D4h] [rbp-2Ch]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  int v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E4h] [rbp-1Ch]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  int v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F4h] [rbp-Ch]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]
  int v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+170h] [rbp+70h] BYREF
  struct CEndpointInstance **v51; // [rsp+178h] [rbp+78h]
  HANDLE hObject; // [rsp+180h] [rbp+80h] BYREF
  __int64 v53; // [rsp+188h] [rbp+88h] BYREF

  v51 = a2;
  v49 = -2LL;
  v2 = a2;
  v4 = 0;
  v5 = 0LL;
  ppv = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v53 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  pv = 0LL;
  v6 = 0LL;
  v50 = 0;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zq(0LL, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( *((_DWORD *)a1 + 25) == 1 )
  {
    v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 8);
    if ( !v20 )
    {
      v7 = -2147467262;
      goto LABEL_87;
    }
    v23 = *((_QWORD *)a1 + 8);
    v7 = (**v20)(v20, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v53);
    if ( v7 < 0 )
      goto LABEL_87;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
           v23,
           &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
           &v25);
    if ( v7 < 0 )
      goto LABEL_87;
  }
  else
  {
    v7 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v7 < 0 )
      goto LABEL_87;
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, *((_QWORD *)a1 + 7), &v26);
    if ( v7 < 0 )
      goto LABEL_87;
    v8 = v24;
    if ( v24 != v26 )
    {
      v8 = 0LL;
      v24 = 0LL;
      if ( v26 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v26)(
          v26,
          &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990,
          &v24);
        v8 = v24;
      }
    }
    if ( !v8 )
    {
      v7 = -2147467262;
      goto LABEL_87;
    }
    v9 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    LOWORD(v31) = 65;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    v11 = v9[8];
    if ( v10 )
    {
      v21 = CoTaskMemAlloc(v11 + 32);
      pv = v21;
      if ( !v21 )
      {
        v7 = -2147024882;
        goto LABEL_87;
      }
      *v21 = v9[8] + 32;
      v21[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      v21[2] = *((_DWORD *)a1 + 25);
      memcpy_0(v21 + 3, v9, v9[8] + 18LL);
      v12 = v9[8] + 32;
      v33 = (char *)v21;
    }
    else
    {
      v6 = (char *)CoTaskMemAlloc(v11 + 64);
      if ( !v6 )
      {
        v7 = -2147024882;
        goto LABEL_87;
      }
      *(_DWORD *)v6 = v9[8] + 64;
      *((_DWORD *)v6 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      *((_DWORD *)v6 + 2) = *((_DWORD *)a1 + 25);
      *(_OWORD *)(v6 + 12) = *(_OWORD *)((char *)a1 + 104);
      *(_OWORD *)(v6 + 28) = *(_OWORD *)((char *)a1 + 148);
      memcpy_0(v6 + 44, v9, v9[8] + 18LL);
      v12 = v9[8] + 64;
      v33 = v6;
    }
    LODWORD(v32) = v12;
    v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 24LL);
    if ( *((_DWORD *)a1 + 18) )
    {
      v7 = v13(v26, &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82, 1LL, &v31, &v28);
      if ( v7 < 0 )
        goto LABEL_87;
      v14 = v28;
    }
    else
    {
      v7 = v13(v26, &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa, 1LL, &v31, &v27);
      if ( v7 < 0 )
        goto LABEL_87;
      v14 = v27;
    }
    v7 = (**v14)(v14, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v53);
    if ( *((_DWORD *)a1 + 20) )
      v4 = 1;
    v15 = *((_DWORD *)a1 + 24);
    if ( g_u32AEWMILogLevel >= 4 )
    {
      memset(v35, 0, sizeof(v35));
      LOWORD(v35[0]) = 120;
      HIDWORD(v35[5]) = 0x20000;
      *(_OWORD *)&v35[3] = AEWMIGUID_ENDPOINT_ACTIVATION;
      WORD2(v35[0]) = 1025;
      v35[6] = 0LL;
      LODWORD(v35[7]) = 0;
      v36 = *((_DWORD *)a1 + 34);
      v37 = *((_DWORD *)a1 + 25);
      v38 = *((_DWORD *)a1 + 18);
      v39 = *((_DWORD *)a1 + 36);
      v40 = *v9;
      v41 = *((_DWORD *)v9 + 1);
      v42 = v9[7];
      v43 = v9[1];
      v44 = *((_DWORD *)a1 + 8);
      v45 = *((_DWORD *)a1 + 19);
      v46 = v4;
      v47 = v15;
      v48 = v7;
      EtwLogTraceEvent(g_hAEWMITraceHandle, v35);
    }
    if ( v7 < 0 )
      goto LABEL_87;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v53)(
           v53,
           &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
           &v25);
    if ( v7 < 0 )
      goto LABEL_87;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
           v25,
           &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
           &v23);
    if ( v7 < 0 )
      goto LABEL_87;
    v2 = v51;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v53 + 40LL))(v53, &v50);
  if ( v7 >= 0 )
  {
    if ( !v50 || (v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 48LL))(v23, 0x40000LL), v7 >= 0) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v53 + 24LL))(
             v53,
             *((_QWORD *)a1 + 4),
             *((unsigned int *)a1 + 12));
      if ( v7 >= 0 )
      {
        v16 = (CEndpointInstance *)operator new(0x20uLL);
        v5 = v16;
        hObject = v16;
        if ( v16 )
        {
          v17 = v25;
          v18 = *((_QWORD *)a1 + 4);
          *(_QWORD *)v16 = 0LL;
          *((_QWORD *)v16 + 3) = 0LL;
          if ( *(_QWORD *)v16 != v17 )
          {
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            if ( *(_QWORD *)v5 )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
            *(_QWORD *)v5 = v17;
          }
          *((_QWORD *)v5 + 2) = 0LL;
          *((_QWORD *)v5 + 1) = v18;
        }
        else
        {
          v5 = 0LL;
        }
        if ( v5 )
        {
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
                 v23,
                 &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
                 &v29) < 0 )
          {
LABEL_42:
            *v2 = v5;
            goto LABEL_43;
          }
          hObject = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v29 + 64LL))(v29, &hObject);
          if ( v7 < 0 )
          {
            if ( !hObject )
              goto LABEL_43;
          }
          else
          {
            v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,ATL::CHandle &>(
                   (void **)v5 + 3,
                   &hObject);
            if ( v7 >= 0 )
            {
              if ( hObject )
                CloseHandle(hObject);
              goto LABEL_42;
            }
            if ( !hObject )
            {
LABEL_43:
              if ( v7 >= 0 )
                goto LABEL_44;
              goto LABEL_87;
            }
          }
          ATL::CHandle::Close((ATL::CHandle *)&hObject);
          goto LABEL_43;
        }
        v7 = -2147024882;
      }
    }
  }
LABEL_87:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_c59da3fdbfb03c8b2196f1e98cb9dccc_Traceguids,
      (unsigned int)v7);
  }
  AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateDeviceEndpointInstance", 0xF3u, v7);
  if ( v5 )
    CEndpointInstance::`scalar deleting destructor'(v5, v22);
LABEL_44:
  if ( pv )
    CoTaskMemFree(pv);
  if ( v6 )
    CoTaskMemFree(v6);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor();
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v27 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v27)[2])(v27);
  if ( v28 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v28)[2])(v28);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v7;
}
