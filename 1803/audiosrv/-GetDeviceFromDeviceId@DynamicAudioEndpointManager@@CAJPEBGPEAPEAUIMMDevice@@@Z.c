/*
 * XREFs of ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x1800FC268
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIMMDevice@@@Z @ 0x18003FE30 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::GetDeviceFromDeviceId(
        const unsigned __int16 *a1,
        struct IMMDevice **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IMMDevice *v7; // rcx
  struct IMMDevice *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMMDevice *v11; // [rsp+60h] [rbp+18h] BYREF
  LPVOID v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 480LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v4);
    v7 = v11;
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)v12 + 40LL))(
         v12,
         a1,
         &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 482LL;
    goto LABEL_5;
  }
  v8 = v11;
  v7 = 0LL;
  v11 = 0LL;
  *a2 = v8;
  v5 = 0;
LABEL_7:
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  if ( v12 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
  return v5;
}
