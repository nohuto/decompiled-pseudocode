/*
 * XREFs of KeQueryHeteroCpuPolicyThread @ 0x1401FCBC0
 * Callers:
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401FCD58 (KeSetUserHeteroCpuPolicyThread.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryHeteroCpuPolicyThread(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
  {
    result = *(_BYTE *)(a1 + 126) & 0x7F;
    if ( (_DWORD)result == 8 )
      return (unsigned int)KiDefaultHeteroCpuPolicy;
  }
  else if ( KeHeteroSystem != 1 )
  {
    return *(unsigned __int8 *)(a1 + 125);
  }
  return result;
}
