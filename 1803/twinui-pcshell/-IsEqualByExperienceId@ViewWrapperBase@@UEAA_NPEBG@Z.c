/*
 * XREFs of ?IsEqualByExperienceId@ViewWrapperBase@@UEAA_NPEBG@Z @ 0x180051CD0
 * Callers:
 *     ?_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z @ 0x180032AA0 (-_ViewFromHostIdAndExperienceId@ViewEventDispatcher@@AEAAJ_KPEBGPEAPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViewWrapperBase::IsEqualByExperienceId(HSTRING *this, const unsigned __int16 *a2)
{
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax

  StringLen = WindowsGetStringLen(this[19]);
  StringRawBuffer = WindowsGetStringRawBuffer(this[19], 0LL);
  return CompareStringOrdinal(StringRawBuffer, StringLen, a2, -1, 0) == 2;
}
