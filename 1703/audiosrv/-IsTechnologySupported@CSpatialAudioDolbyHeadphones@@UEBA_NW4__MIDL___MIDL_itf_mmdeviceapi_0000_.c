/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003D960
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
char __fastcall CSpatialAudioDolbyHeadphones::IsTechnologySupported(
        CSpatialAudioTech *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6,
        __int64 a7)
{
  int v8; // r12d
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // si
  unsigned int v14; // r15d
  unsigned int *v15; // r12
  char v16; // al
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v17; // r15d
  CSpatialAudioTech *v18; // rsi
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int64); // rax
  bool v22[4]; // [rsp+38h] [rbp-61h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v23; // [rsp+3Ch] [rbp-5Dh]
  CSpatialAudioTech *v24; // [rsp+40h] [rbp-59h]
  _BYTE *v25; // [rsp+48h] [rbp-51h]
  __int64 v26; // [rsp+50h] [rbp-49h]
  __int64 v27; // [rsp+58h] [rbp-41h]
  _BYTE v28[40]; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v29[4]; // [rsp+88h] [rbp-11h] BYREF

  v26 = -2LL;
  v8 = a2;
  v23 = (int)a2;
  v24 = a1;
  v27 = a4;
  v25 = a6;
  v10 = 1;
  if ( !byte_18012C414 )
  {
    byte_18012C415 = GetFileAttributesW(L"DolbyHrtfEnc.dll") != -1;
    byte_18012C414 = 1;
  }
  *a5 = 0;
  *a6 = 0;
  CSpatialAudioTechnologies::RegistryGates((__int64)a1, a2, a3, a4);
  if ( !*((_QWORD *)a1 + 1) && byte_18012AEA4 )
    goto LABEL_27;
  memset(v28, 0, sizeof(v28));
  v13 = 0;
  if ( v8 == 9 && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    v13 = (unsigned int)IsVirtualSurroundAllowedFor8ChannelEndpoint() != 0;
  v29[0] = 48000;
  v29[1] = 44100;
  v29[2] = 32000;
  v14 = 0;
  v15 = v29;
  while ( 1 )
  {
    LOBYTE(v12) = v13;
    FillHrtfDesiredFromat(v12, *v15, v28);
    v16 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a4, v28);
    v22[0] = v16;
    if ( v16 )
      break;
    if ( *(_DWORD *)&v28[20] == 1599 )
    {
      *(_DWORD *)&v28[20] = 255;
      v16 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a4, v28);
      v22[0] = v16;
      if ( v16 )
        break;
    }
    ++v14;
    ++v15;
    if ( v14 >= 3 )
      goto LABEL_10;
  }
  v17 = v23;
  v18 = v24;
  CSpatialAudioTech::AssignPriority(v24, v23, Headphones, 2u, a5, v22);
  v16 = v22[0];
  if ( v22[0] )
  {
    if ( *a5 )
    {
      *v25 = 1;
    }
    else
    {
      CSpatialAudioTech::AssignPriority(v18, v17, Speakers, 2u, a5, v22);
      v16 = v22[0];
    }
  }
LABEL_10:
  *(_OWORD *)a7 = *(_OWORD *)v28;
  *(_OWORD *)(a7 + 16) = *(_OWORD *)&v28[16];
  *(_QWORD *)(a7 + 32) = *(_QWORD *)&v28[32];
  if ( !v16 || !byte_18012C415 )
LABEL_27:
    v10 = 0;
  v19 = *(_QWORD *)(a4 + 56);
  if ( v19 )
  {
    LOBYTE(v11) = v19 != a4;
    v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL);
    if ( (char *)v20 == (char *)std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v19,
        v11);
    else
      v20(v19, v11);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return v10;
}
