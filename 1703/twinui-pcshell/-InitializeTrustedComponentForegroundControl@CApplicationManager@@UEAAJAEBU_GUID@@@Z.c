/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x18000F820
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C640 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITrust.c)
 *     ??$Make@VCTrustedComponentForegroundControl@@AEAPEAUIImmersiveApplicationManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTrustedComponentForegroundControl@@@12@AEAPEAUIImmersiveApplicationManager@@@Z @ 0x18002C6EC (--$Make@VCTrustedComponentForegroundControl@@AEAPEAUIImmersiveApplicationManager@@@Details@WRL@M.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::InitializeTrustedComponentForegroundControl(
        CApplicationManager *this,
        const struct _GUID *a2)
{
  HRESULT Instance; // edi
  unsigned int v5; // r8d
  struct CApplicationManager::TRUSTED_COMPONENT_REGISTRATION near **i; // r9
  LPVOID *ppv; // rsi
  LPVOID v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v12[1] = -2LL;
  Instance = -2147024891;
  v5 = 0;
  for ( i = &CApplicationManager::s_rgTrustedComponentRegMap;
        *(_QWORD *)*i != *(_QWORD *)&a2->Data1 || *((_QWORD *)*i + 1) != *(_QWORD *)a2->Data4;
        i += 2 )
  {
    if ( ++v5 >= 0xB )
      return (unsigned int)Instance;
  }
  ppv = (LPVOID *)(&CApplicationManager::s_rgTrustedComponentRegMap + 2 * v5 + 1);
  v8 = *ppv;
  if ( *ppv )
  {
    *ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Instance = CoCreateInstance(a2, 0LL, 0x401u, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd, ppv);
  if ( Instance >= 0 )
  {
    v14 = ((unsigned __int64)this - 112) & -(__int64)(this != (CApplicationManager *)232);
    v13 = 0LL;
    Microsoft::WRL::Details::Make<CTrustedComponentForegroundControl,IImmersiveApplicationManager * &>(v12, &v14);
    v9 = v12[0];
    Instance = v12[0] == 0LL ? 0x8007000E : 0;
    if ( v12[0] )
      Instance = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ITrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                   v12[0],
                   &GUID_2a74d8da_47f0_47be_b3e6_195778432fb4,
                   &v13);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)*ppv + 24LL))(*ppv, v13);
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return (unsigned int)Instance;
}
