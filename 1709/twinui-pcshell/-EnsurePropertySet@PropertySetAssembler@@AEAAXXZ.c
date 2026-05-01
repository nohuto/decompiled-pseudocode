/*
 * XREFs of ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x1801BC3FC
 * Callers:
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x1801BD3E0 (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PropertySetAssembler::EnsurePropertySet(PropertySetAssembler *this)
{
  HRESULT v2; // eax
  HSTRING v3; // rdi
  __int64 v4; // rcx
  int v5; // edi
  _QWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v7; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v8; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6[1] = -2LL;
  if ( !*(_QWORD *)this )
  {
    v8 = 0LL;
    v2 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &v7, &v8);
    if ( v2 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    v3 = v8;
    v4 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      *(_QWORD *)this = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *(_QWORD *)this = 0LL;
    v5 = RoActivateInstance(v3, v6);
    if ( v5 >= 0 )
    {
      if ( *(_QWORD *)&GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        *(_QWORD *)this = v6[0];
      }
      else
      {
        v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, PropertySetAssembler *))v6[0])(
               v6[0],
               &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
               this);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
      }
    }
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xDD,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v5);
  }
}
