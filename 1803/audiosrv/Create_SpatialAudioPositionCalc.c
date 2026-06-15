/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x18004C138
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004CE1C (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1801056A0 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x18004C200 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D140.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004D1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPos.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioPositionCalc(_QWORD *a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(_QWORD, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  __int64 (*v10)(void); // rax
  int v12; // [rsp+30h] [rbp-19h] BYREF
  int v13; // [rsp+34h] [rbp-15h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  int *v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]
  int *v22; // [rsp+80h] [rbp+37h]
  int v23; // [rsp+88h] [rbp+3Fh]
  int v24; // [rsp+8Ch] [rbp+43h]

  v14 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v12 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc,>(&v14);
    v7 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v16 = "Create_SpatialAudioPositionCalc";
        v19 = &v13;
        v20 = 4;
        v23 = 4;
        v17 = 32;
        v13 = 156;
        v22 = &v12;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v5, v6, 5u, &pData);
      }
    }
    else
    {
      v8 = **v14;
      if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface(
                      v14,
                      &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
                      a1);
      else
        Interface = v8(v14, &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545, a1);
      v7 = Interface;
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "Create_SpatialAudioPositionCalc";
      v19 = &v12;
      v20 = 4;
      v23 = 4;
      v17 = 32;
      v12 = 151;
      v13 = -2147024809;
      v22 = &v13;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, a3, a4, 5u, &pData);
    }
  }
  if ( v14 )
  {
    v10 = (__int64 (*)(void))(*v14)[2];
    if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release();
    else
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))v10)(v14);
  }
  return v7;
}
