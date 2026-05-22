/*
 * XREFs of ??$_Copy_impl@VLegacyInputSinkData@@@_Any_big_RTTI@std@@SAPEAXQEBX@Z @ 0x18000D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LegacyInputSinkData@@QEAA@PEAX@Z @ 0x18000D178 (--0LegacyInputSinkData@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
LegacyInputSinkData *__fastcall std::_Any_big_RTTI::_Copy_impl<LegacyInputSinkData>(void **a1)
{
  LegacyInputSinkData *v3; // [rsp+48h] [rbp+10h]

  v3 = (LegacyInputSinkData *)operator new(0x160uLL);
  LegacyInputSinkData::LegacyInputSinkData(v3, *a1);
  return v3;
}
