/*
 * XREFs of ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098F40
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18009D5E0 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098E48 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18009BC48 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::ConfirmDeviceFormat(
        struct CEndpointCharacteristics *a1,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        __int32 a4,
        int a5)
{
  GUID *v8; // rsi
  __int64 v9; // rbx
  AEError *CanRenderFormat; // rdi
  unsigned int v11; // r14d
  GUID *v12; // rax
  int v13; // edx
  _QWORD v15[4]; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+8h] BYREF
  struct _GUID *v18; // [rsp+B0h] [rbp+18h]

  v18 = a3;
  v15[1] = -2LL;
  v17 = 0LL;
  v15[0] = 0LL;
  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 2);
  v15[2] = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( *((_DWORD *)a1 + 6) )
    goto LABEL_12;
  LODWORD(CanRenderFormat) = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 24LL))(
                               v9,
                               &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                               23LL,
                               0LL,
                               &v17);
  if ( (int)CanRenderFormat < 0 )
    goto LABEL_14;
  v11 = a2->cbSize + 82;
  v12 = (GUID *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v12;
  if ( !v12 )
  {
    LODWORD(CanRenderFormat) = -2147024882;
    goto LABEL_14;
  }
  memset(v12, 0, v11);
  v8->Data1 = v11;
  v8[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
  v8[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  if ( a2->wFormatTag == 0xFFFE )
  {
    v8[2] = *(GUID *)((char *)&a2[1].nSamplesPerSec + 2);
  }
  else
  {
    v8[2] = GUID_00000000_0000_0010_8000_00aa00389b71;
    v8[2].Data1 = a2->wFormatTag;
  }
  memcpy_0(&v8[4], a2, a2->cbSize + 18LL);
  if ( a4 != 3 )
    LODWORD(CanRenderFormat) = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v17 + 24LL))(
                                 v17,
                                 v8,
                                 v8->Data1,
                                 0LL,
                                 v15);
  if ( !(_DWORD)CanRenderFormat )
  {
LABEL_12:
    v16 = *v18;
    CanRenderFormat = (AEError *)(unsigned int)CPolicyConfig::ConfirmDeviceCanRenderFormat(a1, a2, &v16, a4, a5);
    if ( AEError::DeviceInUse(CanRenderFormat, v13) )
      LODWORD(CanRenderFormat) = 0;
  }
  else
  {
    LODWORD(CanRenderFormat) = -2004287480;
  }
LABEL_14:
  operator delete(v8);
  if ( (int)CanRenderFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ConfirmDeviceFormat", 2408, (int)CanRenderFormat);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)CanRenderFormat;
}
