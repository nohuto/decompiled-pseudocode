/*
 * XREFs of ?GetRawBuffer@String@Internal@Windows@@QEBAPEBGPEAI@Z @ 0x1800F7574
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Windows::Internal::String::GetRawBuffer(HSTRING *this, unsigned int *a2)
{
  return WindowsGetStringRawBuffer(*this, 0LL);
}
