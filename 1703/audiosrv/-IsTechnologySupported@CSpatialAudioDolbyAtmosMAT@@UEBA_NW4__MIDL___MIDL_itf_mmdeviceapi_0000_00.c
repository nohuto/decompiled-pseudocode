/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003D670
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x180040630 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_180040630.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        __int64 a7)
{
  char v9; // bl
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  _OWORD *v13; // r15
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, _BYTE **); // rax
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64); // rax
  _BYTE *v20; // [rsp+28h] [rbp-61h] BYREF
  _BYTE *v21; // [rsp+30h] [rbp-59h]
  __int64 v22; // [rsp+38h] [rbp-51h]
  __int64 v23; // [rsp+40h] [rbp-49h]
  _BYTE v24[40]; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v25[3]; // [rsp+70h] [rbp-19h] BYREF

  v22 = -2LL;
  v23 = a4;
  v21 = a6;
  v9 = 1;
  if ( !byte_18012C410 )
  {
    byte_18012C411 = GetFileAttributesW(L"DolbyMATEnc.dll") != -1;
    byte_18012C410 = 1;
  }
  *a5 = 0;
  *a6 = 0;
  CSpatialAudioTechnologies::RegistryGates(a1, a2, a3, a4);
  if ( !*(_QWORD *)(a1 + 8) && byte_18012AEA4 )
    goto LABEL_11;
  memset(v24, 0, sizeof(v24));
  v25[0] = GUID_0000030c_0cea_0010_8000_00aa00389b71;
  v25[1] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
  v25[2] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
  v11 = 3;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsVirtualSurroundAllowedFor8ChannelEndpoint() )
  {
    v11 = 2;
  }
  v12 = 0;
  v13 = v25;
  while ( 1 )
  {
    *(_QWORD *)v24 = 0x2EE000008FFFELL;
    *(_DWORD *)&v24[14] = 1441808;
    *(_OWORD *)&v24[24] = *v13;
    *(_WORD *)&v24[18] = 16;
    *(_DWORD *)&v24[20] = 1599;
    *(_WORD *)&v24[12] = 16;
    *(_DWORD *)&v24[8] = 3072000;
    v20 = v24;
    v14 = *(_QWORD *)(a4 + 56);
    if ( !v14 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180060316LL);
    }
    v15 = *(__int64 (__fastcall **)(__int64, _BYTE **))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v15 == (char *)std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call
       ? std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call(
           v14,
           &v20)
       : (unsigned __int8)v15(v14, &v20) )
    {
      break;
    }
    ++v12;
    ++v13;
    if ( v12 >= v11 )
      goto LABEL_11;
  }
  *a5 = 1;
  *v21 = 0;
  *(_OWORD *)a7 = *(_OWORD *)v24;
  *(_OWORD *)(a7 + 16) = *(_OWORD *)&v24[16];
  *(_QWORD *)(a7 + 32) = *(_QWORD *)&v24[32];
  if ( !byte_18012C411 )
LABEL_11:
    v9 = 0;
  v17 = *(_QWORD *)(a4 + 56);
  if ( v17 )
  {
    LOBYTE(v10) = v17 != a4;
    v18 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL);
    if ( (char *)v18 == (char *)std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v17,
        v10);
    else
      v18(v17, v10);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return v9;
}
