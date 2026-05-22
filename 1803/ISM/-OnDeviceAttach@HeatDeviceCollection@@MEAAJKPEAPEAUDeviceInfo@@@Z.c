/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073B60
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(
        HeatDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  void *v6; // rsi
  int DeviceId; // edi
  unsigned int *v8; // r9
  __int64 v9; // rbx
  struct DeviceInfo *v11; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-28h]
  struct RIMDevice *v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  memset_0(v12, 0, 0x28uLL);
  v6 = operator new(0x3D8uLL);
  memset_0(v6, 0, 0x3D8uLL);
  *((_DWORD *)v6 + 2) = 984;
  v11 = (struct DeviceInfo *)v6;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, &v11);
  if ( DeviceId >= 0 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v15, v8);
    if ( DeviceId >= 0 )
    {
      v9 = *((_QWORD *)v15 + 2);
      RIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v9, 0LL);
      if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v9, v12) >= 0 )
      {
        *((_QWORD *)v6 + 3) = v13;
        *((_DWORD *)v6 + 8) = v14;
      }
      *a3 = v11;
    }
  }
  return (unsigned int)DeviceId;
}
