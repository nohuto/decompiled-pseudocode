/*
 * XREFs of NtRIMReadInput @ 0x1C0093040
 * Callers:
 *     <none>
 * Callees:
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009539C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMReadInput(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMReadInput(a1, a2, a3, a4, 1, a5, a6, a7);
  else
    return 3221225506LL;
}
