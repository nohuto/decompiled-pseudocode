/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CEE90
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180092680 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x1800CE0C4 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x1800CE434 (FillHrtfDesiredFormat.c)
 *     IsSamplingRateBitRateSupported @ 0x1800CE9D0 (IsSamplingRateBitRateSupported.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800CF868 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
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
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  __int64 v17; // rax
  int *v18; // rcx
  unsigned int v19; // esi
  char *v20; // r13
  __int16 nChannels; // ax
  unsigned int *v22; // rsi
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v23; // r12d
  CSpatialAudioTech *v24; // r15
  _OWORD *v25; // rax
  __int64 v26; // rcx
  bool v28[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-CCh]
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v30; // [rsp+38h] [rbp-C8h]
  int *v31; // [rsp+40h] [rbp-C0h]
  _BYTE *v32; // [rsp+48h] [rbp-B8h]
  const struct tWAVEFORMATEX *v33; // [rsp+50h] [rbp-B0h]
  unsigned int *v34; // [rsp+58h] [rbp-A8h]
  CSpatialAudioTech *v35; // [rsp+60h] [rbp-A0h]
  _OWORD *v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  _BYTE v39[64]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v40[40]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v41[4]; // [rsp+E8h] [rbp-18h] BYREF

  v37 = -2LL;
  v33 = a3;
  v30 = a2;
  v35 = a1;
  v38 = a5;
  v34 = a6;
  v32 = a7;
  v36 = a8;
  v11 = 1;
  if ( !byte_18014CACC )
  {
    byte_18014CACD = GetFileAttributesW(L"DolbyHrtfEnc.dll") != -1;
    byte_18014CACC = 1;
  }
  v12 = 0;
  v28[0] = 0;
  *a6 = 0;
  *v32 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( !*((_QWORD *)a1 + 1) && byte_18014B220 )
    goto LABEL_37;
  memset(v40, 0, sizeof(v40));
  v14 = 0;
  if ( v30 == DigitalAudioDisplayDevice && IsGetDefaultSpatialRenderingModePresent() )
    v14 = (unsigned int)IsVirtualSurroundSoundAllowedToZeroFill() != 0;
  v41[0] = 48000;
  v41[1] = 44100;
  v41[2] = 32000;
  if ( !a4 )
    goto LABEL_17;
  if ( a3 )
    a4 &= -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a4, a3) != 0);
  if ( !a4 )
  {
LABEL_17:
    v29 = 0;
    v18 = v41;
    v31 = v41;
    while ( !v12 )
    {
      v19 = 0;
      v20 = (char *)&unk_180118960;
      do
      {
        if ( v12 )
          break;
        if ( v14 && v33 )
          nChannels = v33->nChannels;
        else
          nChannels = 2;
        FillHrtfDesiredFormat(nChannels, *(_WORD *)v20, *((_WORD *)v20 + 1), *v18, (__int64)v40);
        v12 = std::_Func_class<void,IAudioStreamInfo *>::operator()(a5, (__int64)v40);
        v28[0] = v12;
        if ( !v12 && *(_DWORD *)&v40[20] == 1599 )
        {
          *(_DWORD *)&v40[20] = 255;
          v12 = std::_Func_class<void,IAudioStreamInfo *>::operator()(a5, (__int64)v40);
          v28[0] = v12;
        }
        ++v19;
        v20 += 4;
        v18 = v31;
      }
      while ( v19 < 4 );
      ++v29;
      v31 = ++v18;
      if ( v29 >= 3 )
        goto LABEL_30;
    }
    goto LABEL_31;
  }
  v15 = 0;
  v13 = *(unsigned int *)(a4 + 4);
  v16 = v41;
  while ( (_DWORD)v13 != *v16 )
  {
    ++v15;
    ++v16;
    if ( v15 >= 3 )
      goto LABEL_35;
  }
  v17 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
          (__int64)v39,
          a5);
  v12 = IsSamplingRateBitRateSupported((__int16 *)a4, v17, (__int64)v40);
  v28[0] = v12;
LABEL_30:
  if ( v12 )
  {
LABEL_31:
    v22 = v34;
    v23 = v30;
    v24 = v35;
    CSpatialAudioTech::AssignPriority(v35, v30, Headphones, 2u, v34, v28);
    v12 = v28[0];
    if ( v28[0] )
    {
      if ( *v22 )
      {
        *v32 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v24, v23, Speakers, 2u, v22, v28);
        v12 = v28[0];
      }
    }
  }
LABEL_35:
  v25 = v36;
  *v36 = *(_OWORD *)v40;
  v25[1] = *(_OWORD *)&v40[16];
  *((_QWORD *)v25 + 4) = *(_QWORD *)&v40[32];
  if ( !v12 || !byte_18014CACD )
LABEL_37:
    v11 = 0;
  v26 = *(_QWORD *)(a5 + 56);
  if ( v26 )
  {
    LOBYTE(v13) = v26 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, v13);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v11;
}
