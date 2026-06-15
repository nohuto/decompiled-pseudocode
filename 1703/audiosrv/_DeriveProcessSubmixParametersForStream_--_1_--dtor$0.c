/*
 * XREFs of _DeriveProcessSubmixParametersForStream_::_1_::dtor$0 @ 0x18005BC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeriveProcessSubmixParametersForStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(a2 + 72);
}
