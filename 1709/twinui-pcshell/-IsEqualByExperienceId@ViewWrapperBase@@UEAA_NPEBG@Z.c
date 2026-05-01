/*
 * XREFs of ?IsEqualByExperienceId@ViewWrapperBase@@UEAA_NPEBG@Z @ 0x18013DD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ViewWrapperBase::IsEqualByExperienceId(HSTRING *this, const unsigned __int16 *a2)
{
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax

  StringLen = WindowsGetStringLen(this[20]);
  StringRawBuffer = WindowsGetStringRawBuffer(this[20], 0LL);
  return CompareStringOrdinal(StringRawBuffer, StringLen, a2, -1, 0) == 2;
}
