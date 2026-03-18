/*
 * XREFs of PsQueryThreadStartAddress @ 0x14006D11C
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     EtwpPsProvTraceThread @ 0x1404FD6FC (EtwpPsProvTraceThread.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     sub_140897B70 @ 0x140897B70 (sub_140897B70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return *(_QWORD *)(a1 + 1680);
  v3 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 1680);
  if ( (*(_DWORD *)(a1 + 1752) & 8) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1552);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    if ( (*(_DWORD *)(a1 + 1752) & 8) == 0 )
      return v4;
  }
  return v3;
}
