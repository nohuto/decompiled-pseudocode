/*
 * XREFs of Create_SpatialAudioDeviceStateWriter @ 0x18004B61C
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x180054E10 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x1800F9694 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B6D8 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BA88 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateWriter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BB30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004BB30.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateWriter(__int64 a1, __int64 a2, _QWORD *a3, const GUID *a4)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  __int64 *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  __int64 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]

  v14[0] = 0LL;
  v12 = a1;
  v13 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateWriter>::InternalRelease(v14);
    LODWORD(v12) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
                     v14,
                     &v12,
                     &v13);
    v7 = v12;
    if ( (int)v12 < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v16 = "Create_SpatialAudioDeviceStateWriter";
        v19 = &v13;
        v20 = 4;
        v23 = 4;
        v17 = 37;
        LODWORD(v13) = 68;
        v22 = &v12;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v5, v6, 5u, &pData);
      }
    }
    else
    {
      v8 = v14[0] + 568LL;
      v9 = **(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))(v14[0] + 568LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::QueryInterface(
                      v8,
                      &GUID_3927b438_dd02_4ef9_b08d_f52d17592a32,
                      a3);
      else
        Interface = v9(v8, &GUID_3927b438_dd02_4ef9_b08d_f52d17592a32, a3);
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
      v16 = "Create_SpatialAudioDeviceStateWriter";
      v19 = &v12;
      v20 = 4;
      v23 = 4;
      v17 = 37;
      LODWORD(v12) = 63;
      LODWORD(v13) = -2147024809;
      v22 = &v13;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, 0LL, a4, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateWriter>::InternalRelease(v14);
  return v7;
}
