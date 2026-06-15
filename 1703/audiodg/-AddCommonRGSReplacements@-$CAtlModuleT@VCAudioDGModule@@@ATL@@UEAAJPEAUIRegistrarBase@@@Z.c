/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioDGModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x140035630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioDGModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, void *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &unk_14006B308);
}
