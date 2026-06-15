/*
 * XREFs of ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x180054E10
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     Create_SpatialAudioConfigureDevice @ 0x18004B278 (Create_SpatialAudioConfigureDevice.c)
 *     MigrateSpatialProperties @ 0x18004B3CC (MigrateSpatialProperties.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x18004B61C (Create_SpatialAudioDeviceStateWriter.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004BFE0 (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18004CF18 (Create_SpatialAudioDeviceStateReader.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     DoesPlatformSupportSpatialAudio @ 0x18005FC08 (DoesPlatformSupportSpatialAudio.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpatialProperties::MakeActive(
        struct IUnknown **this,
        char a2,
        struct IMMDevice *a3,
        struct IPropertyStore *a4)
{
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  int SpatialAudioConfigureDevice; // ebx
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  const GUID *v13; // r9
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-18h] BYREF

  pv = 0LL;
  if ( !a3 || !a4 )
  {
    SpatialAudioConfigureDevice = -2147024809;
LABEL_23:
    if ( this[5] )
      ATL::AtlComPtrAssign(this + 5, 0LL);
    if ( this[6] )
      ATL::AtlComPtrAssign(this + 6, 0LL);
    return (unsigned int)SpatialAudioConfigureDevice;
  }
  v7 = this + 5;
  if ( this[5] || (v8 = this + 6, this[6]) )
  {
    SpatialAudioConfigureDevice = -2147418113;
    goto LABEL_23;
  }
  SpatialAudioConfigureDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a3->lpVtbl->GetId)(a3, &pv);
  if ( SpatialAudioConfigureDevice >= 0 )
  {
    if ( (unsigned __int8)DoesPlatformSupportSpatialAudio() && (unsigned int)hProvider > 4 )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)pv);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801493EB, v15, v16, 3u, &pData);
    }
    MigrateSpatialProperties((__int64)a4, (__int64)pv);
    SpatialAudioConfigureDevice = Create_SpatialAudioConfigureDevice((__int64)pv, (__int64)a4, v7, v10);
    if ( SpatialAudioConfigureDevice >= 0 )
    {
      SpatialAudioConfigureDevice = Create_SpatialAudioDevicePropertyReader((__int64)pv, (__int64)a4, v8, v11);
      if ( SpatialAudioConfigureDevice >= 0 )
      {
        SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateReader((__int64)pv, (__int64)a4, this + 7, v12);
        if ( SpatialAudioConfigureDevice >= 0 )
        {
          SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateWriter((__int64)pv, (__int64)a4, this + 8, v13);
          if ( SpatialAudioConfigureDevice >= 0 )
            *((_BYTE *)this + 72) = a2;
        }
      }
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_23;
  if ( !*v7 || !*v8 )
    SpatialAudioConfigureDevice = -2147418113;
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_23;
  return (unsigned int)SpatialAudioConfigureDevice;
}
