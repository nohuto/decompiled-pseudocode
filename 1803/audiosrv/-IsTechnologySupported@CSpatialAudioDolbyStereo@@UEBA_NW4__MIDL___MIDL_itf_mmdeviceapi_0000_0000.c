/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18004EEB0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x18004F0FC (FillHrtfDesiredFormat.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18004FD08 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005514C (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005FC78 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     IsSamplingRateBitRateSupported @ 0x1800FF034 (IsSamplingRateBitRateSupported.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyStereo::IsTechnologySupported(
        CSpatialAudioTech *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        const struct tWAVEFORMATEX *a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int *a6,
        _BYTE *a7,
        _OWORD *a8)
{
  char v11; // di
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (__fastcall *v15)(__int64, __int64); // rax
  __int64 v17; // rcx
  bool v18; // r15
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  __int64 v21; // rax
  int *v22; // rcx
  unsigned int v23; // esi
  char *v24; // r13
  __int16 nChannels; // ax
  unsigned int *v26; // rsi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v27; // r12d
  CSpatialAudioTech *v28; // r15
  _OWORD *v29; // rax
  bool v30[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh]
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v32; // [rsp+38h] [rbp-C8h]
  int *v33; // [rsp+40h] [rbp-C0h]
  _BYTE *v34; // [rsp+48h] [rbp-B8h]
  const struct tWAVEFORMATEX *v35; // [rsp+50h] [rbp-B0h]
  unsigned int *v36; // [rsp+58h] [rbp-A8h]
  CSpatialAudioTech *v37; // [rsp+60h] [rbp-A0h]
  _OWORD *v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  _BYTE v41[64]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  _DWORD v45[4]; // [rsp+E8h] [rbp-18h] BYREF

  v39 = -2LL;
  v35 = a3;
  v32 = a2;
  v37 = a1;
  v40 = a5;
  v36 = a6;
  v34 = a7;
  v38 = a8;
  v11 = 1;
  if ( !byte_18018B0E3 )
  {
    byte_18018B0E2 = GetFileAttributesW(L"DolbyHrtfEnc.dll") != -1;
    byte_18018B0E3 = 1;
  }
  v12 = 0;
  v30[0] = 0;
  *a6 = 0;
  *v34 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( !byte_18018B220 || !*((_QWORD *)a1 + 1) && byte_180189408 )
    goto LABEL_4;
  memset_0(&v42, 0, 0x28uLL);
  v18 = 0;
  if ( v32 == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v17) )
    v18 = (unsigned int)IsVirtualSurroundSoundAllowedToZeroFill() != 0;
  v45[0] = 48000;
  v45[1] = 44100;
  v45[2] = 32000;
  if ( !a4 )
    goto LABEL_25;
  if ( a3 )
    a4 &= -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a4, a3) != 0);
  if ( !a4 )
  {
LABEL_25:
    v31 = 0;
    v22 = v45;
    v33 = v45;
    while ( !v12 )
    {
      v23 = 0;
      v24 = (char *)&unk_18013FD50;
      do
      {
        if ( v12 )
          break;
        if ( v18 && v35 )
          nChannels = v35->nChannels;
        else
          nChannels = 2;
        FillHrtfDesiredFormat(nChannels, *(_WORD *)v24, *((_WORD *)v24 + 1), *v22, (__int64)&v42);
        v12 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v42);
        v30[0] = v12;
        if ( !v12 && DWORD1(v43) == 1599 )
        {
          DWORD1(v43) = 255;
          v12 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v42);
          v30[0] = v12;
        }
        ++v23;
        v24 += 4;
        v22 = v33;
      }
      while ( v23 < 4 );
      ++v31;
      v33 = ++v22;
      if ( v31 >= 3 )
        goto LABEL_38;
    }
    goto LABEL_39;
  }
  v19 = 0;
  v13 = *(unsigned int *)(a4 + 4);
  v20 = v45;
  while ( (_DWORD)v13 != *v20 )
  {
    ++v19;
    ++v20;
    if ( v19 >= 3 )
      goto LABEL_43;
  }
  v21 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(v41, a5);
  v12 = IsSamplingRateBitRateSupported(a4, v21, &v42);
  v30[0] = v12;
LABEL_38:
  if ( v12 )
  {
LABEL_39:
    v26 = v36;
    v27 = v32;
    v28 = v37;
    CSpatialAudioTech::AssignPriority(v37, v32, Speakers, 2u, v36, v30);
    v12 = v30[0];
    if ( v30[0] )
    {
      if ( *v26 )
      {
        *v34 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v28, v27, Headphones, 2u, v26, v30);
        v12 = v30[0];
      }
    }
  }
LABEL_43:
  v29 = v38;
  *v38 = v42;
  v29[1] = v43;
  *((_QWORD *)v29 + 4) = v44;
  if ( !v12 || !byte_18018B0E2 )
LABEL_4:
    v11 = 0;
  v14 = *(_QWORD *)(a5 + 56);
  if ( v14 )
  {
    LOBYTE(v13) = v14 != a5;
    v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL);
    if ( (char *)v15 == (char *)std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v14,
        v13);
    else
      v15(v14, v13);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v11;
}
