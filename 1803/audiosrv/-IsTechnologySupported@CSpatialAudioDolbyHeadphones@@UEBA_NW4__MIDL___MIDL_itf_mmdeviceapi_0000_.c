/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E770
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
char __fastcall CSpatialAudioDolbyHeadphones::IsTechnologySupported(
        CSpatialAudioTech *a1,
        __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
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
  bool v14; // r15
  _DWORD *v15; // rcx
  unsigned int v16; // esi
  unsigned __int16 *v17; // r13
  unsigned __int16 nChannels; // ax
  unsigned int *v19; // rsi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v20; // r12d
  CSpatialAudioTech *v21; // r15
  _OWORD *v22; // rax
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, __int64); // rax
  unsigned int v26; // ecx
  _DWORD *v27; // rax
  __int64 v28; // rax
  bool v29[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-CCh]
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v31; // [rsp+38h] [rbp-C8h]
  _DWORD *v32; // [rsp+40h] [rbp-C0h]
  _BYTE *v33; // [rsp+48h] [rbp-B8h]
  const struct tWAVEFORMATEX *v34; // [rsp+50h] [rbp-B0h]
  unsigned int *v35; // [rsp+58h] [rbp-A8h]
  CSpatialAudioTech *v36; // [rsp+60h] [rbp-A0h]
  _OWORD *v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  _BYTE v40[64]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  _DWORD v44[4]; // [rsp+E8h] [rbp-18h] BYREF

  v38 = -2LL;
  v34 = a3;
  v31 = a2;
  v36 = a1;
  v39 = a5;
  v35 = a6;
  v33 = a7;
  v37 = a8;
  v11 = 1;
  if ( !byte_18018B0E5 )
  {
    byte_18018B0E4 = GetFileAttributesW(L"DolbyHrtfEnc.dll") != -1;
    byte_18018B0E5 = 1;
  }
  v12 = 0;
  v29[0] = 0;
  *a6 = 0;
  *v33 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( !*((_QWORD *)a1 + 1) && byte_180189408 )
    goto LABEL_26;
  memset_0(&v41, 0, 0x28uLL);
  v14 = 0;
  if ( v31 == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    v14 = (unsigned int)IsVirtualSurroundSoundAllowedToZeroFill() != 0;
  v44[0] = 48000;
  v44[1] = 44100;
  v44[2] = 32000;
  if ( !a4 )
    goto LABEL_6;
  if ( a3 )
    a4 &= -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a4, a3) != 0);
  if ( !a4 )
  {
LABEL_6:
    v30 = 0;
    v15 = v44;
    v32 = v44;
    while ( !v12 )
    {
      v16 = 0;
      v17 = (unsigned __int16 *)&unk_18013FD50;
      do
      {
        if ( v12 )
          break;
        if ( v14 && v34 )
          nChannels = v34->nChannels;
        else
          nChannels = 2;
        FillHrtfDesiredFormat(nChannels, *v17, v17[1], *v15, (__int64)&v41);
        v12 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v41);
        v29[0] = v12;
        if ( !v12 && DWORD1(v42) == 1599 )
        {
          DWORD1(v42) = 255;
          v12 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v41);
          v29[0] = v12;
        }
        ++v16;
        v17 += 2;
        v15 = v32;
      }
      while ( v16 < 4 );
      ++v30;
      v32 = ++v15;
      if ( v30 >= 3 )
        goto LABEL_40;
    }
    goto LABEL_16;
  }
  v26 = 0;
  v13 = *(unsigned int *)(a4 + 4);
  v27 = v44;
  while ( (_DWORD)v13 != *v27 )
  {
    ++v26;
    ++v27;
    if ( v26 >= 3 )
      goto LABEL_19;
  }
  v28 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(v40, a5);
  v12 = IsSamplingRateBitRateSupported(a4, v28, &v41);
  v29[0] = v12;
LABEL_40:
  if ( v12 )
  {
LABEL_16:
    v19 = v35;
    v20 = v31;
    v21 = v36;
    CSpatialAudioTech::AssignPriority(v36, v31, Headphones, 2u, v35, v29);
    v12 = v29[0];
    if ( v29[0] )
    {
      if ( *v19 )
      {
        *v33 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v21, v20, Speakers, 2u, v19, v29);
        v12 = v29[0];
      }
    }
  }
LABEL_19:
  v22 = v37;
  *v37 = v41;
  v22[1] = v42;
  *((_QWORD *)v22 + 4) = v43;
  if ( !v12 || !byte_18018B0E4 )
LABEL_26:
    v11 = 0;
  v23 = *(_QWORD *)(a5 + 56);
  if ( v23 )
  {
    LOBYTE(v13) = v23 != a5;
    v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL);
    if ( (char *)v24 == (char *)std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v23,
        v13);
    else
      v24(v23, v13);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v11;
}
