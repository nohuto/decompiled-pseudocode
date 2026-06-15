/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x180029438
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800289A4 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C9DB0 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800D5DD4 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028D80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_180028D80.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028DD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180028DD0.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029234 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateReader(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        void **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, void **); // rax
  unsigned int Interface; // eax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  void (*v10)(void); // rax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  const unsigned __int16 *v16; // [rsp+30h] [rbp-39h] BYREF
  struct IPropertyStore *v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct IPropertyStore **v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]
  struct IPropertyStore **v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+98h] [rbp+2Fh]
  int v26; // [rsp+9Ch] [rbp+33h]

  v18 = 0LL;
  v16 = a1;
  v17 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    LODWORD(v16) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
                     &v18,
                     &v16,
                     &v17);
    v4 = (unsigned int)v16;
    if ( (int)v16 < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "Create_SpatialAudioDeviceStateReader");
        v23 = 0;
        v26 = 0;
        v21 = &v17;
        v22 = 4;
        v25 = 4;
        LODWORD(v17) = 53;
        v24 = (struct IPropertyStore **)&v16;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v14, v15, 5u, &pData);
      }
    }
    else
    {
      v5 = v18 + 568;
      v6 = **(__int64 (__fastcall ***)(__int64, __int64, void **))(v18 + 568);
      if ( v6 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::QueryInterface(
                      v5,
                      (__int64)&GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
                      a3);
      else
        Interface = v6(v5, (__int64)&GUID_10002311_cdcb_40d4_9791_eb7aa089009e, a3);
      v4 = Interface;
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDeviceStateReader");
      v23 = 0;
      v26 = 0;
      v21 = (struct IPropertyStore **)&v16;
      v22 = 4;
      v25 = 4;
      LODWORD(v16) = 48;
      LODWORD(v17) = -2147024809;
      v24 = &v17;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v12, v13, 5u, &pData);
    }
  }
  v8 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    v9 = (volatile signed __int32 *)(v8 + 568);
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release(v9);
    else
      v10();
  }
  return v4;
}
