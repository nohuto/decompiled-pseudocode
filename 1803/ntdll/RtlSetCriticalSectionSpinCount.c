/*
 * XREFs of RtlSetCriticalSectionSpinCount @ 0x180075550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetCriticalSectionSpinCount(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 32);
  v4 = v2 ^ (a2 ^ v2) & 0xFFFFFF;
  v5 = v4 & 0xFF000000;
  if ( NtCurrentPeb()->NumberOfProcessors != 1 )
    v5 = v4;
  result = v2 & 0xFFFFFF;
  *(_QWORD *)(a1 + 32) = v5;
  return result;
}
