/*
 * XREFs of ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E7248
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E6968 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@UEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x1800E6FF0 (-FindEndpointDeviceInCollection@AudioDeviceMgr@@UEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::GetDataFlow(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a3)
{
  struct IMMDevice *v4; // r9
  _QWORD *v5; // rcx
  int v6; // ebx
  int v7; // eax
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD **))a2->lpVtbl->QueryInterface)(
             a2,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v9);
      v5 = v9;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *))(*v9 + 24LL))(
               v9,
               a3);
        v6 = 0;
        if ( v7 < 0 )
          v6 = v7;
        v5 = v9;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, _QWORD, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *, struct IMMDevice *, __int64))(*v5 + 16LL))(
      v5,
      *v5,
      a3,
      v4,
      -2LL);
  return (unsigned int)v6;
}
