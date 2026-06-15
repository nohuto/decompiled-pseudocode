/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$5 @ 0x18008FF3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetStreamVpoContext_dtor_5(__int64 a1, __int64 a2)
{
  std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>((__int64 **)(a2 + 80));
}
