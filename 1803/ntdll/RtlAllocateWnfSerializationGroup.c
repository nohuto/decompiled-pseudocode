/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x1800825D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_18015D060);
  while ( !(_DWORD)result );
  return result;
}
