/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180086CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_1801600B0);
  while ( !(_DWORD)result );
  return result;
}
