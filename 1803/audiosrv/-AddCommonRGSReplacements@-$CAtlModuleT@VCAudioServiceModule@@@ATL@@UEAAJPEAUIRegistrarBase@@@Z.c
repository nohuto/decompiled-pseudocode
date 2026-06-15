/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioServiceModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x18009CD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioServiceModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, const WCHAR *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &word_180133238);
}
