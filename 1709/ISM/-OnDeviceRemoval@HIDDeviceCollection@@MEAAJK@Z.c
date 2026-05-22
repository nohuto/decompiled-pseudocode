/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20
 * Callers:
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180093690 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x180099A10 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x18009A770 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x18009B250 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x18009B9B0 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009C62C (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(
        HIDDeviceCollection *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  struct RIMDevice *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)RIMDeviceCollection::FindDeviceId(this, a2, &v5, a4) >= 0 )
    RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 4LL),
      *(_WORD *)(*((_QWORD *)v5 + 4) + 28LL),
      *(_WORD *)(*((_QWORD *)v5 + 4) + 30LL),
      *(_WORD *)(*((_QWORD *)v5 + 4) + 32LL));
  return 0LL;
}
