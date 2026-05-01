/*
 * XREFs of ?IsEqualByAppId@ViewWrapperBase@@UEAA_NPEBG@Z @ 0x180051C40
 * Callers:
 *     ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x18003152C (-_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-$CRefCounte.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViewWrapperBase::IsEqualByAppId(HSTRING *this, const unsigned __int16 *a2)
{
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax

  StringLen = WindowsGetStringLen(this[18]);
  StringRawBuffer = WindowsGetStringRawBuffer(this[18], 0LL);
  return CompareStringOrdinal(StringRawBuffer, StringLen, a2, -1, 1) == 2;
}
