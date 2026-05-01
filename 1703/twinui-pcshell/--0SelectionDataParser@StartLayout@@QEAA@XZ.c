/*
 * XREFs of ??0SelectionDataParser@StartLayout@@QEAA@XZ @ 0x180174AC8
 * Callers:
 *     ??$Make@VSelectionDataParser@StartLayout@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@StartLayout@@@12@XZ @ 0x18008C9A8 (--$Make@VSelectionDataParser@StartLayout@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSelectionDataPa.c)
 * Callees:
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1801753B0 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
StartLayout::SelectionDataParser *__fastcall StartLayout::SelectionDataParser::SelectionDataParser(
        StartLayout::SelectionDataParser *this)
{
  BSTR v2; // rax
  BSTR v3; // rax
  BSTR v4; // rax
  BSTR v5; // rax
  BSTR v6; // rax
  BSTR v7; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,StartLayout::ISelectionDataParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &StartLayout::SelectionDataParser::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = SysAllocString(L"GroupCellWidth");
  _bstr_t::operator=((char *)this + 16, v2);
  v3 = SysAllocString(L"PreInstalledAppsEnabled");
  _bstr_t::operator=((char *)this + 24, v3);
  v4 = SysAllocString(L"Region");
  _bstr_t::operator=((char *)this + 32, v4);
  v5 = SysAllocString(L"DualSim");
  _bstr_t::operator=((char *)this + 40, v5);
  v6 = SysAllocString(L"SystemFeatures");
  _bstr_t::operator=((char *)this + 48, v6);
  v7 = SysAllocString(L"SKU");
  _bstr_t::operator=((char *)this + 56, v7);
  return this;
}
