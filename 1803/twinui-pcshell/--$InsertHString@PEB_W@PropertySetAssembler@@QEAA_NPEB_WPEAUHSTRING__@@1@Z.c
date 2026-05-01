/*
 * XREFs of ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x180265120
 * Callers:
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x180265B28 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x180265430 (-EnsureValueFactory@PropertySetAssembler@@AEAAXXZ.c)
 *     ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x180265D0C (-Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PropertySetAssembler::InsertHString<wchar_t const *>(
        PropertySetAssembler *this,
        __int64 a2,
        HSTRING a3,
        __int64 a4)
{
  HRESULT v6; // eax
  const wchar_t *v7; // rdx
  struct IInspectable *v8; // r9
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v14; // [rsp+48h] [rbp+10h] BYREF
  INT32 v15; // [rsp+58h] [rbp+20h] BYREF
  int v16; // [rsp+5Ch] [rbp+24h]

  v16 = HIDWORD(a4);
  v14 = 0LL;
  v15 = 0;
  v6 = WindowsCompareStringOrdinal(a3, 0LL, &v15);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      98LL,
      (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v15 )
  {
    PropertySetAssembler::EnsureValueFactory(this);
    v9 = *((_QWORD *)this + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v14);
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v9 + 144LL))(v9, a3, &v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        102LL,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
  }
  v11 = PropertySetAssembler::Insert(this, v7, v14, v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v14);
  return v11;
}
