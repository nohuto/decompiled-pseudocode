/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$3 @ 0x18008F20B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetEndpointVpoContext_dtor_3(__int64 a1, __int64 a2)
{
  std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((__int64 **)(a2 + 80));
}
