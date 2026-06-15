/*
 * XREFs of ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30
 * Callers:
 *     ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x180116A10 (-GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180116F64 (-ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1801171E0 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180116838 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18011686C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::GetEndpointDevice(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        int *a3,
        struct IEndpointDevice **a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  int EndpointDeviceInCollection; // eax
  __int64 (__fastcall *v11)(EndpointDevice *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v14; // [rsp+30h] [rbp-10h]
  EndpointDevice *v15; // [rsp+70h] [rbp+30h] BYREF
  struct IMMDevice *v16; // [rsp+78h] [rbp+38h] BYREF

  v8 = 0;
  v15 = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 88));
  if ( !a2 )
  {
    v8 = -2147024809;
    goto LABEL_20;
  }
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_20;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned int)AudioDeviceMgr::FindEndpointDeviceInCollection(this, a2, &v15, 0LL) != -2147023728 )
    goto LABEL_16;
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         a2,
         &v16);
  if ( v9 >= 0 )
  {
    v9 = AudioDeviceMgr::AddEndpointDevice(this, v16, &v15);
    if ( v9 >= 0 )
    {
      if ( a3 )
        *a3 = 1;
      if ( v16 )
        ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
LABEL_16:
      if ( v15
        || (EndpointDeviceInCollection = AudioDeviceMgr::FindEndpointDeviceInCollection(this, a2, &v15, 0LL),
            EndpointDeviceInCollection >= 0) )
      {
        ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v15, a4);
      }
      else
      {
        v8 = EndpointDeviceInCollection;
      }
      goto LABEL_20;
    }
  }
  v8 = v9;
  if ( v16 )
    ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
LABEL_20:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v15 )
  {
    v11 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v15 + 16LL);
    if ( v11 == EndpointDevice::Release )
      EndpointDevice::Release(v15);
    else
      v11(v15);
  }
  return v8;
}
