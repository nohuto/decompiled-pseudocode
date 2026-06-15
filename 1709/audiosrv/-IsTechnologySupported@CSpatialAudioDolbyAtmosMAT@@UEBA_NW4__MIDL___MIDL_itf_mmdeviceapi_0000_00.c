/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180092680 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800CF868 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
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
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rcx
  unsigned int v22; // [rsp+28h] [rbp-89h]
  _OWORD *v23; // [rsp+30h] [rbp-81h]
  _BYTE v24[40]; // [rsp+60h] [rbp-51h] BYREF
  _OWORD v25[2]; // [rsp+88h] [rbp-29h] BYREF

  v11 = 1;
  if ( !byte_18014CAC9 )
  {
    byte_18014CAC8 = GetFileAttributesW(L"DolbyMATEnc.dll") != -1;
    byte_18014CAC9 = 1;
  }
  *a6 = 0;
  *a7 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( !*(_QWORD *)(a1 + 8) && byte_18014B220 )
    goto LABEL_33;
  memset(v24, 0, sizeof(v24));
  v25[0] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
  v25[1] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
  v13 = 2;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver(v14, v12, v15, v16) )
    v13 = 1;
  if ( !a4 )
    goto LABEL_27;
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
      goto LABEL_33;
    }
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_QWORD *)(a4 + 24) - *(_QWORD *)&v25[v17];
      if ( !v18 )
        v18 = *(_QWORD *)(a4 + 32) - *((_QWORD *)&v25[v17] + 1);
      if ( !v18 && (unsigned __int8)std::_Func_class<void,IAudioStreamInfo *>::operator()(a5, (__int64)v24) )
        break;
      if ( ++v17 >= v13 )
        goto LABEL_33;
    }
  }
  else
  {
LABEL_27:
    v22 = 0;
    v19 = v25;
    v23 = v25;
    while ( 1 )
    {
      *(_QWORD *)v24 = 0x2EE000008FFFELL;
      *(_DWORD *)&v24[14] = 1441808;
      *(_OWORD *)&v24[24] = *v19;
      *(_WORD *)&v24[18] = 16;
      *(_DWORD *)&v24[20] = 1599;
      *(_WORD *)&v24[12] = 16;
      *(_DWORD *)&v24[8] = 3072000;
      if ( (unsigned __int8)std::_Func_class<void,IAudioStreamInfo *>::operator()(a5, (__int64)v24) )
        break;
      ++v22;
      v19 = ++v23;
      if ( v22 >= v13 )
        goto LABEL_33;
    }
  }
  *a6 = 1;
  *a7 = 0;
  *(_OWORD *)a8 = *(_OWORD *)v24;
  *(_OWORD *)(a8 + 16) = *(_OWORD *)&v24[16];
  *(_QWORD *)(a8 + 32) = *(_QWORD *)&v24[32];
  if ( !byte_18014CAC8 )
LABEL_33:
    v11 = 0;
  v20 = *(_QWORD *)(a5 + 56);
  if ( v20 )
  {
    LOBYTE(v12) = v20 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v12);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v11;
}
