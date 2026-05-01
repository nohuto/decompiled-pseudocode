/*
 * XREFs of ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1800CB120
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ??$Make@VCImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1800CBAE0 (--$Make@VCImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveShell.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController(
        CImmersiveShellBuilder *this,
        struct IImmersiveShellController **a2)
{
  HRESULT Instance; // edi
  volatile signed __int32 *v4; // rbx
  int v5; // eax
  struct IImmersiveShellController *v6; // rcx
  struct IImmersiveShellController *v8; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int32 *v9; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Instance = CoCreateInstance(
               &GUID_23650f94_13b8_4f39_b2c3_817e6564a756,
               0LL,
               1u,
               &GUID_d6948331_eaf5_4365_86ac_d8d1d03b4600,
               (LPVOID *)&v8);
  if ( Instance < 0 )
    goto LABEL_8;
  Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior>(&v9);
  v4 = v9;
  v5 = (*(__int64 (__fastcall **)(struct IImmersiveShellController *, _QWORD))(*(_QWORD *)v8 + 40LL))(
         v8,
         (unsigned __int64)(v9 + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64));
  v6 = v8;
  Instance = v5;
  if ( v5 >= 0 )
  {
    if ( v8 )
    {
      (*(void (**)(void))(*(_QWORD *)v8 + 8LL))();
      v6 = v8;
    }
    *a2 = v6;
  }
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
LABEL_8:
    v6 = v8;
  }
  if ( v6 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveShellController *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)Instance;
}
