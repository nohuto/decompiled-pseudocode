/*
 * XREFs of LdrSetDllManifestProber @ 0x180082230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrSetDllManifestProber(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  qword_18015CFA0 = a1;
  qword_18015CF98 = a2;
  qword_18015CFA8 = a3;
}
