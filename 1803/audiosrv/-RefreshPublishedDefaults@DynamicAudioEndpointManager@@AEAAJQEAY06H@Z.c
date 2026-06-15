/*
 * XREFs of ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z @ 0x1800FC970
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1800FBBCC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x1800FC6B8 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z @ 0x1800FCBF8 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@H@Z.c)
 * Callees:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIMMDevice@@@Z @ 0x18003FE30 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1800FD3C0 (-PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DynamicAudioEndpointManager::RefreshPublishedDefaults(
        DynamicAudioEndpointManager *this,
        int (*const a2)[7])
{
  HRESULT Instance; // r12d
  int v5; // edi
  int v6; // esi
  int *v7; // r14
  int DefaultAudioEndpoint; // eax
  struct IMMDevice *v9; // rbx
  const WCHAR *v10; // r8
  LPVOID v12[2]; // [rsp+30h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+50h] BYREF
  struct IMMDevice *v14; // [rsp+98h] [rbp+58h] BYREF

  v12[1] = (LPVOID)-2LL;
  v12[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v12);
  if ( Instance >= 0 )
  {
    v5 = 0;
    while ( 2 )
    {
      v6 = 0;
      v7 = (int *)a2;
      do
      {
        if ( *v7 )
        {
          v14 = 0LL;
          pv = 0LL;
          DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint((__int64)this, 0LL, v5, v6, &v14);
          v9 = v14;
          if ( DefaultAudioEndpoint >= 0 )
            ((void (__fastcall *)(struct IMMDevice *, LPVOID *))v14->lpVtbl->GetId)(v14, &pv);
          v10 = &word_180133238;
          if ( pv )
            v10 = (const WCHAR *)pv;
          Instance = PublishChangeNotification((unsigned int)v5, (unsigned int)v6, v10);
          if ( Instance < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
            if ( v9 )
              ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
            goto LABEL_17;
          }
          CoTaskMemFree(pv);
          pv = 0LL;
          if ( v9 )
            ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 7 );
      ++v5;
      ++a2;
      if ( v5 < 2 )
        continue;
      break;
    }
  }
LABEL_17:
  if ( v12[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)Instance;
}
