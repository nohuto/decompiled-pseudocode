/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIThumbnailInteropDevice@@U?$InterfaceList@UIThumbnailDeviceInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180167280
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIThumbnailInteropDevice@@U?$InterfaceList@UIThumbnailDeviceInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180167630 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIThumbnailInteropDevice@@U-$Interf_ea_180167630.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IThumbnailInteropDevice,Microsoft::WRL::Details::InterfaceList<IThumbnailDeviceInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( *a2 == -1974014999
      && a2[1] == *(_DWORD *)&GUID_8a56ebe9_cf36_4dd5_9789_1a7c95f10d61.Data2
      && a2[2] == *(_DWORD *)GUID_8a56ebe9_cf36_4dd5_9789_1a7c95f10d61.Data4
      && a2[3] == *(_DWORD *)&GUID_8a56ebe9_cf36_4dd5_9789_1a7c95f10d61.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      if ( *a2 != 683456883
        || a2[1] != *(_DWORD *)&GUID_28bcb973_93d1_4f0f_9501_4ef28d4f29d1.Data2
        || a2[2] != *(_DWORD *)GUID_28bcb973_93d1_4f0f_9501_4ef28d4f29d1.Data4
        || a2[3] != *(_DWORD *)&GUID_28bcb973_93d1_4f0f_9501_4ef28d4f29d1.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
      *a3 = a1 + 8;
    }
    a1 = *a3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
