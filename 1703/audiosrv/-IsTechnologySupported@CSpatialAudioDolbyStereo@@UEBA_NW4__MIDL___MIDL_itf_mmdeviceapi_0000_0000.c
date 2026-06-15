/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003C980
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180040580 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180040734 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFromat @ 0x180040C60 (FillHrtfDesiredFromat.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyStereo::IsTechnologySupported(
        CSpatialAudioTech *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6,
        __int64 a7)
{
  char v10; // bl
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 v16; // rcx
  bool v17; // si
  unsigned int *v18; // r12
  char v19; // al
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v20; // r14d
  CSpatialAudioTech *v21; // rsi
  bool v22[4]; // [rsp+38h] [rbp-61h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v23; // [rsp+3Ch] [rbp-5Dh]
  CSpatialAudioTech *v24; // [rsp+40h] [rbp-59h]
  _BYTE *v25; // [rsp+48h] [rbp-51h]
  __int64 v26; // [rsp+50h] [rbp-49h]
  __int64 v27; // [rsp+58h] [rbp-41h]
  _BYTE v28[40]; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v29[4]; // [rsp+88h] [rbp-11h] BYREF

  v26 = -2LL;
  v23 = a2;
  v24 = a1;
  v27 = a4;
  v25 = a6;
  v10 = 1;
  if ( !byte_18012C413 )
  {
    byte_18012C412 = GetFileAttributesW(L"DolbyHrtfEnc.dll") != -1;
    byte_18012C413 = 1;
  }
  *a5 = 0;
  *a6 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v12 = 0;
  if ( !byte_18012C5A8 || !*((_QWORD *)a1 + 1) && byte_18012AEA4 )
    goto LABEL_4;
  memset(v28, 0, sizeof(v28));
  v17 = 0;
  if ( a2 == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    v17 = (unsigned int)IsVirtualSurroundAllowedFor8ChannelEndpoint() != 0;
  v29[0] = 48000;
  v29[1] = 44100;
  v29[2] = 32000;
  v18 = v29;
  while ( 1 )
  {
    LOBYTE(v16) = v17;
    FillHrtfDesiredFromat(v16, *v18, v28);
    v19 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a4, v28);
    v22[0] = v19;
    if ( v19 )
      break;
    if ( *(_DWORD *)&v28[20] == 1599 )
    {
      *(_DWORD *)&v28[20] = 255;
      v19 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a4, v28);
      v22[0] = v19;
      if ( v19 )
        break;
    }
    ++v12;
    ++v18;
    if ( v12 >= 3 )
      goto LABEL_26;
  }
  v20 = v23;
  v21 = v24;
  CSpatialAudioTech::AssignPriority(v24, v23, Speakers, 2u, a5, v22);
  v19 = v22[0];
  if ( v22[0] )
  {
    if ( *a5 )
    {
      *v25 = 1;
    }
    else
    {
      CSpatialAudioTech::AssignPriority(v21, v20, Headphones, 2u, a5, v22);
      v19 = v22[0];
    }
  }
LABEL_26:
  *(_OWORD *)a7 = *(_OWORD *)v28;
  *(_OWORD *)(a7 + 16) = *(_OWORD *)&v28[16];
  *(_QWORD *)(a7 + 32) = *(_QWORD *)&v28[32];
  if ( !v19 || !byte_18012C412 )
LABEL_4:
    v10 = 0;
  v13 = *(_QWORD *)(a4 + 56);
  if ( v13 )
  {
    LOBYTE(v11) = v13 != a4;
    v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL);
    if ( (char *)v14 == (char *)std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v13,
        v11);
    else
      v14(v13, v11);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return v10;
}
