/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x1401313B8
 * Callers:
 *     PpmCheckStart @ 0x1400E4720 (PpmCheckStart.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x1406F9D48 (PpmPerfReApplyStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 613) = 1;
  return result;
}
