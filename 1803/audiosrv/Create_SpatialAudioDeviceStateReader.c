/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x18004CF18
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004B8F0 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004CE1C (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x180054E10 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_18004BBD0.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004CFF8 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D0E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004D0E0.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateReader(__int64 a1, __int64 a2, _QWORD *a3, const GUID *a4)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  void (*v13)(void); // rax
  __int64 v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16; // [rsp+38h] [rbp-31h] BYREF
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  __int64 *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  __int64 *v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]

  v17 = 0LL;
  v15 = a1;
  v16 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    LODWORD(v15) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
                     &v17,
                     &v15,
                     &v16);
    v7 = v15;
    if ( (int)v15 < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v19 = "Create_SpatialAudioDeviceStateReader";
        v22 = &v16;
        v23 = 4;
        v26 = 4;
        v20 = 37;
        LODWORD(v16) = 53;
        v25 = &v15;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v5, v6, 5u, &pData);
      }
    }
    else
    {
      v8 = v17 + 568;
      v9 = **(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))(v17 + 568);
      if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::QueryInterface(
                      v8,
                      &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
                      a3);
      else
        Interface = v9(v8, &GUID_10002311_cdcb_40d4_9791_eb7aa089009e, a3);
      v7 = Interface;
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = "Create_SpatialAudioDeviceStateReader";
      v22 = &v15;
      v23 = 4;
      v26 = 4;
      v20 = 37;
      LODWORD(v15) = 48;
      LODWORD(v16) = -2147024809;
      v25 = &v16;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, 0LL, a4, 5u, &pData);
    }
  }
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    v12 = v11 + 568;
    v13 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
    if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release(v12);
    else
      v13();
  }
  return v7;
}
