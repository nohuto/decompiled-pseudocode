/*
 * XREFs of ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C9DB0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800B7AFC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     Create_SpatialAudioDeviceStateReader @ 0x180029438 (Create_SpatialAudioDeviceStateReader.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     MigrateSpatialProperties @ 0x1800C9EF0 (MigrateSpatialProperties.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x1800D3704 (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x1800D3E68 (Create_SpatialAudioDeviceStateWriter.c)
 *     Create_SpatialAudioConfigureDevice @ 0x1800D5F84 (Create_SpatialAudioConfigureDevice.c)
 */

__int64 __fastcall CSpatialProperties::MakeActive(
        CSpatialProperties *this,
        char a2,
        struct IMMDevice *a3,
        struct IPropertyStore *a4)
{
  int SpatialAudioConfigureDevice; // ebx
  LPVOID pv; // [rsp+50h] [rbp+18h] BYREF

  pv = 0LL;
  if ( a3 && a4 )
  {
    if ( *((_QWORD *)this + 5) || *((_QWORD *)this + 6) )
    {
      SpatialAudioConfigureDevice = -2147418113;
    }
    else
    {
      SpatialAudioConfigureDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a3->lpVtbl->GetId)(a3, &pv);
      if ( SpatialAudioConfigureDevice >= 0 )
      {
        MigrateSpatialProperties(a4, pv);
        SpatialAudioConfigureDevice = Create_SpatialAudioConfigureDevice(pv, a4, (char *)this + 40);
        if ( SpatialAudioConfigureDevice >= 0 )
        {
          SpatialAudioConfigureDevice = Create_SpatialAudioDevicePropertyReader(pv, a4, (char *)this + 48);
          if ( SpatialAudioConfigureDevice >= 0 )
          {
            SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateReader(
                                            (const unsigned __int16 *)pv,
                                            a4,
                                            (void **)this + 7);
            if ( SpatialAudioConfigureDevice >= 0 )
            {
              SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateWriter(pv, a4, (char *)this + 64);
              if ( SpatialAudioConfigureDevice >= 0 )
                *((_BYTE *)this + 72) = a2;
            }
          }
        }
      }
    }
  }
  else
  {
    SpatialAudioConfigureDevice = -2147024809;
  }
  CoTaskMemFree(pv);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_25;
  if ( !*((_QWORD *)this + 5) || !*((_QWORD *)this + 6) )
    SpatialAudioConfigureDevice = -2147418113;
  if ( SpatialAudioConfigureDevice < 0 )
  {
LABEL_25:
    if ( *((_QWORD *)this + 5) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
    if ( *((_QWORD *)this + 6) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 6, 0LL);
  }
  return (unsigned int)SpatialAudioConfigureDevice;
}
