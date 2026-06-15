/*
 * XREFs of ?FindEndpointDeviceInCollection@AudioDeviceMgr@@UEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x1800E6FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x1800E6BF4 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E7248 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::FindEndpointDeviceInCollection(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        struct IEndpointDevice **a3,
        struct IEndpointCollection **a4)
{
  unsigned int v8; // ebx
  int DataFlow; // eax
  AudioDeviceMgr *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  struct IMMDevice *v13[6]; // [rsp+28h] [rbp-30h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v14; // [rsp+68h] [rbp+10h] BYREF

  v13[1] = (struct IMMDevice *)-2LL;
  v8 = 0;
  v13[0] = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      DataFlow = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 6)
                                                                                                  + 40LL))(
                   *((_QWORD *)this + 6),
                   a2,
                   v13);
      if ( DataFlow < 0
        || (DataFlow = AudioDeviceMgr::GetDataFlow(v10, v13[0], &v14), DataFlow < 0)
        || (DataFlow = (*(__int64 (__fastcall **)(AudioDeviceMgr *, _QWORD, __int64 *))(*(_QWORD *)this + 24LL))(
                         this,
                         (unsigned int)v14,
                         &v12),
            DataFlow < 0)
        || (DataFlow = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v12 + 48LL))(
                         v12,
                         a2,
                         a3),
            DataFlow < 0) )
      {
        v8 = DataFlow;
      }
      else if ( a4 )
      {
        ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v12, a4);
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13[0] )
    ((void (__fastcall *)(struct IMMDevice *))v13[0]->lpVtbl->Release)(v13[0]);
  return v8;
}
