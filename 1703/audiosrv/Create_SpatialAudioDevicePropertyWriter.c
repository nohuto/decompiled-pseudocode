/*
 * XREFs of Create_SpatialAudioDevicePropertyWriter @ 0x180046350
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z @ 0x18003BF98 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBG@Z @ 0x18004640C (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x1800464B0 (-InternalRelease@-$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioDevicePropertyWriter@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046510 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioDevicePropertyWriter@@U-$Interface.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyWriter(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  int *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]

  v13[0] = 0LL;
  v12 = a1;
  if ( a2 )
  {
    *a2 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(v13);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &>(
            v13,
            &v12);
    v3 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyWriter");
        v18 = 0;
        v21 = 0;
        v16 = (int *)&v12;
        v17 = 4;
        v20 = 4;
        LODWORD(v12) = 84;
        v19 = &v11;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v9, v10, 5u, &pData);
      }
    }
    else
    {
      v4 = **(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v13[0];
      if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioDevicePropertyWriter,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioDevicePropertyWriter,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      v13[0],
                      &IID_ISpatialAudioDevicePropertyWriter,
                      a2);
      else
        Interface = v4(v13[0], &IID_ISpatialAudioDevicePropertyWriter, a2);
      v3 = Interface;
    }
  }
  else
  {
    v3 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDevicePropertyWriter");
      v18 = 0;
      v21 = 0;
      v16 = &v11;
      v17 = 4;
      v20 = 4;
      v11 = 79;
      LODWORD(v12) = -2147024809;
      v19 = (int *)&v12;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v7, v8, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(v13);
  return v3;
}
