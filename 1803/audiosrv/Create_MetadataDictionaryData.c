/*
 * XREFs of Create_MetadataDictionaryData @ 0x18010627C
 * Callers:
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801027A8 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180102D50 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801031CC (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x180105BDC (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 */

__int64 __fastcall Create_MetadataDictionaryData(__int64 a1, __int64 a2, const GUID *a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned __int16 v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+40h] [rbp-21h] BYREF
  int v12; // [rsp+44h] [rbp-1Dh] BYREF
  SpatialAudioMetadataDictionaryData *v13; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  const char *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  int *v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]
  int *v20; // [rsp+98h] [rbp+37h]
  __int64 v21; // [rsp+A0h] [rbp+3Fh]

  v10 = 0;
  v14 = 0;
  v13 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionaryData,SpatialAudioMetadataDictionaryData,enum DictionaryLoadKind &,_GUID const &,unsigned short &>(
            &v13,
            &v14,
            a2,
            &v10);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(SpatialAudioMetadataDictionaryData *, GUID *, _QWORD *))v13)(
             v13,
             &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf,
             a4);
    }
    else if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v17 = 30LL;
      v16 = "Create_MetadataDictionaryData";
      v12 = 93;
      v18 = &v12;
      v19 = 4LL;
      v20 = &v11;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v7, v8, 5u, &pData);
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v17 = 30LL;
      v16 = "Create_MetadataDictionaryData";
      v11 = 88;
      v18 = &v11;
      v19 = 4LL;
      v12 = -2147024809;
      v20 = &v12;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, a3, 0LL, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return v6;
}
