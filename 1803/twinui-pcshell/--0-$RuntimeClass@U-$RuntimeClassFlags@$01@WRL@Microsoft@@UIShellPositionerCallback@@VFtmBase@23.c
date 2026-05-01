/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180025610
 * Callers:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97_____lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BE78 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___ @ 0x180025720 (ShellPositionerHelpers--PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_a0818f22e8da6413a11714d28d92e781_____lambda_a0818f22e8da6413a11714d28d92e781___ @ 0x18009D198 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_a.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_f1e02a3692b4c9337fd01f6030d19989_____lambda_f1e02a3692b4c9337fd01f6030d19989___ @ 0x18009D22C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_df217c5df2fbb65f71a021bc131d5b60_____lambda_df217c5df2fbb65f71a021bc131d5b60___ @ 0x180139120 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_d.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fc65bde0abdb4999419d5ab09ca650e6_____lambda_fc65bde0abdb4999419d5ab09ca650e6___ @ 0x18013919C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallb_ea_18013919C.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228_____lambda_3f2ef8e9fc1bcbb7ef891c2e585fa228___ @ 0x180141154 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallb_ea_180141154.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_a0147b3457b18c7355ad2e033d70a460_____lambda_a0147b3457b18c7355ad2e033d70a460___ @ 0x18014EE64 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallb_ea_18014EE64.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_c3737f3ad336e56436bbe3e31d4979f5_____lambda_c3737f3ad336e56436bbe3e31d4979f5___ @ 0x18014EEE0 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_c.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___::ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afbf___ @ 0x1802B5F2C (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_ee995d2f67f50fc64c926f6b83f9afb.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  void (*v5)(void); // rax
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  ppunkMarshal = 0LL;
  v1 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  v4 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IShellPositionerCallback'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
    else
      v5();
  }
  return a1;
}
