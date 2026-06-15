/*
 * XREFs of ?InitialRegisterForDevice@CpuManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x1400371C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpuManager::InitialRegisterForDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct CpuManager::DeviceRegistrations::RegistrationData *a3)
{
  struct IAudioDeviceEndpointVtbl *lpVtbl; // rax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v10 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
         &v10);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 56LL))(
           v10,
           *((unsigned __int16 *)this + 224),
           *((_QWORD *)this + 57));
    if ( v7 >= 0 )
    {
      *(_QWORD *)a3 = a2;
      ((void (__fastcall *)(struct IAudioDeviceEndpoint *))a2->lpVtbl->AddRef)(a2);
      v7 = 0;
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
