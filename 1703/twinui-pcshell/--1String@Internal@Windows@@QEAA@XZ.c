/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x18002076C
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x180198589 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FindMatchingViewEventRegistration_::_1_::dtor$0 @ 0x18019EA24 (_ViewEventDispatcher--_FindMatchingViewEventRegistration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
