/*
 * XREFs of ??$_Destroy_impl@VLegacyInputSinkData@@@_Any_big_RTTI@std@@SAXQEAX@Z @ 0x18000D060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Any_big_RTTI::_Destroy_impl<LegacyInputSinkData>(_QWORD *Block)
{
  if ( Block )
  {
    if ( (unsigned __int64)(*Block - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink();
    operator delete(Block);
  }
}
