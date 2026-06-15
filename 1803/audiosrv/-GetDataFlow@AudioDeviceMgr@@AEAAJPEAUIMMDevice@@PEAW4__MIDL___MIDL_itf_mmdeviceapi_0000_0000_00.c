/*
 * XREFs of ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800560C8
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18011686C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::GetDataFlow(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
             a2,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v8);
      v4 = v8;
      if ( v5 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *))(*(_QWORD *)v8 + 24LL))(
               v8,
               a3);
        v5 = 0;
        if ( v6 < 0 )
          v5 = v6;
        v4 = v8;
      }
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
