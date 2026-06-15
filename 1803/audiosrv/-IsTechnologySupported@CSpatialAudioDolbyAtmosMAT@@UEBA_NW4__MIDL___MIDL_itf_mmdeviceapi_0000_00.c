/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18004FD08 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005514C (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        const struct tWAVEFORMATEX *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        __int64 a8)
{
  char v11; // di
  __int64 v12; // rdx
  unsigned int v13; // r15d
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, __int64); // rax
  int v19; // esi
  __int64 v20; // rax
  unsigned int v21; // [rsp+28h] [rbp-89h]
  _OWORD *v22; // [rsp+30h] [rbp-81h]
  _BYTE v23[40]; // [rsp+60h] [rbp-51h] BYREF
  _OWORD v24[2]; // [rsp+88h] [rbp-29h] BYREF

  v11 = 1;
  if ( !byte_18018B0E0 )
  {
    byte_18018B0E1 = GetFileAttributesW(L"DolbyMATEnc.dll") != -1;
    byte_18018B0E0 = 1;
  }
  *a6 = 0;
  *a7 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( !*(_QWORD *)(a1 + 8) && byte_180189408 )
    goto LABEL_9;
  memset_0(v23, 0, sizeof(v23));
  v24[0] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
  v24[1] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
  v13 = 2;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v14) && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
    v13 = 1;
  if ( !a4 )
    goto LABEL_6;
  if ( a3 )
    a4 &= -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a4, a3) != 0);
  if ( a4 )
  {
    if ( *(_WORD *)a4 != 0xFFFE
      || *(_WORD *)(a4 + 16) != 22
      || *(_DWORD *)(a4 + 4) != 192000
      || *(_WORD *)(a4 + 2) != 8
      || *(_WORD *)(a4 + 14) != 16
      || *(_WORD *)(a4 + 18) != 16
      || *(_DWORD *)(a4 + 20) != 1599 && *(_DWORD *)(a4 + 20) != 255 )
    {
      goto LABEL_9;
    }
    v19 = 0;
    while ( 1 )
    {
      v20 = *(_QWORD *)(a4 + 24) - *(_QWORD *)&v24[v19];
      if ( !v20 )
        v20 = *(_QWORD *)(a4 + 32) - *((_QWORD *)&v24[v19] + 1);
      if ( !v20 && (unsigned __int8)std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, v23) )
        break;
      if ( ++v19 >= v13 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_6:
    v21 = 0;
    v15 = v24;
    v22 = v24;
    while ( 1 )
    {
      *(_QWORD *)v23 = 0x2EE000008FFFELL;
      *(_DWORD *)&v23[14] = 1441808;
      *(_OWORD *)&v23[24] = *v15;
      *(_WORD *)&v23[18] = 16;
      *(_DWORD *)&v23[20] = 1599;
      *(_WORD *)&v23[12] = 16;
      *(_DWORD *)&v23[8] = 3072000;
      if ( (unsigned __int8)std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, v23) )
        break;
      ++v21;
      v15 = ++v22;
      if ( v21 >= v13 )
        goto LABEL_9;
    }
  }
  *a6 = 1;
  *a7 = 0;
  *(_OWORD *)a8 = *(_OWORD *)v23;
  *(_OWORD *)(a8 + 16) = *(_OWORD *)&v23[16];
  *(_QWORD *)(a8 + 32) = *(_QWORD *)&v23[32];
  if ( !byte_18018B0E1 )
LABEL_9:
    v11 = 0;
  v16 = *(_QWORD *)(a5 + 56);
  if ( v16 )
  {
    LOBYTE(v12) = v16 != a5;
    v17 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL);
    if ( (char *)v17 == (char *)std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v16,
        v12);
    else
      v17(v16, v12);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v11;
}
