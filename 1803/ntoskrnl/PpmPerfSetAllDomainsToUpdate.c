/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14014CE8C
 * Callers:
 *     PpmCheckStart @ 0x1400356C0 (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1405EA8BC (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 701) = 1;
  return result;
}
