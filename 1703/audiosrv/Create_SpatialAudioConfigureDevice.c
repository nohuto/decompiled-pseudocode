/*
 * XREFs of Create_SpatialAudioConfigureDevice @ 0x1800461F0
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@@Z @ 0x18003DC7C (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBG@Z @ 0x1800462AC (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVS.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180046568 (-InternalRelease@-$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioConfigureDevice@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800465D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioConfigureDevice@@U-$InterfaceList@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioConfigureDevice(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+7h] BYREF
  int *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  int *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  __int64 v22; // [rsp+C8h] [rbp+67h] BYREF

  v22 = a1;
  v13 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::InternalRelease(&v13);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioConfigureDevice,SpatialAudioConfigureDevice,unsigned short const * &>(
            &v13,
            &v22);
    v3 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "Create_SpatialAudioConfigureDevice");
        v18 = 0;
        v21 = 0;
        v16 = &v12;
        v17 = 4;
        v20 = 4;
        v12 = 78;
        v19 = &v11;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v9, v10, 5u, &pData);
      }
    }
    else
    {
      v4 = **v13;
      if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioConfigureDevice,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioConfigureDevice,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      v13,
                      &IID_ISpatialAudioConfigureDevice,
                      a2);
      else
        Interface = v4(v13, &IID_ISpatialAudioConfigureDevice, a2);
      v3 = Interface;
    }
  }
  else
  {
    v3 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioConfigureDevice");
      v18 = 0;
      v21 = 0;
      v16 = &v11;
      v17 = 4;
      v20 = 4;
      v11 = 73;
      v12 = -2147024809;
      v19 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v7, v8, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::InternalRelease(&v13);
  return v3;
}
