/*
 * XREFs of NtRIMReadInput @ 0x1C0009060
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0009030 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 */

__int64 __fastcall NtRIMReadInput(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMReadInput(a1, a2, a3, a4, 1, a5, a6, a7);
  else
    return 3221225506LL;
}
