/*
 * XREFs of ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1801171E0
 * Callers:
 *     ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180116F50 (-Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180117024 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::ProcessOnDeviceStateChanged(__int64 **this, const unsigned __int16 *a2, int a3)
{
  unsigned int v4; // edi
  EndpointDevice *v5; // rbx
  int EndpointDevice; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 (__fastcall *v10)(EndpointDevice *); // rax
  struct IEndpointDevice *v12; // [rsp+20h] [rbp-20h] BYREF
  BSTR bstrString[3]; // [rsp+28h] [rbp-18h] BYREF
  int v14; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+78h] [rbp+38h] BYREF

  bstrString[1] = (BSTR)-2LL;
  v4 = 0;
  v5 = 0LL;
  v12 = 0LL;
  bstrString[0] = 0LL;
  v14 = 0;
  v15 = 0;
  if ( a3 != 1 && a3 != 8 )
  {
    EndpointDevice = AudioDeviceMgr::ProcessOnDeviceRemoved((AudioDeviceMgr *)this, a2);
    if ( EndpointDevice >= 0 )
      goto LABEL_14;
    goto LABEL_6;
  }
  EndpointDevice = AudioDeviceMgr::GetEndpointDevice((AudioDeviceMgr *)this, a2, &v14, &v12);
  v5 = v12;
  if ( EndpointDevice < 0 )
    goto LABEL_6;
  v7 = this[5];
  if ( v7 )
  {
    v8 = *v7;
    if ( v14 )
      (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v8 + 24))(v7, v12);
    else
      (*(void (__fastcall **)(__int64 *, struct IEndpointDevice *))(v8 + 40))(v7, v12);
  }
  EndpointDevice = (*(__int64 (__fastcall **)(EndpointDevice *, BSTR *))(*(_QWORD *)v5 + 40LL))(v5, bstrString);
  if ( EndpointDevice < 0 )
  {
LABEL_6:
    v4 = EndpointDevice;
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(EndpointDevice *, int *))(*(_QWORD *)v5 + 32LL))(v5, &v15);
  if ( v9 < 0 )
    v4 = v9;
LABEL_14:
  SysFreeString(bstrString[0]);
  if ( v5 )
  {
    v10 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v5 + 16LL);
    if ( v10 == EndpointDevice::Release )
      EndpointDevice::Release(v5);
    else
      v10(v5);
  }
  return v4;
}
