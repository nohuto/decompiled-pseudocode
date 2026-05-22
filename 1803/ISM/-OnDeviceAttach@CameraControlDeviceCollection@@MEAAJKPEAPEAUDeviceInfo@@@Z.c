/*
 * XREFs of ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074450
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@KUUsageList@CameraControlDeviceCollection@@$0BAA@@@QEAAJAEBKAEBUUsageList@CameraControlDeviceCollection@@@Z @ 0x180074978 (-SetValueForKey@-$FixedSizeMap@KUUsageList@CameraControlDeviceCollection@@$0BAA@@@QEAAJAEBKAEBUU.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall CameraControlDeviceCollection::OnDeviceAttach(
        CameraControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  void *v3; // rbx
  int DeviceId; // edi
  void *v7; // rax
  unsigned int *v8; // r9
  void *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  struct RIMDevice *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  v3 = 0LL;
  v11 = 0LL;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( DeviceId < 0 )
    goto LABEL_6;
  v7 = operator new[](0x28uLL);
  v10 = v7;
  v3 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x28uLL);
    LODWORD(v11) = 20;
    DeviceId = FixedSizeMap<unsigned long,CameraControlDeviceCollection::UsageList,256>::SetValueForKey(
                 (char *)this + 2760,
                 &v12,
                 &v10);
    if ( DeviceId < 0 )
      goto LABEL_7;
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v13, v8);
    if ( DeviceId >= 0 )
      return (unsigned int)DeviceId;
LABEL_6:
    if ( !v3 )
      return (unsigned int)DeviceId;
LABEL_7:
    operator delete(v3);
    return (unsigned int)DeviceId;
  }
  return (unsigned int)-2147024882;
}
