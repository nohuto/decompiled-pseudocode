/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x18002916C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800289A4 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800D73F8 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028B90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPos.c)
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800290D4 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioPositionCalc(void **a1)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64, __int64, void **); // rax
  unsigned int Interface; // eax
  __int64 (__fastcall *v5)(volatile signed __int32 *); // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+34h] [rbp-15h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  int *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  v13 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioPositionCalc,ISpatialAudioPositionCalc,>((void **)&v13);
    v2 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "Create_SpatialAudioPositionCalc");
        v18 = 0;
        v21 = 0;
        v16 = &v12;
        v17 = 4;
        v20 = 4;
        v12 = 156;
        v19 = &v11;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v9, v10, 5u, &pData);
      }
    }
    else
    {
      v3 = **(__int64 (__fastcall ***)(__int64, __int64, void **))v13;
      if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::QueryInterface(
                      (__int64)v13,
                      (__int64)&GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
                      a1);
      else
        Interface = v3((__int64)v13, (__int64)&GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545, a1);
      v2 = Interface;
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioPositionCalc");
      v18 = 0;
      v21 = 0;
      v16 = &v11;
      v17 = 4;
      v20 = 4;
      v11 = 151;
      v12 = -2147024809;
      v19 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v7, v8, 5u, &pData);
    }
  }
  if ( v13 )
  {
    v5 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release(v13);
    else
      v5(v13);
  }
  return v2;
}
