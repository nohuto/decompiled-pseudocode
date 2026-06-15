/*
 * XREFs of Create_SpatialAudioMetadataDictionaryFromData @ 0x1800D92D0
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1800D1660 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x1800D81FC (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 */

__int64 __fastcall Create_SpatialAudioMetadataDictionaryFromData(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  unsigned int v11; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h] BYREF
  SpatialAudioMetadataDictionary *v13[2]; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  unsigned int *v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  unsigned int *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]

  v13[0] = 0LL;
  v12 = a2;
  if ( a4 )
  {
    *a4 = 0LL;
    v13[1] = 0LL;
    v11 = 1;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v13);
    LODWORD(v12) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,enum DictionaryLoadKind,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
                     v13,
                     &v11,
                     (__int64)&GUID_00000000_0000_0000_0000_000000000000);
    v5 = v12;
    if ( (int)v12 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(SpatialAudioMetadataDictionary *, GUID *, _QWORD *))v13[0])(
             v13[0],
             &GUID_7175fd87_aec9_42ed_ad43_364817a8ed7a,
             a4);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioMetadataDictionaryFromData");
      v18 = 0;
      v21 = 0;
      v16 = &v11;
      v17 = 4;
      v20 = 4;
      v11 = 118;
      v19 = (unsigned int *)&v12;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v8, v9, 5u, &pData);
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioMetadataDictionaryFromData");
      v18 &= (unsigned int)v6;
      v21 &= (unsigned int)v6;
      v16 = (unsigned int *)&v12;
      v17 = (_DWORD)v6 + 4;
      v20 = (_DWORD)v6 + 4;
      LODWORD(v12) = 113;
      v11 = -2147024809;
      v19 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v7, v6, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v13);
  return v5;
}
