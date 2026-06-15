/*
 * XREFs of ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180117024
 * Callers:
 *     ?Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180116F40 (-Process@DeviceRemovedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1801171E0 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18011686C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved(AudioDeviceMgr *this, const unsigned __int16 *a2)
{
  int EndpointDeviceInCollection; // esi
  EndpointDevice *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 (__fastcall *v10)(EndpointDevice *); // rax
  void (*v11)(void); // rax
  BSTR bstrString[2]; // [rsp+20h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+38h] [rbp-8h]
  int v16; // [rsp+60h] [rbp+20h] BYREF
  EndpointDevice *v17; // [rsp+70h] [rbp+30h] BYREF
  EndpointDevice *v18; // [rsp+78h] [rbp+38h] BYREF

  bstrString[1] = (BSTR)-2LL;
  v17 = 0LL;
  v18 = 0LL;
  bstrString[0] = 0LL;
  v16 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 88));
  EndpointDeviceInCollection = AudioDeviceMgr::FindEndpointDeviceInCollection(this, a2, &v17, &v18);
  v5 = v18;
  if ( EndpointDeviceInCollection < 0
    || (EndpointDeviceInCollection = (*(__int64 (__fastcall **)(EndpointDevice *, EndpointDevice *))(*(_QWORD *)v18 + 40LL))(
                                       v18,
                                       v17),
        EndpointDeviceInCollection < 0) )
  {
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
    {
      EndpointDeviceInCollection = (*(__int64 (__fastcall **)(__int64, EndpointDevice *, int *))(*(_QWORD *)v6 + 128LL))(
                                     v6,
                                     v17,
                                     &v16);
      if ( EndpointDeviceInCollection < 0 )
        goto LABEL_16;
      if ( v16 )
      {
        v7 = *((_QWORD *)this + 10);
        if ( v7 )
        {
          *((_QWORD *)this + 10) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
      }
    }
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
      (*(void (__fastcall **)(__int64, EndpointDevice *))(*(_QWORD *)v8 + 32LL))(v8, v17);
    v9 = (*(__int64 (__fastcall **)(EndpointDevice *, BSTR *))(*(_QWORD *)v17 + 40LL))(v17, bstrString);
    EndpointDeviceInCollection = 0;
    if ( v9 < 0 )
      EndpointDeviceInCollection = v9;
  }
LABEL_16:
  SysFreeString(bstrString[0]);
  if ( v5 )
  {
    v10 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v5 + 16LL);
    if ( v10 == EndpointDevice::Release )
      EndpointDevice::Release(v5);
    else
      v10(v5);
  }
  if ( v17 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
    if ( (char *)v11 == (char *)EndpointDevice::Release )
      EndpointDevice::Release(v17);
    else
      v11();
  }
  return (unsigned int)EndpointDeviceInCollection;
}
