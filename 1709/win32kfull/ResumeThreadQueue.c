/*
 * XREFs of ResumeThreadQueue @ 0x1C010E890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResumeThreadQueue(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 464);
  if ( (result & 0x1000000) != 0 && (result & 1) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 408) + 408LL) = a2;
    if ( *(_DWORD *)(a1 + 1128) )
      *(_DWORD *)(a1 + 1128) = a2;
    result = *(_QWORD *)(a1 + 424);
    _InterlockedExchange(
      (volatile __int32 *)(result + 12),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    *(_DWORD *)(a1 + 1184) &= ~0x20u;
  }
  return result;
}
