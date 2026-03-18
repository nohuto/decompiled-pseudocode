/*
 * XREFs of PsGetSiloIdentifier @ 0x1405D5E30
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 */

__int64 __fastcall PsGetSiloIdentifier(unsigned __int64 a1)
{
  unsigned __int64 CurrentSilo; // rax
  unsigned int v2; // ecx

  CurrentSilo = a1;
  if ( a1 == -1LL )
    CurrentSilo = PsGetCurrentSilo();
  v2 = 0;
  if ( CurrentSilo )
    return *(unsigned int *)(CurrentSilo + 1220);
  return v2;
}
