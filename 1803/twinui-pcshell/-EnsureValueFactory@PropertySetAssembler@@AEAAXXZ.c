/*
 * XREFs of ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x180265430
 * Callers:
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x180265120 (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1801FA958 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PropertySetAssembler::EnsureValueFactory(PropertySetAssembler *this)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  int ActivationFactory; // eax
  HSTRING_HEADER v4; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    v5 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v4, L"Windows.Foundation.PropertyValue", 0x21u, 0x20u);
    v2 = v5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
    ActivationFactory = RoGetActivationFactory(v2, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v1);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        238LL,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)ActivationFactory);
  }
}
