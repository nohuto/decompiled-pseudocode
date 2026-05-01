/*
 * XREFs of ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1800DF0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1800E02D8 (--$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveSh.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController(
        CImmersiveShellBuilder *this,
        struct IImmersiveShellController **a2)
{
  HRESULT v3; // edi
  unsigned __int64 v4; // rbx
  int v5; // eax
  struct IImmersiveShellController *v6; // rcx
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v3 = CoCreateInstance(
         &GUID_23650f94_13b8_4f39_b2c3_817e6564a756,
         0LL,
         1u,
         &GUID_d6948331_eaf5_4365_86ac_d8d1d03b4600,
         &ppv);
  if ( v3 < 0 )
  {
LABEL_10:
    v6 = (struct IImmersiveShellController *)ppv;
    goto LABEL_11;
  }
  Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior,>(&v9);
  v4 = v9;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 40LL))(
         ppv,
         (v9 + 40) & ((unsigned __int128)-(__int128)v9 >> 64));
  v6 = (struct IImmersiveShellController *)ppv;
  v3 = v5;
  if ( v5 >= 0 )
  {
    if ( ppv )
    {
      (*(void (**)(void))(*(_QWORD *)ppv + 8LL))();
      v6 = (struct IImmersiveShellController *)ppv;
    }
    *a2 = v6;
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( v6 )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(struct IImmersiveShellController *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v3;
}
