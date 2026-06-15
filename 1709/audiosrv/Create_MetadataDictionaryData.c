/*
 * XREFs of Create_MetadataDictionaryData @ 0x1800D7FC4
 * Callers:
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D4168 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D46F4 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800D4B5C (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x1800D7918 (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 */

__int64 __fastcall Create_MetadataDictionaryData(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  unsigned __int16 v12; // [rsp+38h] [rbp-29h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+44h] [rbp-1Dh] BYREF
  SpatialAudioMetadataDictionaryData *v15; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+17h] BYREF
  int *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]
  int *v21; // [rsp+98h] [rbp+37h]
  __int64 v22; // [rsp+A0h] [rbp+3Fh]

  v12 = 0;
  v16 = 0;
  v15 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionaryData,SpatialAudioMetadataDictionaryData,enum DictionaryLoadKind &,_GUID const &,unsigned short &>(
            &v15,
            &v16,
            a2,
            &v12);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(SpatialAudioMetadataDictionaryData *, GUID *, _QWORD *))v15)(
             v15,
             &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf,
             a4);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_MetadataDictionaryData");
      v14 = 93;
      v19 = &v14;
      v21 = &v13;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_MetadataDictionaryData");
      v13 = 88;
      v19 = &v13;
      v21 = &v14;
      v20 = 4LL;
      v14 = -2147024809;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v7, v8, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
  return v6;
}
